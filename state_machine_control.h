/*
 * Header file to hold any and all data/functions/declarations pertaining to the water feeder's FSM.
 * The separation from the waterFiller.c is meant for encapsulation purposes.
 */

#ifndef STATE_MACHINE_CONTROL_H_
#define STATE_MACHINE_CONTROL_H_

/*
 * Declares references for all of the states
 */
typedef enum state_list_
{
    SLEEP,   /* Sleep state */
    DISPENSE /* Dispense water state */
} state_list_t;

/*
 * This function is intended to update the current state of the FSM. The FSM
 * will have no knowledge of transitions for better encapsulation.
 *
 * Inputs: current_state - the current state of the FSM
 * Outputs: the next state the FSM will enter
 */
extern state_list_t get_next_state(state_list_t current_state);


#endif /* STATE_MACHINE_CONTROL_H_ */
