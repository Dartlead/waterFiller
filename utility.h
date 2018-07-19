/*
 * Header file to hold any and all functionality pertaining to utility functionalities.
 * Likely things like basic mathematical or logical procedures.
 */

#ifndef UTILITY_H_
#define UTILITY_H_

/* Driver Header files */
#include "sys/types.h"

/*
 * This function is intended to convert an integer into a percentage of said integer's
 * max value.
 *
 * Inputs: value_to_convert - the value that is going to be converted into a percentage
 *         max_possible_value - the maximum possible value that value_to_convert can
 *                              possibly be. Necessary for conversion math.
 * Outputs: the percentage
 */
extern int convert_value_to_percentage(int value_to_convert, int max_possible_value);

/*
 * This function is intended to convert an integer type value seconds into a custom
 * useconds_t type microseconds.
 *
 * Inputs: seconds - the value that is going to be converted into microseconds
 * Outputs: the converted value in microseconds
 */
extern useconds_t convert_seconds_to_useconds(int seconds);

/*
 * This function is intended to delay the processor by a user-specified amount of time.
 * Note that time here is measured in clock cycles.
 *
 * Inputs: the amount of time desired to delay
 * Outputs: none
 */
extern void delay(int time);



#endif /* UTILITY_H_ */
