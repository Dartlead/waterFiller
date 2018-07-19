/* Directly associated header file */
#include <big_red_button.h>

/* Driver Header files */
#include <ti/drivers/GPIO.h>

/* Example/Board Header files */
#include "Board.h"

/*--------------------------------Constants & Pound Defines------------------------------------*/
#define DEBUG //The big red button has yet to be implemented in hardware so instead use the on-board button

/*--------------------------------Global Variables---------------------------------------------*/
/* Button-module wide global referring to the big red button's pressed state */
static volatile bool gb_is_button_pressed = false;

/*--------------------------------Local Functions----------------------------------------------*/
/*
 * Callback for the GPIO pin connected to the Big Red Button. Once the button is pressed this
 * callback function is triggered.
 *
 * Inputs: the GPIO pin associated with the interrupt
 * Outputs: none
 */
static void gpio_button_callback(uint_least8_t index)
{
    gb_is_button_pressed = true;
}

/*
 * This function initializes the interrupt associated with the big red button by calling
 * 1) GPIO_setCallback
 * 2) GPIO_enableInt
 * found in the GPIO.h TI driver header file.
 *
 * Inputs: none
 * Outputs: none
 */
static void initialize_the_big_red_button_interrupt(void)
{
#ifdef PRODUCTION
    GPIO_setCallback(3, gpio_button_callback);
    GPIO_enableInt(3);
#endif
#ifdef DEBUG
    GPIO_setCallback(Board_GPIO_BUTTON0, gpio_button_callback);
    GPIO_enableInt(Board_GPIO_BUTTON0);
#endif
}

/*
 * This function clears the flag associated with the big red button by setting the
 * global boolean is_button_pressed to false.
 *
 * Inputs: none
 * Outputs: none
 */
static void clear_big_red_button_flag(void)
{
    gb_is_button_pressed = false;
}

/*--------------------------------Function Definitions-----------------------------------------*/
/*
 * This function initializes the big red button for operation. "Initialization" entails enabling
 * GPIO operation using the GPIO_init() function found in the GPIO.h TI driver header file and
 * enabling the interrupt for the big red button using the locally defined
 * initialize_the_big_red_button_interrupt.
 *
 * Inputs: none
 * Outputs: none
 */
void initialize_the_big_red_button(void)
{
    /* Flags to track whether or not gpio/button isr has been initialized or not */
    static bool b_is_gpio_functionality_initialized = false;
    static bool b_is_big_red_button_isr_initialized = false;

    /* Initialize GPIO */
    if (b_is_gpio_functionality_initialized == false)
    {
        GPIO_init();
        b_is_gpio_functionality_initialized = true;
    }
    else
    {
        //Do nothing as GPIO functionality is already initialized
    }

    /* Initialize the big red button's interrupt */
    if (b_is_big_red_button_isr_initialized == false)
    {
        initialize_the_big_red_button_interrupt();
        b_is_big_red_button_isr_initialized = true;
    }
    else
    {
        //Do nothing as the button's ISR is already initialized
    }
}

/*
 * This function queries whether or not the button is pressed by checking the status of the
 * button-module wide global and then clears the flag if the button has been pressed. The
 * flag has to be cleared else subsequent calls to this function will always return that
 * the button has been pressed.
 *
 * Inputs: none
 * Outputs: whether or not the button is pressed
 */
bool is_the_big_red_button_pressed(void)
{
    bool b_is_the_button_pressed;
    if (gb_is_button_pressed == true)
    {
        b_is_the_button_pressed = true;
        clear_big_red_button_flag();
    }
    else
    {
        b_is_the_button_pressed = false;
    }

    return b_is_the_button_pressed;

}


