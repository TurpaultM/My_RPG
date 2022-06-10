/*
** EPITECH PROJECT, 2022
** grouped_functions
** File description:
** destroy
*/

#include "my_rpg.h"
#include "menu_win.h"

void destroy_menu_frame(global *global)
{
    sfText_destroy(global->fram_text);
}

void destroy_menu(global *global)
{
    sfText_destroy(global->music.music_text);
    sfText_destroy(global->music.sound_text);
    sfSprite_destroy(global->option_spr);
    sfSprite_destroy(global->credit_spr);
    sfSprite_destroy(global->menu.choose_spr);
    sfMusic_destroy(global->music.music_back);
    sfSound_destroy(global->music.sound);
    destroy_menu_frame(global);
    for (int i = 2; i < 15; i++) {
        sfText_destroy(global->menu.button_menu[i]->text_button);
    }
    for (int i = 2; i < 22; i++) {
        sfRectangleShape_destroy(global->menu.button_menu[i]->button);
        free(global->menu.button_menu[i]);
    }
    free(global->menu.button_menu);
}
