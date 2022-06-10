/*
** EPITECH PROJECT, 2022
** windows
** File description:
** close windows
*/

#include "my_rpg.h"
#include "menu_win.h"
#include "character.h"

void close_menu_2(sfRenderWindow *window, global *global)
{
    if (global->menu.visible == 0) {
        change_color_of_button(global);
    }
    if (global->menu.visible == 2) {
        change_color_of_button3(global);
        change_color_frame(global);
    }
    if (global->menu.is_character_chosen == 1) {
        change_color_of_button_character(global);
    } else if (global->menu.visible == 3) {
        change_color_of_button5(global);
    }
}

void close_menu(sfRenderWindow *window, global *global)
{
    sfEvent event;

    sfRenderWindow_setFramerateLimit(global->window, global->framerates);
    while (sfRenderWindow_pollEvent(window, &event)) {
        if (event.type == sfEvtClosed)
            sfRenderWindow_close(window);
        if (event.type == sfEvtMouseButtonPressed) {
            detect_menu(global);
        }
    }
    close_menu_2(window, global);
}
