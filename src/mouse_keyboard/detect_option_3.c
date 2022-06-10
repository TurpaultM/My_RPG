/*
** EPITECH PROJECT, 2022
** mous
** File description:
** detect option 3
*/

#include "character.h"

void detect_option_3_cont(global *global, int mu_x, int mu_y)
{
    int x_frame = sfRectangleShape_getPosition(global->menu.button_menu[8]
    ->button).x;
    int y_frame = sfRectangleShape_getPosition(global->menu.button_menu[8]
    ->button).y;

    if (mu_x >= x_frame + 200 && (mu_x - 200) <= (x_frame + 200) && mu_y >=
    y_frame && mu_y <= (y_frame + 100) && global->screen == 0) {
        if (global->framerates < 90) {
            global->framerates += 30;
            sfSound_play(global->music.sound);
            sfText_setString(global->fram_text,
            int_to_char(global->framerates));
        }
    }
    detect_option_4(global, mu_x, mu_y);
}

void detect_option_3_2(global *global, int mu_x, int mu_y)
{
    int x_frame = sfRectangleShape_getPosition(global->menu.button_menu[8]
    ->button).x;
    int y_frame = sfRectangleShape_getPosition(global->menu.button_menu[8]
    ->button).y;

    if (mu_x >= x_frame && mu_x <= (x_frame + 200) && mu_y >= y_frame && mu_y
    <= (y_frame + 100) && global->screen == 0) {
        if (global->framerates > 30) {
            global->framerates -= 30;
            sfSound_play(global->music.sound);
            sfText_setString(global->fram_text,
            int_to_char(global->framerates));
        }
    }
    detect_option_3_cont(global, mu_x, mu_y);
}

void detect_option_3(global *global, int mu_x, int mu_y)
{
    int x_back = sfRectangleShape_getPosition(global->menu.button_menu[5]
    ->button).x;
    int y_back = sfRectangleShape_getPosition(global->menu.button_menu[5]
    ->button).y;

    if (mu_x >= x_back && mu_x <= (x_back + 400) && mu_y >= y_back && mu_y <=
    (y_back + 100) && global->screen == 0) {
        global->menu.visible = 0;
    }
    detect_option_3_2(global, mu_x, mu_y);
}
