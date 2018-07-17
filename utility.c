#include <utility.h>

/*
 * This function is intended to convert an integer into a percentage of said integer's
 * max value. This function avoids use of floating point for safety reasons.
 * The formula used is as follows (where a = value to be converted and b = max possible value):
 * percentage = (100 * a + b / 2) / b
 *
 * Inputs: value_to_convert - the value that is going to be converted into a percentage
 *         max_possible_value - the maximum possible value that value_to_convert can
 *                              possibly be. Necessary for conversion math.
 * Outputs: the percentage
 */
int convert_value_to_percentage(int value_to_convert, int max_possible_value)
{
    int percentage = ((100 * value_to_convert + max_possible_value / 2) / max_possible_value);
    return percentage;
}


