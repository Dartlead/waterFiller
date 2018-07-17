/*
 * Header file to hold any and all functionality pertaining to informing system users
 * about error states.
 */

#ifndef SHOULD_NOT_HAPPEN_H_
#define SHOULD_NOT_HAPPEN_H_

/*
 * This function is intended to show that the system has encountered something that
 * can be EXPECTED and is wrong.
 *
 * Inputs: none
 * Outputs: none
 */
extern void standard_error(void);

/*
 * This function is intended to show that the system has encountered something that
 * should NEVER happen and is wrong.
 *
 * Inputs: none
 * Outputs: none
 */
extern void this_should_never_happen_error(void);


#endif /* SHOULD_NOT_HAPPEN_H_ */
