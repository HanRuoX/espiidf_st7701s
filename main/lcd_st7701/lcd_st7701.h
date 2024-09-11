#ifndef _ST7701111_H_
#define _ST7701111_H_

#include <stdlib.h>

#include "esp_log.h"

#include "driver/gpio.h"
// #include "bsp_board.h"
#define GPIO_LCD_CS     (GPIO_NUM_38)
#define GPIO_LCD_SDA    (GPIO_NUM_40)
#define GPIO_LCD_SCK    (GPIO_NUM_39)

#define LCD_CS_Clr()    gpio_set_level(GPIO_LCD_CS, 0)
#define LCD_CS_Set()    gpio_set_level(GPIO_LCD_CS, 1)
#define LCD_SCK_Clr()   gpio_set_level(GPIO_LCD_SCK, 0)
#define LCD_SCK_Set()   gpio_set_level(GPIO_LCD_SCK, 1)
#define LCD_SDA_Clr()   gpio_set_level(GPIO_LCD_SDA, 0)
#define LCD_SDA_Set()   gpio_set_level(GPIO_LCD_SDA, 1)


void st7701_reg_init(void);

#endif