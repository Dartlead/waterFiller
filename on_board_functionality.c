/* Directly associated header file */
#include <on_board_functionality.h>

/* Standard library files */
#include <stdbool.h>

/* Driver Header files */
#include <ti/drivers/GPIO.h>

/* Example/Board Header files */
#include "Board.h"

/*--------------------------------Global Variables---------------------------------------------*/
/* Module wide global flags so that all functions in the module are aware of
 * whether or not a particular LED is initialized. These flags have to module-
 * wide because both the initialization and LED lighting functions need this
 * information.
 */
static bool gb_is_led_d5_initialized = false;
static bool gb_is_led_d6_initialized = false;
static bool gb_is_led_d7_initialized = false;

/* Module wide global flags so that all functions in the module are aware of
 * whether or not a particular LED is initialized. These flags have to be
 * module-wide because both the initialization and LED lighting functions need
 * this information.
 */
static bool gb_is_led_d5_on = false;
static bool gb_is_led_d6_on = false;
static bool gb_is_led_d7_on = false;

/*--------------------------------Function Definitions-----------------------------------------*/
/*
 * This function initializes on-board LED D7 on the CC3220S LAUNCHXL Dev Board
 * by using the GPIO_setConfig() function found in the GPIO.h TI driver header
 * file.
 *
 * Inputs: none
 * Outputs: none
 */
void initialize_board_led_d7(void)
{
    /* Initialize LED D7 */
    if (gb_is_led_d7_initialized == false)
    {
        GPIO_setConfig(Board_GPIO_LED0, GPIO_CFG_OUT_STD | GPIO_CFG_OUT_LOW);
        gb_is_led_d7_initialized = true;
    }
    else
    {
        //Do nothing as the LED is already initialized
    }
}

/*
 * This function initializes on-board LED D5 on the CC3220S LAUNCHXL Dev Board
 * by using the GPIO_setConfig() function found in the GPIO.h TI driver header
 * file.
 *
 * Inputs: none
 * Outputs: none
 */
void initialize_board_led_d5(void)
{
    /* Initialize LED D5 */
    if (gb_is_led_d5_initialized == false)
    {
        GPIO_setConfig(Board_GPIO_LED1, GPIO_CFG_OUT_STD | GPIO_CFG_OUT_LOW);
        gb_is_led_d5_initialized = true;
    }
    else
    {
        //Do nothing as the LED is already initialized
    }
}

/*
 * This function initializes on-board LED D6 on the CC3220S LAUNCHXL Dev Board
 * by using the GPIO_setConfig() function found in the GPIO.h TI driver header
 * file.
 *
 * Inputs: none
 * Outputs: none
 */
void initialize_board_led_d6(void)
{
    /* Initialize LED D6 */
    if (gb_is_led_d6_initialized == false)
    {
        GPIO_setConfig(Board_GPIO_LED2, GPIO_CFG_OUT_STD | GPIO_CFG_OUT_LOW);
        gb_is_led_d6_initialized = true;
    }
    else
    {
        //Do nothing as the LED is already initialized
    }
}

/*
 * This function turns on the on-board LED D5 on the CC3220s LAUNCHXL Dev
 * Board by using the GPIO_write() function found in the GPIO.h TI driver
 * header file.
 *
 * Inputs: none
 * Outputs:none
 */
void turn_on_on_board_led_d5(void)
{
    if (gb_is_led_d5_initialized == true)
    {
        /* Turn on LED D5 */
        if (gb_is_led_d5_on == false)
        {
            GPIO_write(Board_GPIO_LED1, Board_GPIO_LED_ON);
            gb_is_led_d5_on = true;
        }
        else
        {
            //Do nothing as LED D5 is already on
        }
    }
    else
    {
        //Do nothing as the LED is not initialized
    }
}

/*
 * This function turns on the on-board LED D6 on the CC3220s LAUNCHXL Dev
 * Board by using the GPIO_write() function found in the GPIO.h TI driver
 * header file.
 *
 * Inputs: none
 * Outputs:none
 */
void turn_on_on_board_led_d6(void)
{

    if (gb_is_led_d6_initialized == true)
    {
        /* Turn on LED D6 */
        if (gb_is_led_d6_on == false)
        {
            GPIO_write(Board_GPIO_LED2, Board_GPIO_LED_ON);
            gb_is_led_d6_on = true;
        }
        else
        {
            //Do nothing as LED D6 is already on
        }
    }
    else
    {
        //Do nothing as the LED is not initialized
    }
}

/*
 * This function turns on the on-board LED D7 on the CC3220s LAUNCHXL Dev
 * Board by using the GPIO_write() function found in the GPIO.h TI driver
 * header file.
 *
 * Inputs: none
 * Outputs:none
 */
void turn_on_on_board_led_d7(void)
{
    if (gb_is_led_d7_initialized == true)
    {
        /* Turn on LED D7 */
        if (gb_is_led_d7_on == false)
        {
            GPIO_write(Board_GPIO_LED0, Board_GPIO_LED_ON);
            gb_is_led_d7_on = true;
        }
        else
        {
            //Do nothing as LED D7 is already on
        }
    }
    else
    {
        //Do nothing as the LED is not initialized
    }
}

/*
 * This function turns off the on-board LED D5 on the CC3220S LAUNCH XL
 * Dev Board by using the GPIO_write() function found in the GPIO.h TI
 * driver header file.
 *
 * Inputs: none
 * Outputs: none
 */
