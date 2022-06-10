/*
** EPITECH PROJECT, 2022
** windows
** File description:
** call all the initialisations for the menu and start the loop of the menu
*/

#include "my_rpg.h"
#include "menu_win.h"

int start_menu(global *global)
{
    sfVideoMode md = {global->length, global->height, 32};

    global->window = sfRenderWindow_create(md, "Key Quest", sfClose, NULL);
    if (global->screen == 0) {
        while (sfRenderWindow_isOpen(global->window) && global->screen != 10) {
            sfRenderWindow_clear(global->window, sfBlack);
            close_menu(global->window, global);
            draw_menu(global);
            sfRenderWindow_display(global->window);
        }
    }
    destroy_menu(global);
}
