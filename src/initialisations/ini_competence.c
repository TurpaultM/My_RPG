/*
** EPITECH PROJECT, 2022
** initialisation
** File description:
** ini the competence
*/

#include "character.h"
#include "my_rpg.h"

void set_rec_pos_comp(character_t *prs, sfVector2f pos, int i)
{
    sfRectangleShape_setPosition(prs->cpt[i]->button, pos);
}

void init_comp(character_t *prs)
{
    set_rec_pos_comp(prs, (sfVector2f){700, 300}, 0);
    set_rec_pos_comp(prs, (sfVector2f){900, 300}, 1);
    set_rec_pos_comp(prs, (sfVector2f){1100, 300}, 2);
    set_rec_pos_comp(prs, (sfVector2f){700, 500}, 3);
    set_rec_pos_comp(prs, (sfVector2f){900, 500}, 4);
    set_rec_pos_comp(prs, (sfVector2f){1100, 500}, 5);
    set_rec_pos_comp(prs, (sfVector2f){700, 700}, 6);
    set_rec_pos_comp(prs, (sfVector2f){900, 700}, 7);
    set_rec_pos_comp(prs, (sfVector2f){1100, 700}, 8);
}

void ini_compet(character_t *prs)
{
    prs->back->back_spr = sfSprite_create();
    prs->back->back_tex = sfTexture_createFromFile("assets/imag"
    "es/parch_comp.png", NULL);
    sfSprite_setTexture(prs->back->back_spr, prs->back->back_tex, sfFalse);
    sfSprite_setPosition(prs->back->back_spr, (sfVector2f){450, 170});
    for (int i = 0; i < 9; i++) {
        prs->cpt[i]->button = sfRectangleShape_create();
        sfRectangleShape_setFillColor(prs->cpt[i]->button, sfWhite);
        sfRectangleShape_setSize(prs->cpt[i]->button, (sfVector2f){100, 100});
        sfRectangleShape_setOutlineThickness(prs->cpt[i]->button, 1);
        sfRectangleShape_setOutlineColor(prs->cpt[i]->button, sfBlack);
    }
    prs->quete_avail = 0;
    init_comp(prs);
}

void set_stat_cpt(int i, character_t *prs)
{
    if (i == 0)
        set_double_attack(prs);
    if (i == 1)
        set_bleeding(prs);
    if (i == 2)
        set_fire_sword(prs);
    if (i == 3)
        set_heal(prs);
    if (i == 4)
        set_poison(prs);
    if (i == 5)
        set_hydro(prs);
    if (i == 6)
        set_armor_up(prs);
    if (i == 7)
        set_regen_shield(prs);
    if (i == 8)
        set_titan_shield(prs);
}

void init_cpt(character_t *prs)
{
    for (int i = 0; i < 9; i++) {
        prs->cpt[i] = malloc(sizeof(competence_t));
        prs->cpt[i]->name = cpt_name(i);
        prs->cpt[i]->sprite_cpt = sfSprite_create();
        prs->cpt[i]->texture_cpt = sfTexture_createFromFile(txr_cpt(i), NULL);
        prs->cpt[i]->pos = cpt_pos(i);
        prs->cpt[i]->pos_txt = cpt_pos_txt(i);
        set_stat_cpt(i, prs);
        prs->cpt[i]->text_comp = sfText_create();
        sfText_setFont(prs->cpt[i]->text_comp , prs->quete.font_quete);
        sfText_setColor(prs->cpt[i]->text_comp, sfBlack);
        sfText_setCharacterSize(prs->cpt[i]->text_comp, 20);
        sfText_setPosition(prs->cpt[i]->text_comp, prs->cpt[i]->pos_txt);
        sfText_setString(prs->cpt[i]->text_comp, prs->cpt[i]->name);
        sfSprite_setTexture(prs->cpt[i]->sprite_cpt,
        prs->cpt[i]->texture_cpt, sfFalse);
        sfSprite_setPosition(prs->cpt[i]->sprite_cpt, prs->cpt[i]->pos);
    }
    ini_compet(prs);
}
