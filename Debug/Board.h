/*
 *  ======== Board.h ========
 *  Configured TI-Drivers module declarations
 *
 *  DO NOT EDIT - This file is generated for the CC3220S_LAUNCHXL
 *  by the SysConfig tool.
 */
#ifndef ti_drivers_Board_h
#define ti_drivers_Board_h

#define Board_CC3220S_LAUNCHXL

/* Temporary define for backwards compatibility!!! */
#define __CC3220S_LAUNCHXL_BOARD_H__

#ifndef DeviceFamily_CC3220
#define DeviceFamily_CC3220
#endif

#include <stdint.h>

/* support C++ sources */
#ifdef __cplusplus
extern "C" {
#endif


/*
 *  ======== GPIO ========
 */

#define Board_GPIO_LED0             0
#define Board_GPIO_LED1             1
#define Board_GPIO_BUTTON0          2
#define Board_GPIO_BUTTON1          3
#define Board_GPIO_LED2             4

/* LEDs are active high */
#define Board_GPIO_LED_ON  (1)
#define Board_GPIO_LED_OFF (0)

#define Board_LED_ON  (Board_GPIO_LED_ON)
#define Board_LED_OFF (Board_GPIO_LED_OFF)


/*
 *  ======== Board_init ========
 *  Perform all required TI-Drivers initialization
 *
 *  This function should be called once at a point before any use of
 *  TI-Drivers.
 */
extern void Board_init(void);

/*
 *  ======== Board_initGeneral ========
 *  (deprecated)
 *
 *  Board_initGeneral() is defined purely for backward compatibility.
 *
 *  All new code should use Board_init() to do any required TI-Drivers
 *  initialization _and_ use <Driver>_init() for only where specific drivers
 *  are explicitly referenced by the application.  <Driver>_init() functions
 *  are idempotent.
 */
#define Board_initGeneral Board_init

#ifdef __cplusplus
}
#endif

#endif /* include guard */
