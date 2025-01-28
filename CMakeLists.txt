# == DO NOT EDIT THE FOLLOWING LINES for the Raspberry Pi Pico VS Code Extension to work ==
if(WIN32)
    set(USERHOME $ENV{USERPROFILE})
else()
    set(USERHOME $ENV{HOME})
endif()
set(sdkVersion 2.1.0)
set(toolchainVersion 13_3_Rel1)
set(picotoolVersion 2.1.0)
set(picoVscode ${USERHOME}/.pico-sdk/cmake/pico-vscode.cmake)
if (EXISTS ${picoVscode})
    include(${picoVscode})
endif()
# ====================================================================================
set(PICO_BOARD pico CACHE STRING "Board type")

# Habilitar o CMake mínimo
cmake_minimum_required(VERSION 3.13)

# Nome do projeto
project(pico_project)

# Habilitar o SDK do Pico
include(pico_sdk_import.cmake)

# Inicializar o SDK do Pico
pico_sdk_init()

# Adicionar o executável
add_executable(main
    main.c
    animations.c
)

# Incluir diretórios de cabeçalhos
target_include_directories(main PRIVATE ${CMAKE_CURRENT_LIST_DIR})

# Linkar bibliotecas padrão do Pico
target_link_libraries(main pico_stdlib hardware_gpio)

# Adicionar o arquivo UF2
pico_add_extra_outputs(main)