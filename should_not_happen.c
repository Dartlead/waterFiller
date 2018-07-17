#include <should_not_happen.h>

/*
 * This function is intended to show that the system has encountered something that
 * can be EXPECTED and is wrong.
 *
 * Inputs: none
 * Outputs: none
 */
void standard_error(void)
{
    //Do something
    return;
}

/*
 * This function is intended to show that the system has encountered something that
 * should NEVER happen and is wrong.
 *
 * Inputs: none
 * Outputs: none
 */
void this_should_never_happen_error(void)
{
    //Do something
    return;
}

