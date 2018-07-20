/* Directly associated header file */
#include <error_responses.h>

/* Project header files */
#include <Utility.h>
#include <on_board_functionality.h>

/*--------------------------------Constants & Pound Defines------------------------------------*/
static const clock_cycles delay_time = 8000000; //8000000 clock cycles ~= 0.3 seconds

/*--------------------------------Function Definitions-----------------------------------------*/
/*
 * This function is intended to show that the system has encountered something that
 * can be EXPECTED and is wrong. To demonstrate this LED D5 will blink indefinitely
 * by using the on_board_functionality functions as well as the utility delay function.
 *
 * Inputs: error_message: the message to be held for debugging purposes
 * Outputs: none
 */
void standard_error(char *error_message)
{
    /* Make sure the board LED is initialized b/c the function uses the LED */
    initialize_board_led_d5();

    /* Start the LED on */
    turn_on_on_board_led_d5();

    while (1)
    {
        toggle_on_board_led_d5();

        delay(delay_time);
    }
}

/*
 * This function is intended to show that the system has encountered something that
 * should NEVER happen and is wrong. To demonstrate this, LEDs D5, D6, and D7 will
 * blink indefinitely by using the on_board_funtionality functions as well as the
 * utility delay function.
 *
 * Inputs: error_message: the message to be held for debugging purposes
 * Outputs: none
 */
void this_should_never_happen_error(char *error_message)
{
    /* Make sure the board LEDs are initialized b/c the function uses the LEDs */
    initialize_board_led_d5();
    initialize_board_led_d6();
    initialize_board_led_d7();

    /* Start the LEDs on */
    turn_on_on_board_led_d5();
    turn_on_on_board_led_d6();
    turn_on_on_board_led_d7();

    while (1)
    {
        toggle_on_board_led_d5();
        toggle_on_board_led_d6();
        toggle_on_board_led_d7();

        delay(delay_time);
    }
}

