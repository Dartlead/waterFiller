#include <unistd.h>
#include <stdint.h>
#include <stddef.h>
#include <stdbool.h>
#include <ti/drivers/gpio/GPIOCC32XX.h>
#include <ti/drivers/Power.h>
#include <ti/boards/CC3220S_LAUNCHXL/CC3220S_LAUNCHXL.h>
#include <state.h>
#include <water.h>
#include <should_not_happen.h>
#include <button.h>

/*--------------------------------Constants & Pound Defines------------------------------------*/

/*--------------------------------Global Variables---------------------------------------------*/

/*--------------------------------Local Function Prototypes------------------------------------*/

/*--------------------------------Main Thread--------------------------------------------------*/
void *mainThread(void *arg0)
{
    /* Call driver initialization functions */
    GPIO_init();

    /* Enable the ISR for the Big Red Button */
    initialize_button_interrupt();

    /* Create the sleep duration */
    const int sleep_duration = 2;

    /* Start the FSM in SLEEP state */
    state_list_t current_state = SLEEP;

    /* Initialize the water dispensing boolean to false */
    bool b_did_water_dispense = false;

    /* Main control loop */
    while (1)
    {
        switch (current_state)
        {
            /* State */
            case SLEEP:
                /* State action */
                sleep(sleep_duration);

                /* State transition */
                if (is_the_button_pressed())
                {
                    clear_button_interrupt();
                    current_state = get_next_state(current_state);
                }
                else
                {
                    //This should always happen if no button press
                }
            break;

            /* State */
            case DISPENSE:
                /* State action */
                b_did_water_dispense = dispense_water();

                /* State transition */
                if (b_did_water_dispense == true)
                {
                    current_state = get_next_state(current_state);
                }
                else
                {
                    standard_error();
                }
            break;

            default:
                this_should_never_happen_error();
            break;
        }
    }
}

/*--------------------------------Local Function Definitions-----------------------------------*/



/*Power Modes:
 * Sleep Mode - (standard low power mode for ARM Cortex-M4).
 *              Short wake-up time, any interrupt can wake the MCU (debugger disconnects in this mode).
 * Low Power Deep Sleep - Functional clock and peripheral clocks are gated. Slow clock still runs.
 *              3 ms wake-up time. Only interrupts from network processor, LPDS wake timer, or some GPIO can interrupt sleep.
 *              LPDS does not affect the network processor nor its configurations.
 * Hibernate - Shuts down both the application and network processors. Slow clock still runs.
 *              Everything is shut down, only an interrupt from the slow clock or some GPIOs can wake up the chip.
 */
