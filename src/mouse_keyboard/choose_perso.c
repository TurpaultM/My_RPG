/*
** EPITECH PROJECT, 2022
** window
** File description:
** window to choose the perso
*/

#include "my_rpg.h"

void change_color_of_button_character2_cont(global *global, int mu_x,
int mu_y, sfColor sfGray)
{
    int x_woman2 = sfRectangleShape_getPosition(global->menu.button_menu[16]
    ->button).x;
    int y_woman2 = sfRectangleShape_getPosition(global->menu.button_menu[16]
    ->button).y;

    if (mu_x >= x_woman2 && mu_x <= (x_woman2 + 200) && mu_y >=
    y_woman2 && mu_y <= (y_woman2 + 200)) {
        sfRectangleShape_setFillColor(global->menu.button_menu[16]
        ->button, sfGray);
        sfRectangleShape_setOutlineThickness(global->menu.button_menu[16]
        ->button, 4);
    } else {
        change_color_of_button_character3(global, mu_x, mu_y, sfGray);
    }
}

void change_color_of_button_character2(global *global, int mu_x,
int mu_y, sfColor sfGray)
{
    int x_woman1 = sfRectangleShape_getPosition(global->menu.button_menu[15]
    ->button).x;
    int y_woman1 = sfRectangleShape_getPosition(global->menu.button_menu[15]
    ->button).y;

    if (mu_x >= x_woman1 && mu_x <= (x_woman1 + 200) && mu_y >= y_woman1 &&
    mu_y <= (y_woman1 + 200)) {
        sfRectangleShape_setFillColor(global->menu.button_menu[15]->button,
        sfGray);
        sfRectangleShape_setOutlineThickness(global->menu.button_menu[15]
        ->button, 4);
    } else {
        change_color_of_button_character2_cont(global, mu_x, mu_y, sfGray);
    }
}

void change_color_of_button_character_cont(global *global, int mu_x,
int mu_y, sfColor sfGray)
{
    int x_elf2 = sfRectangleShape_getPosition(global->menu.button_menu[14]
    ->button).x;
    int y_elf2 = sfRectangleShape_getPosition(global->menu.button_menu[14]
    ->button).y;

    if (mu_x >= x_elf2 && mu_x <= (x_elf2 + 200) && mu_y >= y_elf2 &&
    mu_y <= (y_elf2 + 200)) {
        sfRectangleShape_setFillColor(global->menu.button_menu[14]->button,
        sfGray);
        sfRectangleShape_setOutlineThickness(global->menu.button_menu[14]
        ->button, 4);
    } else {
        change_color_of_button_character2(global, mu_x, mu_y, sfGray);
    }
}

void change_color_of_button_character(global *global)
{
    int x_elf1 = sfRectangleShape_getPosition(global->menu.button_menu[13]
    ->button).x;
    int y_elf1 = sfRectangleShape_getPosition(global->menu.button_menu[13]
    ->button).y;

    int mu_x = sfMouse_getPositionRenderWindow(global->window).x;
    int mu_y = sfMouse_getPositionRenderWindow(global->window).y;
    sfColor sfGray = sfColor_fromRGBA(150, 150, 150, 70);

    if (mu_x >= x_elf1 && mu_x <= (x_elf1 + 200) && mu_y >= y_elf1 && mu_y
    <= (y_elf1 + 200)) {
        sfRectangleShape_setFillColor(global->menu.button_menu[13]->button,
        sfGray);
        sfRectangleShape_setOutlineThickness(global->menu.button_menu[13]
        ->button, 4);
    } else {
        change_color_of_button_character_cont(global, mu_x, mu_y, sfGray);
    }
}
