idf_component_register(

    SRCS
    "lcd_st7701/lcd_st7701.c"
    "main.c"

    INCLUDE_DIRS
    "include"
    "."
    "lcd_st7701"
    )


# spiffs_create_partition_image(storage ../spiffs FLASH_IN_PROJECT)


