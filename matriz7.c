#include <stdio.h>
#include "pico/stdlib.h"
#include "hardware/gpio.h"

#define ROWS 4
#define COLS 4
#define LED_ROWS 5
#define LED_COLS 5

#define LED_PIN_START 10
#define LED_COUNT 25

int row_pins[ROWS] = {2, 3, 4, 5}; 
int col_pins[COLS] = {6, 7, 8, 9};

// Inicializar os LEDs
void initialize_leds() {
    for (int i = 0; i < LED_COUNT; i++) {
        gpio_init(LED_PIN_START + i);
        gpio_set_dir(LED_PIN_START + i, GPIO_OUT);
        gpio_put(LED_PIN_START + i, 0);
    }
}

// Controlar LEDs individualmente por índice
void set_led(int index, int state) {
    if (index < LED_COUNT) {
        gpio_put(LED_PIN_START + index, state);
    }
}

// Limpar (desligar) todos os LEDs
void clear_leds() {
    for (int i = 0; i < LED_COUNT; i++) {
        gpio_put(LED_PIN_START + i, 0);
    }
}

// Reproduzir animação com 5 frames
void play_led_animation_frame_by_frame() {
    // Frame 1: Acender LEDs em uma linha
    clear_leds();
    for (int i = 0; i < 5; i++) {
        set_led(i, 1);
    }
    sleep_ms(200);

    // Frame 2: Acender LEDs em outra linha
    clear_leds();
    for (int i = 5; i < 10; i++) {
        set_led(i, 1);
    }
    sleep_ms(200);

    // Frame 3: Acender LEDs em um padrão alternado
    clear_leds();
    for (int i = 0; i < LED_COUNT; i += 2) {
        set_led(i, 1);
    }
    sleep_ms(200);

    // Frame 4: Acender LEDs de forma reversa
    clear_leds();
    for (int i = LED_COUNT - 1; i >= 0; i--) {
        set_led(i, 1);
        sleep_ms(50);
    }

    // Frame 5: Todos os LEDs piscam juntos
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

// Atualizar animação por tecla
void animate_led_matrix(char key) {
    switch (key) {
        case '7': 
            printf("Animação de 5 frames iniciada!\n"); 
            play_led_animation_frame_by_frame();
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
