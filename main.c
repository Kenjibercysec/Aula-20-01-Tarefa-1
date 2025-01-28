#include <stdio.h>
#include "pico/stdlib.h"
#include "hardware/gpio.h"
#include "animations.h"

#define ROWS 4
#define COLS 4
#define LED_ROWS 5
#define LED_COLS 5

const uint8_t row_pins[ROWS] = {2, 3, 4, 5}; 
const uint8_t col_pins[COLS] = {6, 7, 8, 9};

void init_keypad();
char read_keypad();
void animate_led_matrix(char key);

int main() {
    stdio_init_all();
    init_keypad();
    initialize_leds();

    printf("Iniciando animação...\n");

    while (1) {
        char key = read_keypad();
        if (key != '\0') {
            printf("Tecla pressionada: %c\n", key);
            animate_led_matrix(key); 
        }
        sleep_ms(100);
    }

    return 0;
}

void init_keypad() {
    for (int i = 0; i < ROWS; i++) {
        gpio_init(row_pins[i]);
        gpio_set_dir(row_pins[i], GPIO_OUT);
        gpio_put(row_pins[i], 1);
    }
    for (int j = 0; j < COLS; j++) {
        gpio_init(col_pins[j]);
        gpio_set_dir(col_pins[j], GPIO_IN);
        gpio_pull_down(col_pins[j]);
    }
}

char read_keypad() {
    char keys[ROWS][COLS] = {
        {'1', '2', '3', 'A'},
        {'4', '5', '6', 'B'},
        {'7', '8', '9', 'C'},
        {'*', '0', '#', 'D'}
    };

    for (int i = 0; i < ROWS; i++) {
        gpio_put(row_pins[i], 0); 
        for (int j = 0; j < COLS; j++) {
            if (gpio_get(col_pins[j])) {
                gpio_put(row_pins[i], 1);
                return keys[i][j]; 
            }
        }
        gpio_put(row_pins[i], 1);
    }
    return '\0';
}

void animate_led_matrix(char key) {
    switch (key) {
        case '5':
            printf("Animação 5 iniciada!\n");
            play_animation(5);
            break;
        case 'A':
            printf("Desligando todos os LEDs\n");
            clear_leds();
            break;
        case 'B':
            printf("Acendendo LEDs em azul (100%%)\n");
            set_all_leds_color(0, 0, 255, 255); // Azul
            break;
        case 'C':
            printf("Acendendo LEDs em vermelho (80%%)\n");
            set_all_leds_color(255, 0, 0, 204);
            break;
        case 'D':
            printf("Acendendo LEDs em verde (50%%)\n");
            set_all_leds_color(0, 255, 0, 127);
            break;
        case '#':
            printf("Acendendo LEDs em branco (20%%)\n");
            set_all_leds_color(255, 255, 255, 51);
            break;
        case '*':
            printf("Saindo para modo de gravação...\n");
            break;
        default:
            printf("Nenhuma animação para a tecla %c\n", key);
            clear_leds();
            break;
    }
}
