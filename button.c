#include <button.h>
#include <ti/drivers/GPIO.h>
#include <ti/boards/CC3220S_LAUNCHXL/Board.h>

#define DEBUG

/* Button-module wide global referring to the big red button's pressed state */
static volatile bool gb_is_button_pressed = false;

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
    return;
}

/*
 * This function initializes the interrupt associated with the big red button by calling
 * 1) GPIO_setCallback
 * 2) GPIO_enableInt
 *
 * Inputs: none
 * Outputs: none
 */
void initialize_button_interrupt(void)
{
#ifdef PRODUCTION
    GPIO_setCallback(3, gpio_button_callback);
    GPIO_enableInt(3);
#endif
#ifdef DEBUG
    GPIO_setCallback(Board_GPIO_BUTTON0, gpio_button_callback);
    GPIO_enableInt(Board_GPIO_BUTTON0);
#endif

    return
}

/*
 * This function queries whether or not the button is pressed by checking the status of the
 * Button-module wide global.
 *
 * Inputs: none
 * Outputs: whether or not the button is pressed
 */
bool is_the_button_pressed(void)
{
    bool b_is_the_button_pressed;
    if (gb_is_button_pressed == true)
    {
        b_is_the_button_pressed = true;
    }
    else
    {
        b_is_the_button_pressed = false;
    }

    return b_is_the_button_pressed;

}

/*
 * This function clears the interrupt associated with the big red button by setting the
 * global boolean is_button_pressed to false.
 *
 * Inputs: none
 * Outputs: none
 */
void clear_button_interrupt(void)
{
    gb_is_button_pressed = false;
    return;
}


