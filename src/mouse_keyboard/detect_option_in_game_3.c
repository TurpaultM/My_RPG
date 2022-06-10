/*
** EPITECH PROJECT, 2022
** mous_keyboard
** File description:
** deteect option in game 3
*/

#include "my_rpg.h"
#include "menu_win.h"
#include "character.h"

void detect_option_game_4(global *g, int mx, int my, character_t *prs)
{
    int x30 = sfRectangleShape_getPosition(g->menu.button_menu[9]->button).x;
    int y30 = sfRectangleShape_getPosition(g->menu.button_menu[9]->button).y;
    int x60 = sfRectangleShape_getPosition(g->menu.button_menu[10]->button).x;
    int y60 = sfRectangleShape_getPosition(g->menu.button_menu[10]->button).y;

    if (mx >= x30 && mx <= (x30 + 50) && my >= y30 && my <= (y30 + 50)) {
        g->framerates = 30;
        sfSound_play(g->music.sound);
        sfText_setString(g->fram_text, int_to_char(g->framerates));
    }
    if (mx >= x60 && mx <= (x60 + 50) && my >= y60 && my <= (y60 + 50)) {
        g->framerates = 60;
        sfSound_play(g->music.sound);
        sfText_setString(g->fram_text, int_to_char(g->framerates));
    }
    detect_option_game_4_cont(g, mx, my, prs);
}

void detect_option_game_3_cont(global *g, int o, int v, character_t *prs)
{
    int w = sfRectangleShape_getPosition(g->menu.button_menu[8]->button).x;
    int yx = sfRectangleShape_getPosition(g->menu.button_menu[8]->button).y;

    if (o >= w + 200 && (o - 200) <= (w + 200) && v >= yx && v <= (yx + 100)) {
        if (g->framerates < 90) {
            g->framerates += 30;
            sfSound_play(g->music.sound);
            sfText_setString(g->fram_text, int_to_char(g->framerates));
        }
    }
    detect_option_game_4(g, o, v, prs);
}

void detect_option_game_3(global *g, int o, int v, character_t *prs)
{
    int xb = sfRectangleShape_getPosition(g->menu.button_menu[5]->button).x;
    int yb = sfRectangleShape_getPosition(g->menu.button_menu[5]->button).y;
    int w = sfRectangleShape_getPosition(g->menu.button_menu[8]->button).x;
    int yx = sfRectangleShape_getPosition(g->menu.button_menu[8]->button).y;

    if (o >= xb && o <= (xb + 400) && v >= yb && v <= (yb + 100))
        prs->screen = 0;
    if (o >= w && o <= (w + 200) && v >= yx && v <= (yx + 100)) {
        if (g->framerates > 30) {
            g->framerates -= 30;
            sfSound_play(g->music.sound);
            sfText_setString(g->fram_text, int_to_char(g->framerates));
        }
    }
    detect_option_game_3_cont(g, o, v, prs);
}

void detect_option_game_2_cont(global *g, int k, int w, character_t *prs)
{
    int xs = sfRectangleShape_getPosition(g->menu.button_menu[3]->button).x;
    int h = sfRectangleShape_getPosition(g->menu.button_menu[3]->button).y;

    if (k >= xs + 200 && (k - 200) <= (xs + 200) && w >= h && w <= (h + 100)) {
        if (g->music.sound_volume < 100) {
            sfSound_play(g->music.sound);
            g->music.sound_volume += 10;
            sfText_setString(g->music.sound_text,
            int_to_char(g->music.sound_volume));
            sfSound_setVolume(g->music.sound, g->music.sound_volume);
        }
    }
    detect_option_game_3(g, k, w, prs);
}
