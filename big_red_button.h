/*
 * Header file to hold any and all functionality pertaining to the big red button functionality for the project.
 */

#ifndef BIG_RED_BUTTON_H_
#define BIG_RED_BUTTON_H_

/* Standard header files */
#include <stdint.h>
#include <stdbool.h>

/*
 * This function initializes the big red button for operation.
 *
 * Inputs: none
 * Outputs: none
 */
extern void initialize_the_big_red_button(void);

/*
 * This function queries whether or not the button is pressed.
 *
 * Inputs: none
 * Outputs: whether or not the button is pressed
 */
extern bool is_the_big_red_button_pressed(void);


#endif /* BIG_RED_BUTTON_H_ */
