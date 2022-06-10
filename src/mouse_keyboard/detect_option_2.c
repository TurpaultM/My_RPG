/*
** EPITECH PROJECT, 2022
** mouse_keyboard
** File description:
** detectoption2
*/

#include "character.h"

void detect_option_6(global *global, int mu_x, int mu_y)
{
    int x_90 = sfRectangleShape_getPosition(global->menu.button_menu[11]
    ->button).x;
    int y_90 = sfRectangleShape_getPosition(global->menu.button_menu[11]
    ->button).y;

    if (mu_x >= x_90 && mu_x <= (x_90 + 50) && mu_y >= y_90 && mu_y <=
    (y_90 + 50) && global->screen == 0) {
        global->framerates = 90;
        sfSound_play(global->music.sound);
        sfText_setString(global->fram_text, int_to_char(global->framerates));
    }
}

void detect_option_5(global *global, int mu_x, int mu_y)
{
    int x_60 = sfRectangleShape_getPosition(global->menu.button_menu[10]
    ->button).x;
    int y_60 = sfRectangleShape_getPosition(global->menu.button_menu[10]
    ->button).y;

    if (mu_x >= x_60 && mu_x <= (x_60 + 50) && mu_y >= y_60 && mu_y <=
    (y_60 + 50) && global->screen == 0) {
        global->framerates = 60;
        sfSound_play(global->music.sound);
        sfText_setString(global->fram_text, int_to_char(global->framerates));
    }
    detect_option_6(global, mu_x, mu_y);
}

void detect_option_4(global *global, int mu_x, int mu_y)
{
    int x_30 = sfRectangleShape_getPosition(global->menu.button_menu[9]
    ->button).x;
    int y_30 = sfRectangleShape_getPosition(global->menu.button_menu[9]
    ->button).y;

    if (mu_x >= x_30 && mu_x <= (x_30 + 50) && mu_y >= y_30 && mu_y <=
    (y_30 + 50) && global->screen == 0) {
        global->framerates = 30;
        sfSound_play(global->music.sound);
        sfText_setString(global->fram_text, int_to_char(global->framerates));
    }
    detect_option_5(global, mu_x, mu_y);
}
