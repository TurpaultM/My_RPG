/*
** EPITECH PROJECT, 2022
** initilaisation
** File description:
** menu for the quete and stats
*/

#include "character.h"

void start_pause(character_t *prs, global *glob)
{
    int x_pnj = sfSprite_getPosition(prs->npc[1]->sprite_npc).x;
    int y_pnj = sfSprite_getPosition(prs->npc[1]->sprite_npc).y;
    int x_char = prs->rect.width;
    int y_char = prs->rect.height;

    if (sfKeyboard_isKeyPressed(sfKeyI)) {
        prs->screen = 1;
    }
    if (sfKeyboard_isKeyPressed(sfKeyX) && (prs->screen == 1
    || prs->screen == 2 || prs->screen == 4 || prs->screen == 5)) {
        prs->screen = 0;
    }
    if (sfKeyboard_isKeyPressed(sfKeyEscape) && prs->screen == 0){
        prs->screen = 5;
    }
    if (sfKeyboard_isKeyPressed(sfKeyC)) {
        prs->screen = 2;
    }
}