void turn_off_on_board_led_d5(void)
{
    if (gb_is_led_d5_initialized == true)
    {
        /* Turn off LED D5 */
        if (gb_is_led_d5_on == true)
        {
            GPIO_write(Board_GPIO_LED1, Board_GPIO_LED_OFF);
            gb_is_led_d5_on = false;
        }
        else
        {
            //Do nothing as LED D5 is already off
        }
    }
    else
    {
        //Do nothing as the LED is not initialized
    }
}

/*
 * This function turns off the on-board LED D6 on the CC3220S LAUNCH XL
 * Dev Board by using the GPIO_write() function found in the GPIO.h TI
 * driver header file.
 *
 * Inputs: none
 * Outputs: none
 */
void turn_off_on_board_led_d6(void)
{
    if (gb_is_led_d6_initialized == true)
    {
        /* Turn off LED D6 */
        if (gb_is_led_d6_on == true)
        {
            GPIO_write(Board_GPIO_LED2, Board_GPIO_LED_OFF);
            gb_is_led_d6_on = false;
        }
        else
        {
            //Do nothing as LED D6 is already off
        }
    }
    else
    {
        //Do nothing as the LED is not initialized
    }
}

/*
 * This function turns off the on-board LED D7 on the CC3220S LAUNCH XL
 * Dev Board by using the GPIO_write() function found in the GPIO.h TI
 * driver header file.
 *
 * Inputs: none
 * Outputs: none
 */
void turn_off_on_board_led_d7(void)
{
    if (gb_is_led_d7_initialized == true)
    {
        /* Turn off LED D7 */
        if (gb_is_led_d7_on == true)
        {
            GPIO_write(Board_GPIO_LED0, Board_GPIO_LED_OFF);
            gb_is_led_d7_on = false;
        }
        else
        {
            //Do nothing as LED D7 is already off
        }
    }
    else
    {
        //Do nothing as the LED is not initialized
    }
}

/*
 * This function toggles the state of the on-board LED D5 on the CC3220S
 * LAUNCH XL Dev Board by using the GPIO_toggle() function found in the
 * GPIO.h TI driver header file.
 *
 * Inputs: none
 * Outputs: none
 */
void toggle_on_board_led_d5(void)
{
    if (gb_is_led_d5_initialized == true)
    {
        /* Toggle LED D5 */
        GPIO_toggle(Board_GPIO_LED1);
        if (gb_is_led_d5_on == true)
        {
            gb_is_led_d5_on = false;
        }
        else
        {
            gb_is_led_d5_on = true;
        }
    }
    else
    {
        //Do nothing as the LED is not initialized
    }
}

/*
 * This function toggles the state of the on-board LED D6 on the CC3220S
 * LAUNCH XL Dev Board by using the GPIO_toggle() function found in the
 * GPIO.h TI driver header file.
 *
 * Inputs: none
 * Outputs: none
 */
void toggle_on_board_led_d6(void)
{
    if (gb_is_led_d6_initialized == true)
    {
        /* Toggle LED D6 */
        GPIO_toggle(Board_GPIO_LED2);
        if (gb_is_led_d6_on == true)
        {
            gb_is_led_d6_on = false;
        }
        else
        {
            gb_is_led_d6_on = true;
        }
    }
    else
    {
        //Do nothing as the LED is not initialized
    }
}

/*
 * This function toggles the state of the on-board LED D7 on the CC3220S
 * LAUNCH XL Dev Board by using the GPIO_toggle() function found in the
 * GPIO.h TI driver header file.
 *
 * Inputs: none
 * Outputs: none
 */
void toggle_on_board_led_d7(void)
{
    if (gb_is_led_d7_initialized == true)
    {
        /* Toggle LED D7 */
        GPIO_toggle(Board_GPIO_LED0);
        if (gb_is_led_d7_on == true)
        {
            gb_is_led_d7_on = false;
        }
        else
        {
            gb_is_led_d7_on = true;
        }
    }
    else
    {
        //Do nothing as the LED is not initialized
    }
}

/*
 * This function initializes the left on-board button on the
 * CC3220S LAUNCHXL Dev Board by calling the GPIO_setConfig() functions
 * provided in the GPIO.h TI driver header file.
 *
 * Inputs: none
 * Outputs: none
 */
void initialize_the_left_on_board_button(void)
{
    /* Flag to track whether or not the button has been intialized */
    static bool b_is_left_button_initialized = false;

    /* Initialize the left button */
    if (b_is_left_button_initialized == false)
    {
        GPIO_setConfig(Board_GPIO_BUTTON0, GPIO_CFG_IN_PU | GPIO_CFG_IN_INT_FALLING);
        b_is_left_button_initialized = true;
    }
    else
    {
        //Do nothing as the button has already been initialized
    }

}

/*
 * This function initializes the right on-board button on the
 * CC3220S LAUNCHXL Dev Board by calling the GPIO_setConfig() functions
 * provided in the GPIO.h TI driver header file.
 *
 * Inputs: none
 * Outputs: none
 */
void initialize_the_right_on_board_button(void)
{
    /* Flag to track whether or not the button has been initialized */
    static bool b_is_right_button_initialized = false;

    /* Initialize the right button */
    if (b_is_right_button_initialized == false)
    {
        GPIO_setConfig(Board_GPIO_BUTTON1, GPIO_CFG_IN_PU | GPIO_CFG_IN_INT_FALLING);
        b_is_right_button_initialized = true;
    }
    else
    {
        //Do nothing as the button has already been initialized
    }
}



