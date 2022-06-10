/*
** EPITECH PROJECT, 2022
** grouped_functions
** File description:
** draw throw the window
*/

#include "my_rpg.h"
#include "menu_win.h"

void draw_menu_conditions_2(global *glob, sfColor sfGray)
{
    if (glob->menu.visible == 2) {
        sfRenderWindow_clear(glob->window, sfGray);
        sfRenderWindow_drawSprite(glob->window, glob->option_spr, NULL);
        for (int i = 2; i < 6; i++) {
            sfRenderWindow_drawRectangleShape(glob->window,
            glob->menu.button_menu[i]->button,NULL);
            sfRenderWindow_drawText(glob->window,
            glob->menu.button_menu[i]->text_button, NULL);
        }
        for (int i = 8; i < 12; i++) {
            sfRenderWindow_drawRectangleShape(glob->window,
            glob->menu.button_menu[i]->button,NULL);
            sfRenderWindow_drawText(glob->window,
            glob->menu.button_menu[i]->text_button, NULL);
        }
        sfRenderWindow_drawText(glob->window,glob->music.music_text, NULL);
        sfRenderWindow_drawText(glob->window,glob->music.sound_text, NULL);
        sfRenderWindow_drawText(glob->window, glob->fram_text, NULL);
    }
    draw_menu_conditions_3(glob, sfGray);
}

void draw_menu_conditions(global *global, sfColor sfGray)
{
    sfMusic_setVolume(global->music.music_back, global->music.music_volume);
    sfSound_setVolume(global->music.sound, global->music.sound_volume);
    if (global->menu.visible == 3) {
        sfRenderWindow_clear(global->window, sfBlue);
        sfSprite_move(global->credit_spr, (sfVector2f){0, -1.2});
        sfRenderWindow_drawRectangleShape(global->window,
        global->menu.button_menu[6]->button,NULL);
        sfRenderWindow_drawText(global->window,
        global->menu.button_menu[6]->text_button, NULL);
        if (sfSprite_getPosition(global->credit_spr).y < -6000)
            sfSprite_setPosition(global->credit_spr, (sfVector2f){0, 1090});
        sfRenderWindow_drawSprite(global->window, global->credit_spr, NULL);
    }
    draw_menu_conditions_2(global, sfGray);
}

void draw_menu_2(global *glob, sfColor sfGray)
{
    sfRenderWindow_drawSprite(glob->window, glob->menu.background, NULL);
    for (int i = 0; i < 2; i++) {
        sfRenderWindow_drawRectangleShape(glob->window,
        glob->menu.button_menu[i]->button,NULL);
        sfRenderWindow_drawText(glob->window,
        glob->menu.button_menu[i]->text_button, NULL);
    }
    sfRenderWindow_drawRectangleShape(glob->window,
    glob->menu.button_menu[7]->button, NULL);
    sfRenderWindow_drawText(glob->window,
    glob->menu.button_menu[7]->text_button, NULL);
    draw_menu_conditions(glob, sfGray);
    sfRenderWindow_drawRectangleShape(glob->window,
    glob->menu.button_menu[20]->button, NULL);
    sfRenderWindow_drawText(glob->window,
    glob->menu.button_menu[13]->text_button, NULL);
    draw_menu_conditions(glob, sfGray);
}

void draw_menu(global *glob)
{
    sfColor sfGray = sfColor_fromRGB(130, 130, 130);

    if (glob->menu.is_character_chosen == 1) {
        glob->menu.visible = 5;
        sfRenderWindow_clear(glob->window, sfGray);
        sfRenderWindow_drawSprite(glob->window, glob->menu.choose_spr, NULL);
        for (int i = 13; i < 19; i++) {
            sfRenderWindow_drawRectangleShape(glob->window,
            glob->menu.button_menu[i]->button,NULL);
        }
    } else {
        draw_menu_2(glob, sfGray);
    }
}
