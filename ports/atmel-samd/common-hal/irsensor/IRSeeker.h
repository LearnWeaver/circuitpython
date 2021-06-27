
#ifndef MICROPY_INCLUDED_ATMEL_SAMD_COMMON_HAL_IRSENSOR_IRSEEKER_H
#define MICROPY_INCLUDED_ATMEL_SAMD_COMMON_HAL_IRSENSOR_IRSEEKER_H

#include "common-hal/microcontroller/Pin.h"

#include "py/obj.h"

typedef struct {
    mp_obj_base_t base;
    uint8_t pin_1;
    uint8_t pin_2;
    uint8_t pin_3;
    uint8_t pin_4;
    uint8_t pin_5;
    uint8_t pin_6;
    uint8_t pin_7;
    uint8_t pin_8;
    uint8_t pin_9;
    uint8_t pin_10;
    uint8_t pin_11;
    uint8_t pin_12;
    uint8_t pin_13;
    uint8_t pin_14;
    uint8_t pin_15;
    
    int best_sensor;
    int sig_strength;

   

} irsensor_irseeker_obj_t;


#endif // MICROPY_INCLUDED_ATMEL_SAMD_COMMON_HAL_IRSENSOR_IRSEEKER_H
