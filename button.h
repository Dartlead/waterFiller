/*
 * Header file to hold any and all functionality pertaining to the big red button functionality for the project.
 */

#ifndef BUTTON_H_
#define BUTTON_H_

#include <stdint.h>
#include <stdbool.h>

/*
 * This function initializes the interrupt associated with the big red button.
 *
 * Inputs: none
 * Outputs: none
 */
extern void initialize_button_interrupt(void);

/*
 * This function queries whether or not the button is pressed.
 *
 * Inputs: none
 * Outputs: whether or not the button is pressed
 */
extern bool is_the_button_pressed(void);

/*
 * This function clears the interrupt associated with the big red button.
 * This function should only be called AFTER any logic involving whether
 * or not the button is pressed is over.
 *
 * Inputs: none
 * Outputs: none
 */
extern void clear_button_interrupt(void);

/*
 * This function enables the functionality of all GPIO requirements.
 *
 * Inputs: none
 * Outputs: none
 */
extern void enable_gpio_functionality(void);


#endif /* BUTTON_H_ */
