#include <board_sleep.h>

/* Driver Header files */
#include <ti/drivers/Power.h>

/* Example/Board Header files */
#include <unistd.h>

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
void low_power_deep_sleep_in_useconds(useconds_t sleep_duration)
{
    usleep(sleep_duration);
}



