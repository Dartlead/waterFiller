/* Directly associated header file */
#include <water_dispensing_control.h>

/* Project Header files */
#include <utility.h>

/* Standard header files */
#include <stdbool.h>

/*--------------------------------Function Definitions-----------------------------------------*/
/* This function is intended to actuate the motor to funnel water from the container into
 * the dog's water bowl.
 *
 * Inputs: none
 * Outputs: whether or not the function was able to perform its task
 */
bool dispense_water(void)
{
    return true;
}

/*
 * This function is intended to check the water levels of the container for bookkeeping.
 *
 * Inputs: none
 * Outputs: the percentage of water left in the container
 */
int check_water_level(void)
{
    return convert_value_to_percentage(80, 100);
}


