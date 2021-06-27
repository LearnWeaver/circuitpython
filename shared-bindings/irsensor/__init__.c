
#include <stdint.h>

#include "py/obj.h"
#include "py/runtime.h"

#include "shared-bindings/microcontroller/Pin.h"
#include "shared-bindings/irsensor/__init__.h"
#include "shared-bindings/irsensor/IRSeeker.h"

//| """Support for IR Finding
//|
//| The `irsensor` module contains logic to find IR Balls
//|

//| .. warning:: This module is not available in some SAMD21 (aka M0) builds. See the
//|   :ref:`module-support-matrix` for more info.
//|

//| All classes change hardware state and should be deinitialized when they
//| are no longer needed if the program continues after use. To do so, either
//| call :py:meth:`!deinit` or use a context manager. See
//| :ref:`lifetime-and-contextmanagers` for more info."""
//|

STATIC const mp_rom_map_elem_t irsensor_module_globals_table[] = {
    { MP_ROM_QSTR(MP_QSTR___name__), MP_ROM_QSTR(MP_QSTR_irsensor) },
    { MP_ROM_QSTR(MP_QSTR_IRSeeker), MP_ROM_PTR(&irsensor_irseeker_type) },
};

STATIC MP_DEFINE_CONST_DICT(irsensor_module_globals, irsensor_module_globals_table);

const mp_obj_module_t irsensor_module = {
    .base = { &mp_type_module },
    .globals = (mp_obj_dict_t *)&irsensor_module_globals,
};
