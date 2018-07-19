/*
 * Header file to hold any and all data/functions/declarations pertaining to the water feeder's water dispensing mechanisms.
 * The separation from the waterFiller.c is meant for encapsulation purposes.
 */

#ifndef WATER_DISPENSING_CONTROL_H_
#define WATER_DISPENSING_CONTROL_H_

#include <stdbool.h>

/*
 * This function is intended to actuate the motor to funnel water from the container into
 * the dog's water bowl.
 *
 * Inputs: none
 * Outputs: whether or not the function was able to perform its task
 */
extern bool dispense_water(void);

/*
 * This function is intended to check the water levels of the container for bookkeeping.
 *
 * Inputs: none
 * Outputs: the percentage of water left in the container
 */
extern int check_water_level(void);



#endif /* WATER_DISPENSING_CONTROL_H_ */
