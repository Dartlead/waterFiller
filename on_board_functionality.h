/*
 * Header file to hold any and all functionality pertaining to the on-board functionality
 * like buttons and LEDs for the projects.
 */

#ifndef ON_BOARD_FUNCTIONALITY_H_
#define ON_BOARD_FUNCTIONALITY_H_

/*
 * This function initializes on-board LED D7 on the CC3220S LAUNCHXL Dev Board.
 *
 * Inputs: none
 * Outputs: none
 */
extern void initialize_board_led_d7(void);

/*
 * This function initializes on-board LED D5 on the CC3220S LAUNCHXL Dev Board.
 *
 * Inputs: none
 * Outputs: none
 */
extern void initialize_board_led_d5(void);

/*
 * This function initializes on-board LED D6 on the CC3220S LAUNCHXL Dev Board.
 *
 * Inputs: none
 * Outputs: none
 */
extern void initialize_board_led_d6(void);

/*
 * This function turns on the on-board LED D5 on the CC3220s LAUNCHXL Dev
 * Board.
 *
 * Inputs: none
 * Outputs:none
 */
extern void turn_on_on_board_led_d5(void);

/*
 * This function turns on the on-board LED D6 on the CC3220s LAUNCHXL Dev
 * Board.
 *
 * Inputs: none
 * Outputs:none
 */
extern void turn_on_on_board_led_d6(void);

/*
 * This function turns on the on-board LED D7 on the CC3220s LAUNCHXL Dev
 * Board.
 *
 * Inputs: none
 * Outputs:none
 */
extern void turn_on_on_board_led_d7(void);

/*
 * This function turns off the on-board LED D5 on the CC3220S LAUNCH XL
 * Dev Board.
 *
 * Inputs: none
 * Outputs: none
 */
extern void turn_off_on_board_led_d5(void);

/*
 * This function turns off the on-board LED D6 on the CC3220S LAUNCH XL
 * Dev Board.
 *
 * Inputs: none
 * Outputs: none
 */
extern void turn_off_on_board_led_d6(void);

/*
 * This function turns off the on-board LED D7 on the CC3220S LAUNCH XL
 * Dev Board.
 *
 * Inputs: none
 * Outputs: none
 */
extern void turn_off_on_board_led_d7(void);

/*
 * This function toggles the state of the on-board LED D5 on the CC3220S
 * LAUNCH XL Dev Board.
 *
 * Inputs: none
 * Outputs: none
 */
extern void toggle_on_board_led_d5(void);

/*
 * This function toggles the state of the on-board LED D6 on the CC3220S
 * LAUNCH XL Dev Board.
 *
 * Inputs: none
 * Outputs: none
 */
extern void toggle_on_board_led_d6(void);

/*
 * This function toggles the state of the on-board LED D7 on the CC3220S
 * LAUNCH XL Dev Board.
 *
 * Inputs: none
 * Outputs: none
 */
extern void toggle_on_board_led_d7(void);

/*
 * This function initializes the left on-board button on the
 * CC3220S LAUNCHXL Dev Board.
 *
 * Inputs: none
 * Outputs: none
 */
extern void initialize_the_left_on_board_button(void);

/*
 * This function initializes the right on-board button on the
 * CC3220S LAUNCHXL Dev Board.
 *
 * Inputs: none
 * Outputs: none
 */
extern void initialize_the_right_on_board_button(void);



#endif /* ON_BOARD_FUNCTIONALITY_H_ */
