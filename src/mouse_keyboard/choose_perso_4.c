/*
** EPITECH PROJECT, 2022
** mouse key
** File description:
** choose perso 4
*/

#include "my_rpg.h"
#include "menu.h"

void detect_perso_3_cont(global *global, int mu_x, int mu_y)
{
    int x_man2 = sfRectangleShape_getPosition(global->menu.button_menu[18]
    ->button).x;
    int y_man2 = sfRectangleShape_getPosition(global->menu.button_menu[18]
    ->button).y;

    if (mu_x >= x_man2 && mu_x <= (x_man2 + 200) && mu_y >= y_man2 && mu_y
    <= (y_man2 + 200)) {
        sfSound_play(global->music.sound);
        global->screen = 1;
        init_game(global, 6);
    }
}

void detect_perso_3(global *global, int mu_x, int mu_y)
{
    int x_man1 = sfRectangleShape_getPosition(global->menu.button_menu[17]
    ->button).x;
    int y_man1 = sfRectangleShape_getPosition(global->menu.button_menu[17]
    ->button).y;

    if (mu_x >= x_man1 && mu_x <= (x_man1 + 200) && mu_y >= y_man1 && mu_y
    <= (y_man1 + 200)) {
        sfSound_play(global->music.sound);
        global->screen = 1;
        init_game(global, 5);
    }
    detect_perso_3_cont(global, mu_x, mu_y);
}
