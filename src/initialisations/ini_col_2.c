/*
** EPITECH PROJECT, 2022
** initialisation
** File description:
** ini col 2
*/

#include "character.h"
#include "collisions.h"

const int itere = 49;

void ini_vect_rect_3_cont(character_t *prs)
{
    place_rect_col((sfVector2f){25, 20}, (sfVector2f){6096, 1017}, 40, prs);
    place_rect_col((sfVector2f){25, 20}, (sfVector2f){5070, 1735}, 41, prs);
    place_rect_col((sfVector2f){25, 20}, (sfVector2f){4470, 1935}, 42, prs);
    place_rect_col((sfVector2f){25, 20}, (sfVector2f){3670, 2075}, 43, prs);
    place_rect_col((sfVector2f){25, 20}, (sfVector2f){4435, 2565}, 44, prs);
    place_rect_col((sfVector2f){1500, 740}, (sfVector2f){3360, 5240}, 45, prs);
    place_rect_col((sfVector2f){80, 80}, (sfVector2f){3650, 3700}, 46, prs);
    place_rect_col((sfVector2f){220, 220}, (sfVector2f){2990, 5350}, 47, prs);
}

void ini_vect_rect_cont(character_t *prs)
{
    prs->colision[5]->position = ((sfVector2f){290, 745});
    prs->colision[5]->size = ((sfVector2f){830, 235});
    prs->colision[6]->position = ((sfVector2f){290, 1760});
    prs->colision[6]->size = ((sfVector2f){750, 310});
    prs->colision[7]->position = ((sfVector2f){1550, 745});
    prs->colision[7]->size = ((sfVector2f){1220, 235});
    prs->colision[8]->position = ((sfVector2f){1238, 1270});
    prs->colision[8]->size = ((sfVector2f){280, 200});
    prs->colision[9]->position = ((sfVector2f){1720, 1750});
    prs->colision[9]->size = ((sfVector2f){550, 600});
    prs->colision[10]->position = ((sfVector2f){1440, 2670});
    prs->colision[10]->size = ((sfVector2f){850, 250});
    prs->colision[11]->position = ((sfVector2f){610, 2350});
    prs->colision[11]->size = ((sfVector2f){350, 650});
    prs->colision[12]->position = ((sfVector2f){255, 130});
    prs->colision[12]->size = ((sfVector2f){30, 3170});
    prs->colision[13]->position = ((sfVector2f){220, 3240});
    prs->colision[13]->size = ((sfVector2f){1705, 60});
}

void ini_vect_rect(character_t *prs)
{
    for (int i = 0; i < itere; i++) {
        prs->colision[i] = malloc(sizeof(colision_t));
    }
    prs->colision[0]->position = ((sfVector2f){-800, 95});
    prs->colision[0]->size = ((sfVector2f){8525, 35});
    prs->colision[1]->position = ((sfVector2f){6700, 143});
    prs->colision[1]->size = ((sfVector2f){1034, 6610});
    prs->colision[2]->position = ((sfVector2f){190, 143});
    prs->colision[2]->size = ((sfVector2f){35, 6610});
    prs->colision[3]->position = ((sfVector2f){-800, 6750});
    prs->colision[3]->size = ((sfVector2f){8525, 932});
    prs->colision[4]->position = ((sfVector2f){235, 150});
    prs->colision[4]->size = ((sfVector2f){2050, 315});
    ini_vect_rect_cont(prs);
    ini_vect_rect_2(prs);
    prs->colision[itere - 1]->size.x = prs->rect.width * 2;
    prs->colision[itere - 1]->size.y = prs->rect.height * 2;
    prs->colision[itere - 1]->position.x = prs->pos_character.x + 10;
    prs->colision[itere - 1]->position.y = prs->pos_character.y + 3;
}

void ini_cols(character_t *prs)
{
    prs->colision = malloc(sizeof(colision_t *) * itere);

    ini_vect_rect(prs);
    for (int i = 0; i < itere; i++) {
        prs->colision[i]->button = sfRectangleShape_create();
        sfRectangleShape_setFillColor(prs->colision[i]->button, sfTransparent);
        sfRectangleShape_setSize(prs->colision[i]->button, prs->colision[i]
        ->size);
        sfRectangleShape_setPosition(prs->colision[i]->button, prs->colision[i]
        ->position);
        sfRectangleShape_setOutlineThickness(prs->colision[i]->button, 3);
        sfRectangleShape_setOutlineColor(prs->colision[i]->button, sfBlack);
    }
}

void pos_rec_view(character_t *prs, sfVector2f size, int i, sfVector2f pos)
{
    sfRectangleShape_setSize(prs->colision[i]->button, size);
    sfRectangleShape_setPosition(prs->colision[i]->button, pos);
}
