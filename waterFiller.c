/* For usleep() */
#include <unistd.h>
#include <stdint.h>
#include <stddef.h>
#include <stdbool.h>

/* Driver Header files */
#include <ti/drivers/GPIO.h>
#include <ti/drivers/gpio/GPIOCC32XX.h>
#include <ti/drivers/Power.h>
#include <ti/boards/CC3220S_LAUNCHXL/CC3220S_LAUNCHXL.h>

/* Board Header file */
#include <Board.h>

/* Nick's Header files */
#include <state.h>
#include <water.h>

/*--------------------------------Constants & Pound Defines------------------------------------*/
#ifdef DEBUG
static const int sleep_duration = 2;
#endif

/*--------------------------------Global Variables---------------------------------------------*/
/* Flag for internal tracking of whether or not the button has been pressed */
static volatile bool gb_button_pressed = false;

/*--------------------------------Local Function Prototypes------------------------------------*/
#ifdef TEST_STATE
static void gpio_button_callback(uint_least8_t index);
#endif
/*
 * Callback for the GPIO pin connected to the Big Red Button. Once the button is pressed this
 * callback function is triggered.
 */
static void button_pin_callback(uint_least8_t index);

/*--------------------------------Main Thread--------------------------------------------------*/
void *mainThread(void *arg0)
{
    /* Call driver init functions */
    GPIO_init();

    /* Install and enable the callback for the BigRedButton's GPIO input */
    GPIO_setCallback(3, button_pin_callback);
    GPIO_enableInt(3);

    /* Start the FSM in SLEEP state */
    state_list_t current_state = SLEEP;
    bool b_did_water_dispense = false;

    static const int sleep_duration = 2; //Static local variable means it is statically allocated - retains is value between invocations... keep as a just in case???

    while (1)
    {
        switch (current_state)
        {
            case SLEEP:
                sleep(sleep_duration);
                if (gb_button_pressed == true)
                {
                    gb_button_pressed = false;
                    current_state = get_next_state(current_state);
                }
                else
                {
                    gb_button_pressed = false;
                }
            break;
            case DISPENSE:
                b_did_water_dispense = dispense_water();
                if (b_did_water_dispense == true)
                {
                    current_state = get_next_state(current_state);
                }
                else
                {
                    //error out
                    while (1);
                }
            break;
            default: //Not necessary but matter of good form
                sleep(sleep_duration);
            break;
        }
    }
}

/*--------------------------------Local Function Definitions-----------------------------------*/
#ifdef TEST_STATE
void gpio_button_callback(uint_least8_t index)
{
    gb_button_pressed = true;
}
#endif
/*
 * Callback for the GPIO pin connected to the Big Red Button. Once the button is pressed this
 * callback function is triggered.
 */
void button_pin_callback(uint_least8_t index)
{
    gb_button_pressed = true;
}




/*Power Modes:
 * Sleep Mode - (standard low power mode for ARM Cortex-M4).
 *              Short wake-up time, any interrupt can wake the MCU (debugger disconnects in this mode).
 * Low Power Deep Sleep - Functional clock and peripheral clocks are gated. Slow clock still runs.
 *              3 ms wake-up time. Only interrupts from network processor, LPDS wake timer, or some GPIO can interrupt sleep.
 *              LPDS does not affect the network processor nor its configurations.
 * Hibernate - Shuts down both the application and network processors. Slow clock still runs.
 *              Everything is shut down, only an interrupt from the slow clock or some GPIOs can wake up the chip.
 */
