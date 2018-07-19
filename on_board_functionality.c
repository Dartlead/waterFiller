#include <on_board_functionality.h>
#include <stdbool.h>

/* Driver Header files */
#include <ti/drivers/GPIO.h>

/* Example/Board Header files */
#include "Board.h"


/* Module wide global flag so that all functions in the module are aware of
 * whether or not a particular LED is initialized.
 */
static bool gb_is_led_d5_initialized = false;
static bool gb_is_led_d6_initialized = false;
static bool gb_is_led_d7_initialized = false;

/* Module wide global flag so that all functions in the module are aware of
 * whether or not a particular LED is ON or OFF.
 */
static bool gb_is_led_d5_on = false;
static bool gb_is_led_d6_on = false;
static bool gb_is_led_d7_on = false;

/* Module wide global falgs so that all functions in the module are aware
 * of whether or not a particular switch is initialized.
 */
static bool gb_is_left_button_initialized = false;
static bool gb_is_right_button_initialized = false;

/*
 * This function initializes all of the the the on-board LEDs on the
 * CC3220S LAUNCHXL Dev Board by using the GPIO_setConfig() function
 * found in the GPIO.h TI driver header file.
 *
 * Inputs: none
 * Outputs: none
 */
void initialize_all_on_board_leds(void)
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
 * This function turns on all of the on-board LEDs on the CC3220S LAUNCHXL Dev
 * Board by using the GPIO_write() function found in the GPIO.h TI driver header
 * file.
 *
 * Inputs: none
 * Outputs: none
 */
void turn_on_all_on_board_leds(void)
{
    if ((gb_is_led_d5_initialized == true) && (gb_is_led_d6_initialized == true) && (gb_is_led_d7_initialized == true))
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
        //Do nothing as at least one of the LEDs is not initialized
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
 * This function turns off all of the on-board LEDS on the CC3220S LAUNCH XL
 * Dev Board by using the GPIO_write() function found in the GPIO.h TI driver
 * header file.
 *
 * Inputs: none
 * Outputs: none
 */
void turn_off_all_on_board_leds(void)
{
    if ((gb_is_led_d5_initialized == true) && (gb_is_led_d6_initialized == true) && (gb_is_led_d7_initialized == true))
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
        //Do nothing as at least one of the LEDs is not initialized
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
        if (gb_is_led_d5_on == true)
        {
            gb_is_led_d5_on = false;
        }
        else
        {
            gb_is_led_d5_on = true;
        }
        GPIO_toggle(Board_GPIO_LED1);
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
        if (gb_is_led_d6_on == true)
        {
            gb_is_led_d6_on = false;
        }
        else
        {
            gb_is_led_d6_on = true;
        }
        GPIO_toggle(Board_GPIO_LED2);
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
        if (gb_is_led_d7_on == true)
        {
            gb_is_led_d7_on = false;
        }
        else
        {
            gb_is_led_d7_on = true;
        }
        GPIO_toggle(Board_GPIO_LED0);
    }
    else
    {
        //Do nothing as the LED is not initialized
    }
}

/*
 * This function initializes both of the the on-board buttons on the CC3220S LAUNCHXL
 * Dev Board by calling the GPIO_setConfig() functions provided in the GPIO.h
 * TI driver header file.
 *
 * Note that BUTTON0 refers to the leftmost board button with the board positioned upright
 * Note that BUTTON1 refers to the rightmost board button with the board positioned upright
 *
 * Inputs: none
 * Outputs: none
 */
void initialize_both_on_board_buttons(void)
{
    /* Initialize the left button */
    if (gb_is_left_button_initialized == false)
    {
        GPIO_setConfig(Board_GPIO_BUTTON0, GPIO_CFG_IN_PU | GPIO_CFG_IN_INT_FALLING);
        gb_is_left_button_initialized = true;
    }
    else
    {
        //Do nothing as the button has already been initialized
    }

    /* Initialize the right button */
    if (gb_is_right_button_initialized == false)
    {
        GPIO_setConfig(Board_GPIO_BUTTON1, GPIO_CFG_IN_PU | GPIO_CFG_IN_INT_FALLING);
        gb_is_right_button_initialized = true;
    }
    else
    {
        //Do nothing as the button has already been initialized
    }
}

/*
 * This function initializes the left on-board button on the
 * CC3220S LAUNCHXL Dev Board.
 *
 * Inputs: none
 * Outputs: none
 */
void initialize_the_left_on_board_button(void)
{
    /* Initialize the left button */
    if (gb_is_left_button_initialized == false)
    {
        GPIO_setConfig(Board_GPIO_BUTTON0, GPIO_CFG_IN_PU | GPIO_CFG_IN_INT_FALLING);
        gb_is_left_button_initialized = true;
    }
    else
    {
        //Do nothing as the button has already been initialized
    }

}

/*
 * This function initializes the right on-board button on the
 * CC3220S LAUNCHXL Dev Board.
 *
 * Inputs: none
 * Outputs: none
 */
void initialize_the_right_on_board_button(void)
{
    /* Initialize the right button */
    if (gb_is_right_button_initialized == false)
    {
        GPIO_setConfig(Board_GPIO_BUTTON1, GPIO_CFG_IN_PU | GPIO_CFG_IN_INT_FALLING);
        gb_is_right_button_initialized = true;
    }
    else
    {
        //Do nothing as the button has already been initialized
    }
}



