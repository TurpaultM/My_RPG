/*
** EPITECH PROJECT, 2022
** B-MUL-200-NAN-2-1-myrpg-matteo.turpault
** File description:
** set_cpt
*/

#include "character.h"

void set_poison(character_t *prs)
{
    prs->cpt[4]->damage_each_turn = 15;
    prs->cpt[4]->damages = 0;
    prs->cpt[4]->heal = 0;
    prs->cpt[4]->luck = 100;
    prs->cpt[4]->mana_cost = 6;
    prs->cpt[4]->spell_speed = 8;
    prs->cpt[4]->armor_gain = 0;
}

void set_hydro(character_t *prs)
{
    prs->cpt[5]->damage_each_turn = 0;
    prs->cpt[5]->damages = prs->damages * 2;
    prs->cpt[5]->heal = 0;
    prs->cpt[5]->luck = 95;
    prs->cpt[5]->mana_cost = 6;
    prs->cpt[5]->spell_speed = 9;
    prs->cpt[5]->armor_gain = 0;
}

void set_armor_up(character_t *prs)
{
    prs->cpt[6]->damage_each_turn = 0;
    prs->cpt[6]->damages = 0;
    prs->cpt[6]->heal = 0;
    prs->cpt[6]->luck = 100;
    prs->cpt[6]->mana_cost = 2;
    prs->cpt[6]->spell_speed = 9;
    prs->cpt[6]->armor_gain = 15;
}

void set_regen_shield(character_t *prs)
{
    prs->cpt[7]->damage_each_turn = 0;
    prs->cpt[7]->damages = 0;
    prs->cpt[7]->heal = 10;
    prs->cpt[7]->luck = 80;
    prs->cpt[7]->mana_cost = 6;
    prs->cpt[7]->spell_speed = 8;
    prs->cpt[7]->armor_gain = 8;
}

void set_titan_shield(character_t *prs)
{
    prs->cpt[8]->damage_each_turn = 0;
    prs->cpt[8]->damages = prs->defenses;
    prs->cpt[8]->heal = 0;
    prs->cpt[8]->luck = 70;
    prs->cpt[8]->mana_cost = 6;
    prs->cpt[8]->spell_speed = 5;
    prs->cpt[8]->armor_gain = prs->defenses;
}
