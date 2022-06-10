/*
** EPITECH PROJECT, 2022
** npc
** File description:
** draw_npc
*/

#include "character.h"
#include "my_rpg.h"

void draw_npc(global *glob, character_t *prs)
{
    for (int i = 0; i < 8; i++) {
        sfRenderWindow_drawSprite(glob->window,
        prs->npc[i]->sprite_npc, NULL);
    }
}
