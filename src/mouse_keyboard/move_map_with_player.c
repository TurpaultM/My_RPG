/*
** EPITECH PROJECT, 2022
** move_player
** File description:
** move_map_with_player
*/

#include "character.h"

const int iter = 48;

void apply_rect(character_t *prs)
{
    int reper = 48;

    for (int i = 0; i < reper; i++) {
        sfRectangleShape_setPosition(prs->colision[i]->button,
        prs->colision[i]->position);
    }
}

void move_all_left(character_t *prs)
{
    prs->back->pos_bg.x += 4.78 + prs->movement_speed;
    prs->back->pos_ftns.x += 4.78 + prs->movement_speed;
    for (int i = 0; i < iter; i++) {
        prs->colision[i]->position.x += 4.78 + prs->movement_speed;
    }
    apply_rect(prs);
    sfSprite_setPosition(prs->back->backs, prs->back->pos_bg);
    sfSprite_setPosition(prs->back->fronts, prs->back->pos_bg);
    sfSprite_setPosition(prs->back->fountains, prs->back->pos_ftns);
    for (int i = 0; i < 8; i++) {
        prs->npc[i]->pos_npc.x += 4.78 + prs->movement_speed;
        sfSprite_setPosition(prs->npc[i]->sprite_npc, prs->npc[i]->pos_npc);
    }
}

void move_all_right(character_t *prs)
{
    prs->back->pos_bg.x -= 4.78 + prs->movement_speed;
    prs->back->pos_ftns.x -= 4.78 + prs->movement_speed;
    for (int i = 0; i < iter; i++) {
        prs->colision[i]->position.x -= 4.78 + prs->movement_speed;
    }
    apply_rect(prs);
    sfSprite_setPosition(prs->back->backs, prs->back->pos_bg);
    sfSprite_setPosition(prs->back->fronts, prs->back->pos_bg);
    sfSprite_setPosition(prs->back->fountains, prs->back->pos_ftns);
    for (int i = 0; i < 8; i++) {
        prs->npc[i]->pos_npc.x -= 4.78 + prs->movement_speed;
        sfSprite_setPosition(prs->npc[i]->sprite_npc, prs->npc[i]->pos_npc);
    }
}

void move_all_up(character_t *prs)
{
    prs->back->pos_bg.y += 4.78 + prs->movement_speed;
    prs->back->pos_ftns.y += 4.78 + prs->movement_speed;
    for (int i = 0; i < iter; i++) {
        prs->colision[i]->position.y += 4.78 + prs->movement_speed;
    }
    apply_rect(prs);
    sfSprite_setPosition(prs->back->backs, prs->back->pos_bg);
    sfSprite_setPosition(prs->back->fronts, prs->back->pos_bg);
    sfSprite_setPosition(prs->back->fountains, prs->back->pos_ftns);
    for (int i = 0; i < 8; i++) {
        prs->npc[i]->pos_npc.y += 4.78 + prs->movement_speed;
        sfSprite_setPosition(prs->npc[i]->sprite_npc, prs->npc[i]->pos_npc);
    }
}

void move_all_down(character_t *prs)
{
    prs->back->pos_bg.y -= 4.78 + prs->movement_speed;
    prs->back->pos_ftns.y -= 4.78 + prs->movement_speed;
    for (int i = 0; i < iter; i++) {
        prs->colision[i]->position.y -= 4.78 + prs->movement_speed;
    }
    apply_rect(prs);
    sfSprite_setPosition(prs->back->backs, prs->back->pos_bg);
    sfSprite_setPosition(prs->back->fronts, prs->back->pos_bg);
    sfSprite_setPosition(prs->back->fountains, prs->back->pos_ftns);
    for (int i = 0; i < 8; i++) {
        prs->npc[i]->pos_npc.y -= 4.78 + prs->movement_speed;
        sfSprite_setPosition(prs->npc[i]->sprite_npc, prs->npc[i]->pos_npc);
    }
}
