/* Directly associated header file */
#include <board_sleep.h>

/* Driver Header files */
#include <ti/drivers/Power.h>
#include "sys/types.h"

/* Example/Board Header files */
#include <unistd.h>

/* Project Header Files */
#include <utility.h>

/*--------------------------------Function Definitions-----------------------------------------*/
/*
 * This function puts the MCU into low power deep sleep for the specified amount of time.
 * To accomplish this, the provided function sleep() from the board file unistd.h is used.
 *
 * Inputs: sleep_duration - the amount of time desired in low power deep sleep
 * Outputs: none
 */
void low_power_deep_sleep_in_seconds(int sleep_duration)
{
    sleep(sleep_duration);
}

/*
 * This function puts the MCU into low power deep sleep for the specified amount of time
 * IN MICROSECONDS. To accomplish this, the provided function usleep() from the board file
 * unistd.h is used.
 *
 * Inputs: sleep_duration - the amount of time desired in low power deep sleep
 * Outputs: none
 */
void low_power_deep_sleep_in_useconds(int sleep_duration)
{
    /* Change the integer parameter to useconds_t data type */
    useconds_t sleep_duration_useconds = convert_seconds_to_useconds(sleep_duration);

    usleep(sleep_duration_useconds);
}








/*Power Modes:
* Sleep Mode - (standard low power mode for ARM Cortex-M4).
*              Short wake-up time, any interrupt can wake the MCU (debugger disconnects in this mode).
* Low Power Deep Sleep - Functional clock and peripheral clocks are gated. Slow clock still runs.
*              3 ms wake-up time. Only interrupts from network processor, LPDS wake timer, or some GPIO can interrupt sleep.
*              LPDS does not affect the network processor nor its configurations.
* Hibernate - Shuts down both the application and network processors. Slow clock still runs.
*              Everything is shut down, only an interrupt from the slow clock or some GPIOs can wake up the chip.
*/


