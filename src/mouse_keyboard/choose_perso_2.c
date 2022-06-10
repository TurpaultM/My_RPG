/*
** EPITECH PROJECT, 2022
** mouse_keyboard
** File description:
** choose perso
*/

#include "my_rpg.h"
#include "menu.h"

void detect_perso_2_cont(global *global, int mu_x, int mu_y)
{
    int x_woman2 = sfRectangleShape_getPosition(global->menu.button_menu[16]
    ->button).x;
    int y_woman2 = sfRectangleShape_getPosition(global->menu.button_menu[16]
    ->button).y;

    if ((mu_x >= x_woman2 && mu_x <= (x_woman2 + 200) && mu_y >= y_woman2
    && mu_y <= (y_woman2 + 200))) {
        sfSound_play(global->music.sound);
        global->screen = 1;
        init_game(global, 4);
    } else {
        detect_perso_3(global, mu_x, mu_y);
    }
}

void detect_perso_2(global *global, int mu_x, int mu_y)
{
    int x_woman1 = sfRectangleShape_getPosition(global->menu.button_menu[15]
    ->button).x;
    int y_woman1 = sfRectangleShape_getPosition(global->menu.button_menu[15]
    ->button).y;

    if ((mu_x >= x_woman1 && mu_x <= (x_woman1 + 200) && mu_y >= y_woman1
    && mu_y <= (y_woman1 + 200)) && global->menu.visible == 5) {
        sfSound_play(global->music.sound);
        global->screen = 1;
        init_game(global, 3);
    }
    detect_perso_2_cont(global, mu_x, mu_y);
}

void detect_perso_cont(global *global, int mu_x, int mu_y)
{
    int x_elf2 = sfRectangleShape_getPosition(global->menu.button_menu[14]
    ->button).x;
    int y_elf2 = sfRectangleShape_getPosition(global->menu.button_menu[14]
    ->button).y;

    if (mu_x >= x_elf2 && mu_x <= (x_elf2 + 200) && mu_y >= y_elf2
    && mu_y <= (y_elf2 + 200)) {
        sfSound_play(global->music.sound);
        global->screen = 1;
        init_game(global, 2);
    } else {
        detect_perso_2(global, mu_x, mu_y);
    }
}

void detect_perso(global *global)
{
    int mu_x = sfMouse_getPositionRenderWindow(global->window).x;
    int mu_y = sfMouse_getPositionRenderWindow(global->window).y;
    int x_elf1 = sfRectangleShape_getPosition(global->menu.button_menu[13]
    ->button).x;
    int y_elf1 = sfRectangleShape_getPosition(global->menu.button_menu[13]
    ->button).y;

    if (mu_x >= x_elf1 && mu_x <= (x_elf1 + 200) && mu_y >= y_elf1
    && mu_y <= (y_elf1 + 200)) {
        sfSound_play(global->music.sound);
        global->screen = 1;
        init_game(global, 1);
    }
    detect_perso_cont(global, mu_x, mu_y);
}
