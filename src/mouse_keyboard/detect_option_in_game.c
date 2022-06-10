/*
** EPITECH PROJECT, 2022
** mouse_keyboard
** File description:
** detect_opion
*/

#include "my_rpg.h"
#include "menu_win.h"
#include "character.h"

void detect_option_game_2(global *g, int k, int w, character_t *prs)
{
    int xs = sfRectangleShape_getPosition(g->menu.button_menu[3]->button).x;
    int h = sfRectangleShape_getPosition(g->menu.button_menu[3]->button).y;

    if (k >= xs && k <= (xs + 200) && w >= h && w <= (h + 100)) {
        if (g->music.sound_volume >= 10) {
            sfSound_play(g->music.sound);
            g->music.sound_volume -= 10;
            sfText_setString(g->music.sound_text,
            int_to_char(g->music.sound_volume));
            sfSound_setVolume(g->music.sound, g->music.sound_volume);
        }
    }
    detect_option_game_2_cont(g, k, w, prs);
}

int detect_option_game_cont(global *g, int k, int w, character_t *prs)
{
    int xm = sfRectangleShape_getPosition(g->menu.button_menu[4]->button).x;
    int f = sfRectangleShape_getPosition(g->menu.button_menu[4]->button).y;

    if (k >= xm + 200 && (k - 200) <= (xm + 200) && w >= f && w <= (f + 100)) {
        if (g->music.music_volume < 100) {
            g->music.music_volume += 10;
            sfSound_play(g->music.sound);
            sfText_setString(g->music.music_text,
            int_to_char(g->music.music_volume));
            sfMusic_setVolume(g->music.music_back, g->music.music_volume);
        }
    }
    detect_option_game_2(g, k, w, prs);
}

int detect_option_game(global *g, int k, int w, character_t *prs)
{
    int xm = sfRectangleShape_getPosition(g->menu.button_menu[4]->button).x;
    int f = sfRectangleShape_getPosition(g->menu.button_menu[4]->button).y;

    if (k >= xm && k <= (xm + 200) && w >= f && w <= (f + 100)) {
        if (g->music.music_volume >= 10) {
            g->music.music_volume -= 10;
            sfSound_play(g->music.sound);
            sfText_setString(g->music.music_text,
            int_to_char(g->music.music_volume));
            sfMusic_setVolume(g->music.music_back, g->music.music_volume);
        }
    }
    detect_option_game_cont(g, k, w, prs);
}
