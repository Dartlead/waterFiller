#include <state.h>

/*
 * This function is intended to update the current state of the FSM. The FSM
 * will have no knowledge of transitions for better encapsulation.
 *
 * Inputs: currentState - the current state of the FSM
 * Outputs: the next state the FSM will enter
 */
state_list_t get_next_state(state_list_t current_state)
{

    state_list_t next_state;

    switch(current_state)
    {
    case SLEEP:
        next_state = DISPENSE;
        break;
    case DISPENSE:
        next_state = SLEEP;
        break;
    default:
        next_state = current_state;
        break; //Not necessary but matter of good form
    }

    return next_state;
}

