/*
** EPITECH PROJECT, 2022
** mouse keyboard
** File description:
** detect 2
*/

#include "my_rpg.h"
#include "menu_win.h"
#include "character.h"

void detect_option_game_6(global *g, int mx, int my, character_t *prs)
{
    int x_esc = sfRectangleShape_getPosition(g->menu.button_menu[19]
    ->button).x;
    int y_esc = sfRectangleShape_getPosition(g->menu.button_menu[19]
    ->button).y;

    if (mx >= x_esc && mx <= (x_esc + 400) && my >= y_esc && my
    <= (y_esc + 100)) {
        sfSound_play(g->music.sound);
        g->screen = 10;
    }
}

void detect_option_game_4_cont(global *g, int mx, int my, character_t *prs)
{
    int x90 = sfRectangleShape_getPosition(g->menu.button_menu[11]->button).x;
    int y90 = sfRectangleShape_getPosition(g->menu.button_menu[11]->button).y;

    if (mx >= x90 && mx <= (x90 + 50) && my >= y90 && my <= (y90 + 50)) {
        g->framerates = 90;
        sfSound_play(g->music.sound);
        sfText_setString(g->fram_text, int_to_char(g->framerates));
    }
    detect_option_game_6(g, mx, my, prs);
}
