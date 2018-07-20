/*
 * Header file to hold any and all functionality pertaining to the three sleep states
 * of the CC3220S LAUNCHXL Dev Board.
 */

#ifndef BOARD_SLEEP_H_
#define BOARD_SLEEP_H_

/* Driver Header files */
#include "sys/types.h"

/*
 * This function puts the MCU into low power deep sleep for the specified amount of time
 * IN SECONDS.
 *
 * Inputs: sleep_duration - the amount of time desired in low power deep sleep
 * Outputs: none
 */
extern void low_power_deep_sleep_in_seconds(unsigned int sleep_duration);

/*
 * This function puts the MCU into low power deep sleep for the specified amount of time
 * IN MICROSECONDS.
 *
 * Inputs: sleep_duration - the amount of time desired in low power deep sleep
 * Outputs: none
 */
extern void low_power_deep_sleep_in_useconds(useconds_t sleep_duration);



#endif /* BOARD_SLEEP_H_ */
