#define MICROPY_HW_BOARD_NAME "Pimoroni Pico LiPo (4MB)"
#define MICROPY_HW_MCU_NAME "rp2040"

#define MICROPY_HW_VBUS_DETECT (&pin_GPIO24)
#define MICROPY_HW_BAT_SENSE (&pin_GPIO29)

#define MICROPY_HW_USER_SW (&pin_GPIO23)

#define DEFAULT_I2C_BUS_SCL (&pin_GPIO5)
#define DEFAULT_I2C_BUS_SDA (&pin_GPIO4)
