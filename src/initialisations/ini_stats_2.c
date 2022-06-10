/*
** EPITECH PROJECT, 2022
** initialisation
** File description:
** ini the stats 2
*/

#include "character.h"

void set_rec_pos_stat(character_t *prs, sfVector2f pos, int i)
{
    sfRectangleShape_setPosition(prs->stat.text_stat[i]->button, pos);
}

void ini_plus(character_t *prs)
{
    prs->stat.plus_tex = sfTexture_createFromFile("assets/ima"
    "ges/plus.png", NULL);
    prs->stat.p1_spr = sfSprite_create();
    sfSprite_setTexture(prs->stat.p1_spr ,prs->stat.plus_tex, sfFalse);
    sfSprite_setPosition(prs->stat.p1_spr, (sfVector2f){1200, 210});
    prs->stat.p2_spr = sfSprite_create();
    sfSprite_setTexture(prs->stat.p2_spr ,prs->stat.plus_tex, sfFalse);
    sfSprite_setPosition(prs->stat.p2_spr, (sfVector2f){1200, 271});
    prs->stat.p3_spr = sfSprite_create();
    sfSprite_setTexture(prs->stat.p3_spr ,prs->stat.plus_tex, sfFalse);
    sfSprite_setPosition(prs->stat.p3_spr, (sfVector2f){1200, 330});
    prs->stat.p4_spr = sfSprite_create();
    sfSprite_setTexture(prs->stat.p4_spr ,prs->stat.plus_tex, sfFalse);
    sfSprite_setPosition(prs->stat.p4_spr, (sfVector2f){1200, 393});
    prs->stat.p5_spr = sfSprite_create();
    sfSprite_setTexture(prs->stat.p5_spr ,prs->stat.plus_tex, sfFalse);
    sfSprite_setPosition(prs->stat.p5_spr, (sfVector2f){1561, 271});
    prs->stat.p6_spr = sfSprite_create();
    sfSprite_setTexture(prs->stat.p6_spr ,prs->stat.plus_tex, sfFalse);
    sfSprite_setPosition(prs->stat.p6_spr, (sfVector2f){1561, 330});
}

void ini_upgrade_rect(character_t *prs)
{
    for (int i = 0; i < 6; i++) {
        prs->stat.text_stat[i]->button = sfRectangleShape_create();
        sfRectangleShape_setFillColor(prs->stat.text_stat[i]->button,
        sfTransparent);
        sfRectangleShape_setSize(prs->stat.text_stat[i]->button,
        (sfVector2f){40, 40});
        sfRectangleShape_setOutlineThickness(prs->stat.text_stat[i]->button,
        1);
        sfRectangleShape_setOutlineColor(prs->stat.text_stat[i]->button,
        sfBlack);
    }
    set_rec_pos_stat(prs, (sfVector2f){1200, 210}, 0);
    set_rec_pos_stat(prs, (sfVector2f){1200, 270}, 1);
    set_rec_pos_stat(prs, (sfVector2f){1200, 330}, 2);
    set_rec_pos_stat(prs, (sfVector2f){1200, 390}, 3);
    set_rec_pos_stat(prs, (sfVector2f){1560, 330}, 4);
    set_rec_pos_stat(prs, (sfVector2f){1560, 270}, 5);
    ini_plus(prs);
}
