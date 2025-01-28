#include "animations.h"
#include <stdio.h>
#include "hardware/gpio.h"
#include "pico/stdlib.h"

#define LED_PIN_START 10
#define LED_COUNT 25

void initialize_leds() {
    for (uint8_t i = 0; i < LED_COUNT; i++) {
        gpio_init(LED_PIN_START + i);
        gpio_set_dir(LED_PIN_START + i, GPIO_OUT);
        gpio_put(LED_PIN_START + i, 0);
    }
}

void set_all_leds_color(uint8_t red, uint8_t green, uint8_t blue, uint8_t intensity) {
    for (uint8_t i = 0; i < LED_COUNT; i++) {
        uint8_t r = (red * intensity) / 255;
        uint8_t g = (green * intensity) / 255;
        uint8_t b = (blue * intensity) / 255;
        
        gpio_put(LED_PIN_START + i, r);
        gpio_put(LED_PIN_START + i, g);
        gpio_put(LED_PIN_START + i, b);
    }
}

void play_animation(uint8_t animation_id) {
    switch (animation_id) {
        case 5:
            for (int i = 0; i < LED_COUNT; i++) {
                set_all_leds_color(255, 255, 255, 255);
                sleep_ms(100);
                set_all_leds_color(0, 0, 0, 0);
                sleep_ms(100);
            }
            break;
        default:
            clear_leds();
            break;
    }
}

void clear_leds() {
    for (uint8_t i = 0; i < LED_COUNT; i++) {
        gpio_put(LED_PIN_START + i, 0);
    }
}
