/*
** EPITECH PROJECT, 2022
** initialisation
** File description:
** detect the boss
*/

#include "character.h"
#include "collisions.h"

const int rep = 48;

void verif_boss_2(character_t *prs, monster_t **mst, global *global)
{
    if (prs->colision[rep]->position.x + 64
    + prs->movement_speed >= prs->colision[47]->position.x
    && prs->colision[rep]->position.x <= prs->colision[47]->position.x
    + prs->colision[47]->size.x
    && prs->colision[rep]->position.y + 64
    + prs->movement_speed >= prs->colision[47]->position.y
    && prs->colision[rep]->position.y <= prs->colision[47]->position.y
    + prs->colision[47]->size.y && prs->shop_npc.key_blue == 1
    && global->key_g == false) {
        global->screen = 2;
        global->key_g = true;
        mst[0]->monster_id = 5;
        is_there_fight(global, prs, mst[mst[0]->monster_id]);
    } else {
        global->key_g = false;
    }
}

void verif_boss(character_t *prs, monster_t **mst, global *global)
{
    if (prs->colision[rep]->position.x
    + prs->movement_speed >= prs->colision[46]->position.x
    && prs->colision[rep]->position.x + 64 <= prs->colision[46]->position.x
    + prs->colision[46]->size.x
    && prs->colision[rep]->position.y
    + prs->movement_speed >= prs->colision[46]->position.y
    && prs->colision[rep]->position.y + 64 <= prs->colision[46]->position.y
    + prs->colision[46]->size.y && prs->shop_npc.key_green == 1
    && global->key_b == false) {
        global->key_b = true;
        global->screen = 2;
        mst[0]->monster_id = 6;
        is_there_fight(global, prs, mst[mst[0]->monster_id]);
    } else {
        global->key_b = false;
    }
    verif_boss_2(prs, mst, global);
}
