/*
** EPITECH PROJECT, 2022
** mouse_keyboard
** File description:
** detect_opion
*/

#include "my_rpg.h"
#include "menu_win.h"

void detect_option_2_cont(global *global, int mu_x, int mu_y)
{
    int x_sound = sfRectangleShape_getPosition(global->menu.button_menu[3]
    ->button).x;
    int y_sound = sfRectangleShape_getPosition(global->menu.button_menu[3]
    ->button).y;

    if (mu_x >= x_sound + 200 && (mu_x - 200) <= (x_sound + 200) && mu_y >=
    y_sound && mu_y <= (y_sound + 100) && global->screen == 0) {
        if (global->music.sound_volume < 100) {
            sfSound_play(global->music.sound);
            global->music.sound_volume += 10;
            sfText_setString(global->music.sound_text,
            int_to_char(global->music.sound_volume));
        }
    }
    detect_option_3(global, mu_x, mu_y);
}

void detect_option_2(global *global, int mu_x, int mu_y)
{
    int x_sound = sfRectangleShape_getPosition(global->menu.button_menu[3]
    ->button).x;
    int y_sound = sfRectangleShape_getPosition(global->menu.button_menu[3]
    ->button).y;

    if (mu_x >= x_sound && mu_x <= (x_sound + 200) && mu_y >= y_sound &&
    mu_y <= (y_sound + 100) && global->screen == 0) {
        if (global->music.sound_volume >= 10) {
            sfSound_play(global->music.sound);
            global->music.sound_volume -= 10;
            sfText_setString(global->music.sound_text,
            int_to_char(global->music.sound_volume));
        }
    }
    detect_option_2_cont(global, mu_x, mu_y);
}

int detect_option_cont(global *global, int mu_x, int mu_y)
{
    int x_music = sfRectangleShape_getPosition(global->menu.button_menu[4]
    ->button).x;
    int y_music = sfRectangleShape_getPosition(global->menu.button_menu[4]
    ->button).y;

    if (mu_x >= x_music && mu_x <= (x_music + 200) && mu_y >= y_music &&
    mu_y <= (y_music + 100) && global->screen == 0) {
        if (global->music.music_volume >= 10) {
            global->music.music_volume -= 10;
            sfSound_play(global->music.sound);
            sfText_setString(global->music.music_text,
            int_to_char(global->music.music_volume));
        }
    }
    detect_option_cont_2(global, mu_x, mu_y);
}

int detect_option_cont_2(global *global, int mu_x, int mu_y)
{
    int x_music = sfRectangleShape_getPosition(global->menu.button_menu[4]
    ->button).x;
    int y_music = sfRectangleShape_getPosition(global->menu.button_menu[4]
    ->button).y;

    if (mu_x >= x_music + 200 && (mu_x - 200) <= (x_music + 200) && mu_y >=
    y_music && mu_y <= (y_music + 100) && global->screen == 0) {
        if (global->music.music_volume < 100) {
            global->music.music_volume += 10;
            sfSound_play(global->music.sound);
            sfText_setString(global->music.music_text,
            int_to_char(global->music.music_volume));
        }
    }
    detect_option_2(global, mu_x, mu_y);
}

int detect_option(global *global, int mu_x, int mu_y)
{
    int x_cre = sfRectangleShape_getPosition(global->menu.button_menu[2]
    ->button).x;
    int y_cre = sfRectangleShape_getPosition(global->menu.button_menu[2]
    ->button).y;

    if (mu_x >= x_cre && mu_x <= (x_cre + 400) && mu_y >= y_cre && mu_y <=
    (y_cre + 100) && global->screen == 0)
        global->menu.visible = 3;
    detect_option_cont(global, mu_x, mu_y);
}
