/*
** EPITECH PROJECT, 2022
** initialisations
** File description:
** ini the colisions
*/

#include "character.h"
#include "collisions.h"

const int repere = 48;

void verif_col_movement(character_t *prs, int i)
{
    if (prs->colision[repere]->position.x >= prs->colision[i]->position.x){
        move_all_right(prs);
    }
    if (prs->colision[repere]->position.x + 64
    <= prs->colision[i]->position.x + prs->colision[i]->size.x){
        move_all_left(prs);
    }
    if (prs->colision[repere]->position.y >= prs->colision[i]->position.y){
        move_all_down(prs);
    }
    if (prs->colision[repere]->position.y + 64
    <= prs->colision[i]->position.y + prs->colision[i]->size.y){
        move_all_up(prs);
    }
}

void ini_vect_rect_3(character_t *prs)
{
    place_rect_col((sfVector2f){40, 40}, (sfVector2f){1136, 1702}, 25, prs);
    place_rect_col((sfVector2f){40, 40}, (sfVector2f){1136, 2402}, 26, prs);
    place_rect_col((sfVector2f){40, 40}, (sfVector2f){1413, 2402}, 27, prs);
    place_rect_col((sfVector2f){40, 40}, (sfVector2f){1405, 2980}, 28, prs);
    place_rect_col((sfVector2f){40, 40}, (sfVector2f){1135, 2980}, 29, prs);
    place_rect_col((sfVector2f){40, 40}, (sfVector2f){2624, 1380}, 30, prs);
    place_rect_col((sfVector2f){780, 680}, (sfVector2f){3340, 3802}, 31, prs);
    place_rect_col((sfVector2f){250, 75}, (sfVector2f){3330, 3700}, 32, prs);
    place_rect_col((sfVector2f){325, 75}, (sfVector2f){3790, 3700}, 33, prs);
    place_rect_col((sfVector2f){2280, 780}, (sfVector2f){2570, 4460}, 34, prs);
    place_rect_col((sfVector2f){1500, 750}, (sfVector2f){3360, 5240}, 35, prs);
    place_rect_col((sfVector2f){25, 20}, (sfVector2f){3390, 800}, 35, prs);
    place_rect_col((sfVector2f){25, 20}, (sfVector2f){4720, 690}, 36, prs);
    place_rect_col((sfVector2f){25, 20}, (sfVector2f){4180, 1250}, 37, prs);
    place_rect_col((sfVector2f){25, 20}, (sfVector2f){5430, 1350}, 38, prs);
    place_rect_col((sfVector2f){25, 20}, (sfVector2f){5710, 1630}, 39, prs);
    ini_vect_rect_3_cont(prs);
}

void ini_vect_rect_2(character_t *prs)
{
    prs->colision[14]->position = ((sfVector2f){2508, 2570});
    prs->colision[14]->size = ((sfVector2f){60, 730});
    prs->colision[15]->position = ((sfVector2f){2110, 3240});
    prs->colision[15]->size = ((sfVector2f){400, 60});
    prs->colision[16]->position = ((sfVector2f){2570, 2570});
    prs->colision[16]->size = ((sfVector2f){350, 60});
    prs->colision[17]->position = ((sfVector2f){2867, 1215});
    prs->colision[17]->size = ((sfVector2f){60, 1350});
    prs->colision[18]->position = ((sfVector2f){2867, 115});
    prs->colision[18]->size = ((sfVector2f){60, 950});
    place_rect_col((sfVector2f){40, 40}, (sfVector2f){1440, 913}, 19, prs);
    place_rect_col((sfVector2f){40, 40}, (sfVector2f){1190, 913}, 20, prs);
    place_rect_col((sfVector2f){40, 40}, (sfVector2f){2780, 257}, 21, prs);
    place_rect_col((sfVector2f){40, 40}, (sfVector2f){420, 1384}, 22, prs);
    place_rect_col((sfVector2f){40, 40}, (sfVector2f){700, 1384}, 23, prs);
    place_rect_col((sfVector2f){40, 40}, (sfVector2f){1413, 1702}, 24, prs);
    ini_vect_rect_3(prs);
}

sfBool verif_col(character_t *prs, monster_t **mst, global *global)
{
    verif_boss(prs, mst, global);
    for (int i = 0; i < 46; i++) {
        if (prs->colision[repere]->position.x + 64
        + prs->movement_speed >= prs->colision[i]->position.x
        && prs->colision[repere]->position.x <= prs->colision[i]->position.x
        + prs->colision[i]->size.x
        && prs->colision[repere]->position.y + 64
        + prs->movement_speed >= prs->colision[i]->position.y
        && prs->colision[repere]->position.y <= prs->colision[i]->position.y
        + prs->colision[i]->size.y) {
            verif_col_movement(prs, i);
            return (sfTrue);
        }
    }
    return (sfFalse);
}

void place_rect_col(sfVector2f size, sfVector2f pos, int i, character_t *prs)
{
    prs->colision[i]->position = pos;
    prs->colision[i]->size = size;
}
