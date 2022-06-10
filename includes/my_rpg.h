/*
** EPITECH PROJECT, 2021
** my_rpg
** File description:
** rpg . h
*/

#pragma once
    #include <stdio.h>
    #include <fcntl.h>
    #include <stddef.h>
    #include <unistd.h>
    #include <stdlib.h>
    #include <stdbool.h>
    #include <string.h>
    #include <SFML/Window.h>
    #include <SFML/Audio.h>
    #include <SFML/System.h>
    #include <SFML/Graphics.h>
    #include "menu_win.h"
    #include "particles.h"

typedef struct music_s {
    int music_volume;
    int sound_volume;
    sfText *music_text;
    sfText *sound_text;
    sfMusic *music_back;
    sfSound *sound;
    sfSoundBuffer *buff;
} music_t;

typedef struct global {
    sfRenderWindow *window;
    sfEvent event;
    music_t music;
    sfSprite *option_spr;
    sfTexture *option_tex;
    sfSprite *credit_spr;
    sfTexture *credit_tex;
    unsigned int framerates;
    sfText *fram_text;
    int length;
    int height;
    menu_t menu;
    int ratio;
    int screen;
    unsigned int width;
    unsigned int heigh;
    pixel_t *pixel;
    sfTexture *texture_part;
    sfSprite *sprite_part;
    sfColor color;
    int nb_part;
    effect_t **part;
    bool key_g;
    bool key_b;
} global;

void init_buttons(void);

void my_putchar(char c);

int my_put_nbr(int nb);

int my_putstr(char const *str);

void change_color_of_button(global *global);

char *int_to_char(int result);

int my_power_rec(int nbr, int p);

void change_color_of_button3(global *global);

void change_color_of_button5(global *global);

int detect_credit(global *global, int mu_x, int mu_y);

int detect_option(global *global, int mu_x, int mu_y);

void music(global *global);

void sound_start(global *global);

void destroy_menu(global *global);

void change_color_frame(global *global);

void destroy_menu(global *global);

void change_color_of_button_character(global *global);

void set_rec_size(global *global, sfVector2f size, int i);

void set_text_pos_string(global *global, char *name, sfVector2f pos, int i);

void set_rec_pos(global *global, sfVector2f pos, int i);

void ini_music(global *global, sfFont *font);

void ini_button_pos(global *global);

void ini_choose(global *global);

int start_menu(global *global);

void draw_menu(global *global);

void close_menu(sfRenderWindow *window, global *global);

void init_game(global *glob, int which_player);

void ini_particles(void);

void ini_text_buttons(global *global);

void draw_menu_conditions_3(global *glob, sfColor sfGray);

int detect_menu_howto(global *g, int mu_x, int mu_y);

void change_color_of_button4(global *g, int mx, int my);

void detect_option_3(global *global, int mu_x, int mu_y);

int detect_option_cont_2(global *global, int mu_x, int mu_y);

void verif_color_frame_cont(global *global);

void change_color_of_button_character3(global *g, int mx, int my,
sfColor sfGray);

void detect_perso_3(global *global, int mu_x, int mu_y);

void event_fight_2(global *global);

int detect_menu_2(global *g, int mu_x, int mu_y);
