/*
** EPITECH PROJECT, 2022
** animation of player
** File description:
** anim_player
*/

#include "character.h"

void anim_up(character_t *prs)
{
    prs->rect.top = (96 + 96 + 32);
    prs->rect.left += 32;
    if (prs->rect.left > (64 + 96 + 96)) {
        prs->rect.left = 192;
    }
}

void anim_down(character_t *prs)
{
    prs->rect.top = 96 + 32;
    prs->rect.left += 32;
    if (prs->rect.left > 64 + 192) {
        prs->rect.left = 192;
    }
}

void anim_left(character_t *prs)
{
    prs->rect.top = 64 + 96;
    prs->rect.left += 32;
    if (prs->rect.left > 64 + 192) {
        prs->rect.left = 192;
    }
}

void anim_right(character_t *prs)
{
    prs->rect.top = 96 + 96;
    prs->rect.left += 32;
    if (prs->rect.left > 64 + 192) {
        prs->rect.left = 192;
    }
}
