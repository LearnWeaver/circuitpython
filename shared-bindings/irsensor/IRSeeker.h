#ifndef MICROPY_INCLUDED_SHARED_BINDINGS_IRSENSOR_IRSEEKER_H
#define MICROPY_INCLUDED_SHARED_BINDINGS_IRSENSOR_IRSEEKER_H

#include "common-hal/microcontroller/Pin.h"
#include "common-hal/irsensor/IRSeeker.h"

extern const mp_obj_type_t irsensor_irseeker_type;

extern void common_hal_irsensor_irseeker_construct(irsensor_irseeker_obj_t *self,
    const mcu_pin_obj_t *pin_1,
    const mcu_pin_obj_t *pin_2,
    const mcu_pin_obj_t *pin_3,
    const mcu_pin_obj_t *pin_4,
    const mcu_pin_obj_t *pin_5,
    const mcu_pin_obj_t *pin_6,
    const mcu_pin_obj_t *pin_7,
    const mcu_pin_obj_t *pin_8,
    const mcu_pin_obj_t *pin_9,
    const mcu_pin_obj_t *pin_10,
    const mcu_pin_obj_t *pin_11,
    const mcu_pin_obj_t *pin_12,
    const mcu_pin_obj_t *pin_13,
    const mcu_pin_obj_t *pin_14,
    const mcu_pin_obj_t *pin_15
    );
extern void common_hal_irsensor_irseeker_deinit(irsensor_irseeker_obj_t *self);
extern bool common_hal_irsensor_irseeker_deinited(irsensor_irseeker_obj_t *self);
extern mp_int_t common_hal_irsensor_irseeker_get_bestsensor(irsensor_irseeker_obj_t *self);
                
extern mp_int_t common_hal_irsensor_irseeker_get_signalstrength(irsensor_irseeker_obj_t *self);

#endif // MICROPY_INCLUDED_SHARED_BINDINGS_IRSENSOR_IRSEEKER_H
