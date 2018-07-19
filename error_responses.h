/*
 * Header file to hold any and all functionality pertaining to informing system users
 * about error states.
 */

#ifndef ERROR_RESPONSES_H_
#define ERROR_RESPONSES_H_

/*
 * This function is intended to show that the system has encountered something that
 * can be EXPECTED and is wrong. To demonstrate this LED D7 will blink indefinitely.
 *
 * Inputs: error_message: the message to be held for debugging purposes
 * Outputs: none
 */
extern void standard_error(char *error_message);

/*
 * This function is intended to show that the system has encountered something that
 * should NEVER happen and is wrong. To demonstrate this, LEDs D5, D6, and D7 will
 * blink indefinitely.
 *
 * Inputs: error_messag: the message to be held for debugging purposes
 * Outputs: none
 */
extern void this_should_never_happen_error(char *error_message);


#endif /* ERROR_RESPONSES_H_ */
