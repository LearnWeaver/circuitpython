#include "py/objtuple.h"
#include "shared-bindings/board/__init__.h"



// This mapping only includes functional names because pins broken
// out on connectors are labeled with their MCU name available from
// microcontroller.pin.
STATIC const mp_rom_map_elem_t board_global_dict_table[] = {
 
    { MP_OBJ_NEW_QSTR(MP_QSTR_LIGHT_SENSOR_4),  MP_ROM_PTR(&pin_PA05) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_LIGHT_SENSOR_2),  MP_ROM_PTR(&pin_PB06) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_LIGHT_SENSOR_1),  MP_ROM_PTR(&pin_PB08) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_LIGHT_SENSOR_3),  MP_ROM_PTR(&pin_PA04) },


    { MP_OBJ_NEW_QSTR(MP_QSTR_IR_SENSOR_1),  MP_ROM_PTR(&pin_PB24) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_IR_SENSOR_2),  MP_ROM_PTR(&pin_PB25) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_IR_SENSOR_3),  MP_ROM_PTR(&pin_PB22) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_IR_SENSOR_4),  MP_ROM_PTR(&pin_PB23) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_IR_SENSOR_5), MP_ROM_PTR(&pin_PA21) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_IR_SENSOR_6), MP_ROM_PTR(&pin_PA16) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_IR_SENSOR_7), MP_ROM_PTR(&pin_PC12) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_IR_SENSOR_8), MP_ROM_PTR(&pin_PC10) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_IR_SENSOR_9), MP_ROM_PTR(&pin_PC11) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_IR_SENSOR_10), MP_ROM_PTR(&pin_PC07) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_IR_SENSOR_11), MP_ROM_PTR(&pin_PC06) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_IR_SENSOR_12), MP_ROM_PTR(&pin_PC05) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_IR_SENSOR_13),  MP_ROM_PTR(&pin_PB00) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_IR_SENSOR_14), MP_ROM_PTR(&pin_PB01) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_IR_SENSOR_15),  MP_ROM_PTR(&pin_PB02) },

    
    

    { MP_OBJ_NEW_QSTR(MP_QSTR_DEBUG),  MP_ROM_PTR(&pin_PC25) },

    { MP_OBJ_NEW_QSTR(MP_QSTR_GAMEMODE),  MP_ROM_PTR(&pin_PC26) },

    { MP_OBJ_NEW_QSTR(MP_QSTR_HEADING),  MP_ROM_PTR(&pin_PC27) },

    { MP_OBJ_NEW_QSTR(MP_QSTR_RX),  MP_ROM_PTR(&pin_PB25) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_TX),  MP_ROM_PTR(&pin_PB24) },
    
    { MP_OBJ_NEW_QSTR(MP_QSTR_TX_RADIO), MP_ROM_PTR(&pin_PC22) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_RX_RADIO), MP_ROM_PTR(&pin_PC23) },

    

    { MP_OBJ_NEW_QSTR(MP_QSTR_TX1), MP_ROM_PTR(&pin_PB12) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_RX1), MP_ROM_PTR(&pin_PB13) },

    { MP_OBJ_NEW_QSTR(MP_QSTR_SDA), MP_ROM_PTR(&pin_PB20) },

    { MP_OBJ_NEW_QSTR(MP_QSTR_SCL), MP_ROM_PTR(&pin_PB21) },

    { MP_OBJ_NEW_QSTR(MP_QSTR_STATUS_4), MP_ROM_PTR(&pin_PD12) },


    { MP_OBJ_NEW_QSTR(MP_QSTR_PWM_M4B), MP_ROM_PTR(&pin_PA15) },

    { MP_OBJ_NEW_QSTR(MP_QSTR_PWM_M4), MP_ROM_PTR(&pin_PA12) },


    { MP_OBJ_NEW_QSTR(MP_QSTR_PWM_M3), MP_ROM_PTR(&pin_PA13) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_PWM_M3B), MP_ROM_PTR(&pin_PA14) },
    
    
    { MP_OBJ_NEW_QSTR(MP_QSTR_PWM_M2B), MP_ROM_PTR(&pin_PA23) },
  
    { MP_OBJ_NEW_QSTR(MP_QSTR_PWM_M2), MP_ROM_PTR(&pin_PA22) },
    
    
    
    { MP_OBJ_NEW_QSTR(MP_QSTR_PWM_M1B), MP_ROM_PTR(&pin_PA19) },

    { MP_OBJ_NEW_QSTR(MP_QSTR_PWM_M1), MP_ROM_PTR(&pin_PA18) },
    
    

    { MP_OBJ_NEW_QSTR(MP_QSTR_PWM_M5), MP_ROM_PTR(&pin_PB14) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_PWM_M5B), MP_ROM_PTR(&pin_PB15) },
    
    
    { MP_OBJ_NEW_QSTR(MP_QSTR_START_BTN), MP_ROM_PTR(&pin_PC13) },

    
    
    { MP_OBJ_NEW_QSTR(MP_QSTR_STATUS_2), MP_ROM_PTR(&pin_PC15) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_STATUS_1), MP_ROM_PTR(&pin_PC14) },
    

    
    { MP_OBJ_NEW_QSTR(MP_QSTR_STATUS_3), MP_ROM_PTR(&pin_PD11) },

    { MP_OBJ_NEW_QSTR(MP_QSTR_SOLENOID), MP_ROM_PTR(&pin_PB31) },

    { MP_OBJ_NEW_QSTR(MP_QSTR_NEOPIXEL), MP_ROM_PTR(&pin_PC24) },


    { MP_OBJ_NEW_QSTR(MP_QSTR_SCL1), MP_ROM_PTR(&pin_PC17) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_SDA1), MP_ROM_PTR(&pin_PC16) },

    
    { MP_ROM_QSTR(MP_QSTR_I2C), MP_ROM_PTR(&board_i2c_obj) },
    { MP_ROM_QSTR(MP_QSTR_SPI), MP_ROM_PTR(&board_spi_obj) },
    { MP_ROM_QSTR(MP_QSTR_UART), MP_ROM_PTR(&board_uart_obj) },

    
};
MP_DEFINE_CONST_DICT(board_module_globals, board_global_dict_table);
