/*
** EPITECH PROJECT, 2022
** B-MUL-200-NAN-2-1-myrpg-matteo.turpault
** File description:
** verif_color_frame
*/

#include "my_rpg.h"
#include "menu_win.h"

void verif_color_frame_cont2(global *global)
{
    if (global->framerates == 90) {
        sfRectangleShape_setFillColor(global->menu.button_menu[9]
        ->button, sfRed);
        sfRectangleShape_setOutlineThickness(global->menu.button_menu[9]
        ->button, 1);
        sfRectangleShape_setFillColor(global->menu.button_menu[10]
        ->button, sfRed);
        sfRectangleShape_setOutlineThickness(global->menu.button_menu[10]
        ->button, 1);
        sfRectangleShape_setFillColor(global->menu.button_menu[11]->button,
        sfGreen);
    }
}

void verif_color_frame_cont(global *global)
{
    if (global->framerates == 60) {
        sfRectangleShape_setFillColor(global->menu.button_menu[9]->button,
        sfRed);
        sfRectangleShape_setOutlineThickness(global->menu.button_menu[9]
        ->button, 1);
        sfRectangleShape_setFillColor(global->menu.button_menu[11]->button,
        sfRed);
        sfRectangleShape_setOutlineThickness(global->menu.button_menu[11]
        ->button, 1);
        sfRectangleShape_setFillColor(global->menu.button_menu[10]
        ->button, sfGreen);
    } else {
        verif_color_frame_cont2(global);
    }
}
