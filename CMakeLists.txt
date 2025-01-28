cmake_minimum_required(VERSION 3.13)
include($ENV{PICO_SDK_PATH}/external/pico_sdk_import.cmake)

project(wokwi_project)

# Ativar o SDK do Raspberry Pi Pico
pico_sdk_init()

# Lista de arquivos fonte
add_executable(wokwi_project
    main.c
)

# Linkar bibliotecas necessárias
target_link_libraries(wokwi_project pico_stdlib hardware_gpio)

# Habilitar saída USB ou UART
pico_enable_stdio_usb(wokwi_project 1)
pico_enable_stdio_uart(wokwi_project 0)

# Gerar o arquivo binário
pico_add_extra_outputs(wokwi_project)
