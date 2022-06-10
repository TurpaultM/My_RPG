/*
** EPITECH PROJECT, 2022
** grouped function
** File description:
** draw how to play
*/

#include "my_rpg.h"
#include "menu_win.h"

void draw_menu_conditions_5(global *glob, sfColor sfGray)
{
    if (glob->menu.visible == 11) {
        sfRenderWindow_drawSprite(glob->window, glob->menu.howto5_spr, NULL);
        sfRenderWindow_drawRectangleShape(glob->window,
        glob->menu.button_menu[21]->button,NULL);
        sfRenderWindow_drawText(glob->window,
        glob->menu.button_menu[14]->text_button, NULL);
    }
}

void draw_menu_conditions_4(global *glob, sfColor sfGray)
{
    if (glob->menu.visible == 8) {
        sfRenderWindow_drawSprite(glob->window, glob->menu.howto3_spr, NULL);
        sfRenderWindow_drawRectangleShape(glob->window,
        glob->menu.button_menu[21]->button,NULL);
        sfRenderWindow_drawText(glob->window,
        glob->menu.button_menu[14]->text_button, NULL);
    }
    if (glob->menu.visible == 9) {
        sfRenderWindow_drawSprite(glob->window, glob->menu.howto4_spr, NULL);
        sfRenderWindow_drawRectangleShape(glob->window,
        glob->menu.button_menu[21]->button,NULL);
        sfRenderWindow_drawText(glob->window,
        glob->menu.button_menu[14]->text_button, NULL);
    }
    draw_menu_conditions_5(glob, sfGray);
}

void draw_menu_conditions_3(global *glob, sfColor sfGray)
{
    if (glob->menu.visible == 6) {
        sfRenderWindow_drawSprite(glob->window, glob->menu.howto1_spr, NULL);
        sfRenderWindow_drawRectangleShape(glob->window,
        glob->menu.button_menu[21]->button,NULL);
        sfRenderWindow_drawText(glob->window,
        glob->menu.button_menu[14]->text_button, NULL);
    }
    if (glob->menu.visible == 7) {
        sfRenderWindow_drawSprite(glob->window, glob->menu.howto2_spr, NULL);
        sfRenderWindow_drawRectangleShape(glob->window,
        glob->menu.button_menu[21]->button,NULL);
        sfRenderWindow_drawText(glob->window,
        glob->menu.button_menu[14]->text_button, NULL);
    }
    draw_menu_conditions_4(glob, sfGray);
}
