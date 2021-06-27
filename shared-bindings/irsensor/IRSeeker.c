
#include <stdint.h>

#include "lib/utils/context_manager_helpers.h"
#include "py/objproperty.h"
#include "py/runtime.h"
#include "py/runtime0.h"
#include "shared-bindings/microcontroller/Pin.h"
#include "shared-bindings/irsensor/IRSeeker.h"
#include "shared-bindings/util.h"

//| class IRSeeker:
//|     """IRSeeker will keep track of the number the IR Ball Position"""
//|
//|     def __init__(self, pin_1: microcontroller.Pin) -> None:
//|         """Create a IRSeeker object associated with the given pin. It tracks the number of
//|            falling pulses relative when the object is constructed.
//|
//|            :param ~microcontroller.Pin pin_a: Pin to read pulses from.
//|
//|
//|            For example::
//|
//|                import board
//|                import irseeker
//|
//|                ball = irseeker.IRSeeker(board.D1)
//|               
//|                while True:
//|                    if ball.best_sensor == 1:
//|                        
//|
STATIC mp_obj_t irsensor_irseeker_make_new(const mp_obj_type_t *type, size_t n_args, const mp_obj_t *pos_args, mp_map_t *kw_args) {
    enum { ARG_pin_1, ARG_pin_2, ARG_pin_3, ARG_pin_4, ARG_pin_5, ARG_pin_6, ARG_pin_7, ARG_pin_8, ARG_pin_9, ARG_pin_10, ARG_pin_11, ARG_pin_12, ARG_pin_13, ARG_pin_14, ARG_pin_15 };
    static const mp_arg_t allowed_args[] = {
        { MP_QSTR_pin_1, MP_ARG_REQUIRED | MP_ARG_OBJ },
        { MP_QSTR_pin_2, MP_ARG_REQUIRED | MP_ARG_OBJ },
        { MP_QSTR_pin_3, MP_ARG_REQUIRED | MP_ARG_OBJ },
        { MP_QSTR_pin_4, MP_ARG_REQUIRED | MP_ARG_OBJ },
        { MP_QSTR_pin_5, MP_ARG_REQUIRED | MP_ARG_OBJ },
        { MP_QSTR_pin_6, MP_ARG_REQUIRED | MP_ARG_OBJ },
        { MP_QSTR_pin_7, MP_ARG_REQUIRED | MP_ARG_OBJ },
        { MP_QSTR_pin_8, MP_ARG_REQUIRED | MP_ARG_OBJ },
        { MP_QSTR_pin_9, MP_ARG_REQUIRED | MP_ARG_OBJ },
        { MP_QSTR_pin_10, MP_ARG_REQUIRED | MP_ARG_OBJ },
        { MP_QSTR_pin_11, MP_ARG_REQUIRED | MP_ARG_OBJ },
        { MP_QSTR_pin_12, MP_ARG_REQUIRED | MP_ARG_OBJ },
        { MP_QSTR_pin_13, MP_ARG_REQUIRED | MP_ARG_OBJ },
        { MP_QSTR_pin_14, MP_ARG_REQUIRED | MP_ARG_OBJ },
        { MP_QSTR_pin_15, MP_ARG_REQUIRED | MP_ARG_OBJ }

    };
    mp_arg_val_t args[MP_ARRAY_SIZE(allowed_args)];
    mp_arg_parse_all(n_args, pos_args, kw_args, MP_ARRAY_SIZE(allowed_args), allowed_args, args);

    const mcu_pin_obj_t *pin_1 = validate_obj_is_free_pin(args[ARG_pin_1].u_obj);
    const mcu_pin_obj_t *pin_2 = validate_obj_is_free_pin(args[ARG_pin_2].u_obj);
    const mcu_pin_obj_t *pin_3 = validate_obj_is_free_pin(args[ARG_pin_3].u_obj);
    const mcu_pin_obj_t *pin_4 = validate_obj_is_free_pin(args[ARG_pin_4].u_obj);
    const mcu_pin_obj_t *pin_5 = validate_obj_is_free_pin(args[ARG_pin_5].u_obj);
    const mcu_pin_obj_t *pin_6 = validate_obj_is_free_pin(args[ARG_pin_6].u_obj);
    const mcu_pin_obj_t *pin_7 = validate_obj_is_free_pin(args[ARG_pin_7].u_obj);
    const mcu_pin_obj_t *pin_8 = validate_obj_is_free_pin(args[ARG_pin_8].u_obj);
    const mcu_pin_obj_t *pin_9 = validate_obj_is_free_pin(args[ARG_pin_9].u_obj);
    const mcu_pin_obj_t *pin_10 = validate_obj_is_free_pin(args[ARG_pin_10].u_obj);
    const mcu_pin_obj_t *pin_11 = validate_obj_is_free_pin(args[ARG_pin_11].u_obj);
    const mcu_pin_obj_t *pin_12 = validate_obj_is_free_pin(args[ARG_pin_12].u_obj);
    const mcu_pin_obj_t *pin_13 = validate_obj_is_free_pin(args[ARG_pin_13].u_obj);
    const mcu_pin_obj_t *pin_14 = validate_obj_is_free_pin(args[ARG_pin_14].u_obj);
    const mcu_pin_obj_t *pin_15 = validate_obj_is_free_pin(args[ARG_pin_15].u_obj);


    irsensor_irseeker_obj_t *self = m_new_obj(irsensor_irseeker_obj_t);
    self->base.type = &irsensor_irseeker_type;

    common_hal_irsensor_irseeker_construct(self, pin_1, pin_2, pin_3, pin_4, pin_5, pin_6, pin_7, pin_8, pin_9, pin_10, pin_11, pin_12, pin_13, pin_14, pin_15);

    return MP_OBJ_FROM_PTR(self);
}

