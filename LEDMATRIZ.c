#include "pico/stdlib.h"
#include "hardware/gpio.h"


#define NUM_LEDS 25 // Número de LEDs NeoPixel
#define LED_PIN 10  // Pino de controle dos LEDs

// Mapeamento do teclado matricial 4x4
char teclado[4][4] = {
    {'1', '2', '3', 'A'},
    {'4', '5', '6', 'B'},
    {'7', '8', '9', 'C'},
    {'*', '0', '#', 'D'}
};

int linhas[] = {6, 7, 8, 9}; // Pinos de linhas
int colunas[] = {2, 3, 4, 5}; // Pinos de colunas

// Função para inicializar o teclado matricial
void init_keypad() {
    for (int i = 0; i < 4; i++) {
        gpio_init(linhas[i]);
        gpio_set_dir(linhas[i], GPIO_OUT); // Linhas como saída
        gpio_put(linhas[i], 1);            // Inicializa como "não pressionada"
    }

    for (int i = 0; i < 4; i++) {
        gpio_init(colunas[i]);
        gpio_set_dir(colunas[i], GPIO_IN); // Colunas como entrada
        gpio_pull_up(colunas[i]);          // Ativa o pull-up interno
    }
}

// Função para ler o teclado
char read_keypad() {
    for (int i = 0; i < 4; i++) {
        gpio_put(linhas[i], 0); // Ativa a linha
        for (int j = 0; j < 4; j++) {
            if (gpio_get(colunas[j]) == 0) { // Se houver uma tecla pressionada
                gpio_put(linhas[i], 1); // Desativa a linha
                return teclado[i][j];
            }
        }
        gpio_put(linhas[i], 1); // Desativa a linha
    }
    return 0; // Retorna 0 se nenhuma tecla for pressionada
}

// Função para inicializar os (LEDs)
void init_neopixel() {
    gpio_init(LED_PIN);
    gpio_set_dir(LED_PIN, GPIO_OUT);
}

// Função para acender os LEDs
void light_up_leds(uint32_t color) {
    for (int i = 0; i < NUM_LEDS; i++) {
        // Acende todos os LEDs com a cor fornecida
        // Envia o sinal para o pino de controle do LED
        gpio_put(LED_PIN, 1); // Simulação do envio de dados de cor, ajustando conforme o protocolo NeoPixel
    }
}

// Função para apagar os LEDs
void turn_off_leds() {
    for (int i = 0; i < NUM_LEDS; i++) {
        gpio_put(LED_PIN, 0); // Apaga os LEDs
    }
}

// Função para fazer os LEDs piscarem
void blink_leds() {
    while (1) {
        light_up_leds(0x00FF00);  // Acende os LEDs (verde)
        sleep_ms(500);            // Aguarda meio segundo
        turn_off_leds();          // Apaga os LEDs
        sleep_ms(500);            // Aguarda meio segundo
    }
}

int main() {
    stdio_init_all();

    init_keypad();   // Inicializa o teclado matricial
    init_neopixel(); // Inicializa o NeoPixel

    while (1) {
        char key = read_keypad();  // Lê a tecla pressionada

        if (key == 'D') {
            light_up_leds(0x00FF00);  // Exibe a letra "D" (verde)
            blink_leds();             // Faz os LEDs piscarem
        }
        sleep_ms(100);  // Aguarda um pouco para evitar leituras rápidas demais
    }

    return 0;
}
