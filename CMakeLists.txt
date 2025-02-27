cmake_minimum_required(VERSION 3.29)
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
set(PICO_BOARD pico_w CACHE STRING "Board type")

# Pull in Raspberry Pi Pico SDK (must be before project)
include(pico_sdk_import.cmake)

project(neopixel_pio C CXX ASM)

# Initialise the Raspberry Pi Pico SDK
pico_sdk_init()

# Add executable. Default name is the project name, version 0.1

add_executable(neopixel_pio neopixel_pio.c )

pico_set_program_name(neopixel_pio "neopixel_pio")
pico_set_program_version(neopixel_pio "0.1")

# Generate PIO header
pico_generate_pio_header(neopixel_pio ${CMAKE_CURRENT_LIST_DIR}/ws2818b.pio)

# Modify the below lines to enable/disable output over UART/USB
pico_enable_stdio_uart(neopixel_pio 0)
pico_enable_stdio_usb(neopixel_pio 1)

# Add the standard library to the build
target_link_libraries(neopixel_pio
        pico_stdlib)

# Add the standard include files to the build
target_include_directories(neopixel_pio PRIVATE
  ${CMAKE_CURRENT_LIST_DIR}
)

# Add any user requested libraries
target_link_libraries(neopixel_pio 
        hardware_pio
        hardware_clocks
        hardware_timer
        pico_cyw43_arch_lwip_poll
        )

pico_add_extra_outputs(neopixel_pio)