//|     def deinit(self) -> None:
//|         """Deinitializes the IRSeeker and releases any hardware resources for reuse."""
//|
STATIC mp_obj_t irsensor_irseeker_deinit(mp_obj_t self_in) {
    irsensor_irseeker_obj_t *self = MP_OBJ_TO_PTR(self_in);
    common_hal_irsensor_irseeker_deinit(self);
    return mp_const_none;
}
STATIC MP_DEFINE_CONST_FUN_OBJ_1(irsensor_irseeker_deinit_obj, irsensor_irseeker_deinit);

STATIC void check_for_deinit(irsensor_irseeker_obj_t *self) {
    if (common_hal_irsensor_irseeker_deinited(self)) {
        raise_deinited_error();
    }
}

//|     def __enter__(self) -> IRSeeker:
//|         """No-op used by Context Managers."""
//|
//  Provided by context manager helper.

//|     def __exit__(self) -> None:
//|         """Automatically deinitializes the hardware when exiting a context. See
//|            :ref:`lifetime-and-contextmanagers` for more info."""
//|
STATIC mp_obj_t irsensor_irseeker_obj___exit__(size_t n_args, const mp_obj_t *args) {
    (void)n_args;
    common_hal_irsensor_irseeker_deinit(args[0]);
    return mp_const_none;
}
STATIC MP_DEFINE_CONST_FUN_OBJ_VAR_BETWEEN(irsensor_irseeker___exit___obj, 4, 4, irsensor_irseeker_obj___exit__);


//|     bestsensor: int
//|     """The current count in terms of pulses."""
//|
STATIC mp_obj_t irsensor_irseeker_obj_get_bestsensor(mp_obj_t self_in) {
    irsensor_irseeker_obj_t *self = MP_OBJ_TO_PTR(self_in);
    check_for_deinit(self);

    return mp_obj_new_int(common_hal_irsensor_irseeker_get_bestsensor(self));
}
MP_DEFINE_CONST_FUN_OBJ_1(irsensor_irseeker_get_bestsensor_obj, irsensor_irseeker_obj_get_bestsensor);


const mp_obj_property_t irsensor_irseeker_bestsensor_obj = {
    .base.type = &mp_type_property,
    .proxy = {(mp_obj_t)&irsensor_irseeker_get_bestsensor_obj,
              
              MP_ROM_NONE},
};



//|     signalstrength: int
//|     """The signal strength of the ball."""
//|
STATIC mp_obj_t irsensor_irseeker_obj_get_signalstrength(mp_obj_t self_in) {
    irsensor_irseeker_obj_t *self = MP_OBJ_TO_PTR(self_in);
    check_for_deinit(self);

    return mp_obj_new_int(common_hal_irsensor_irseeker_get_signalstrength(self));
}
MP_DEFINE_CONST_FUN_OBJ_1(irsensor_irseeker_get_signalstrength_obj, irsensor_irseeker_obj_get_signalstrength);


const mp_obj_property_t irsensor_irseeker_signalstrength_obj = {
    .base.type = &mp_type_property,
    .proxy = {(mp_obj_t)&irsensor_irseeker_get_signalstrength_obj,
              
              MP_ROM_NONE},
};


STATIC const mp_rom_map_elem_t irsensor_irseeker_locals_dict_table[] = {
    // Methods
    { MP_ROM_QSTR(MP_QSTR_deinit), MP_ROM_PTR(&irsensor_irseeker_deinit_obj) },
    { MP_ROM_QSTR(MP_QSTR___enter__), MP_ROM_PTR(&default___enter___obj) },
    { MP_ROM_QSTR(MP_QSTR___exit__), MP_ROM_PTR(&irsensor_irseeker___exit___obj) },
    { MP_ROM_QSTR(MP_QSTR_bestsensor), MP_ROM_PTR(&irsensor_irseeker_bestsensor_obj) },
    { MP_ROM_QSTR(MP_QSTR_signalstrength), MP_ROM_PTR(&irsensor_irseeker_signalstrength_obj) },
    
};
STATIC MP_DEFINE_CONST_DICT(irsensor_irseeker_locals_dict, irsensor_irseeker_locals_dict_table);

const mp_obj_type_t irsensor_irseeker_type = {
    { &mp_type_type },
    .name = MP_QSTR_IRSeeker,
    .make_new = irsensor_irseeker_make_new,
    .locals_dict = (mp_obj_dict_t *)&irsensor_irseeker_locals_dict,
};
