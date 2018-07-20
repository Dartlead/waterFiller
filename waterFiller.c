/* Standard header files */
#include <stdint.h>
#include <stddef.h>
#include <stdbool.h>

/* Project Header files */
#include <big_red_button.h>
#include <board_sleep.h>
#include <error_responses.h>
#include <on_board_functionality.h>
#include <state_machine_control.h>
#include <water_dispensing_control.h>

/*--------------------------------Constants & Pound Defines------------------------------------*/
#define DEBUG //define debug because the physical GPIO button is not available so use the on-board instead

/*--------------------------------Global Variables---------------------------------------------*/

/*--------------------------------Local Function Prototypes------------------------------------*/

/*--------------------------------Main Thread--------------------------------------------------*/
void *mainThread(void *arg0)
{
    /* Initialize the big red button */
    initialize_the_big_red_button();

#ifdef DEBUG
    initialize_the_left_on_board_button();
#endif

    /* Create the sleep duration */
    const unsigned int sleep_duration = 2;

    /* Create the buffer to hold potential error messages */
    char *error_message_buffer;

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
                low_power_deep_sleep_in_seconds(sleep_duration);

                /* State transition */
                if (is_the_big_red_button_pressed())
                {
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
#ifdef PRODUCTION
                b_did_water_dispense = dispense_water();
#endif
#ifdef DEBUG
                b_did_water_dispense = true;
                initialize_board_led_d7();
                toggle_on_board_led_d7();
#endif

                /* State transition */
                if (b_did_water_dispense == true)
                {
                    current_state = get_next_state(current_state);
                }
                else
                {
                    error_message_buffer = "Dispense water failed to return true";
                    standard_error(error_message_buffer);
                }
            break;

            default:
                error_message_buffer = "FSM switch statement defaulted";
                this_should_never_happen_error(error_message_buffer);
            break;
        }
    }
}
