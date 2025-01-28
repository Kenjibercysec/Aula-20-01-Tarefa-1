#ifndef ANIMATIONS_H
#define ANIMATIONS_H

#include <stdint.h>

void initialize_leds();

void set_all_leds_color(uint8_t red, uint8_t green, uint8_t blue, uint8_t intensity);

void play_animation(uint8_t animation_id);

void clear_leds();

#endif 
