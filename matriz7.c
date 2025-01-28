#include <stdio.h>
#include "pico/stdlib.h"
#include "hardware/gpio.h"

#define LED_PIN_START 10
#define LED_COUNT 25

void initialize_leds() {
    for (int i = 0; i < LED_COUNT; i++) {
        gpio_init(LED_PIN_START + i);
        gpio_set_dir(LED_PIN_START + i, GPIO_OUT);
        gpio_put(LED_PIN_START + i, 0);
    }
}

void set_led(int index, int state) {
    if (index < LED_COUNT) {
        gpio_put(LED_PIN_START + index, state);
    }
}

void clear_leds() {
    for (int i = 0; i < LED_COUNT; i++) {
        gpio_put(LED_PIN_START + i, 0);
    }
}

void play_led_animation_frame_by_frame() {
    clear_leds();
    for (int i = 0; i < 5; i++) {
        set_led(i, 1);
    }
    sleep_ms(200);

    clear_leds();
    for (int i = 5; i < 10; i++) {
        set_led(i, 1);
    }
    sleep_ms(200);

    clear_leds();
    for (int i = 0; i < LED_COUNT; i += 2) {
        set_led(i, 1);
    }
    sleep_ms(200);

    clear_leds();
    for (int i = LED_COUNT - 1; i >= 0; i--) {
        set_led(i, 1);
        sleep_ms(50);
    }

    clear_leds();
    for (int j = 0; j < 3; j++) {
        for (int i = 0; i < LED_COUNT; i++) {
            set_led(i, 1);
        }
        sleep_ms(100);
        clear_leds();
        sleep_ms(100);
    }
}

int main() {
    stdio_init_all();
    initialize_leds();

    printf("Iniciando animação de 5 frames...\n");

    play_led_animation_frame_by_frame();

    return 0;
}
