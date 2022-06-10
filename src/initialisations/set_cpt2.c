/*
** EPITECH PROJECT, 2022
** B-MUL-200-NAN-2-1-myrpg-matteo.turpault
** File description:
** set_cpt2
*/

#include "character.h"

void set_double_attack(character_t *prs)
{
    prs->cpt[0]->damage_each_turn = 0;
    prs->cpt[0]->damages = prs->damages;
    prs->cpt[0]->heal = 0;
    prs->cpt[0]->luck = 80;
    prs->cpt[0]->mana_cost = 5;
    prs->cpt[0]->spell_speed = 5;
    prs->cpt[0]->armor_gain = 0;
}

void set_bleeding(character_t *prs)
{
    prs->cpt[1]->damage_each_turn = 4;
    prs->cpt[1]->damages = prs->damages * 0.8;
    prs->cpt[1]->heal = 0;
    prs->cpt[1]->luck = 95;
    prs->cpt[1]->mana_cost = 3;
    prs->cpt[1]->spell_speed = 7;
    prs->cpt[1]->armor_gain = 0;
}

void set_fire_sword(character_t *prs)
{
    prs->cpt[2]->damage_each_turn = 10;
    prs->cpt[2]->damages = prs->damages * 0.5;
    prs->cpt[2]->heal = 0;
    prs->cpt[2]->luck = 100;
    prs->cpt[2]->mana_cost = 6;
    prs->cpt[2]->spell_speed = 6;
    prs->cpt[2]->armor_gain = 0;
}

void set_heal(character_t *prs)
{
    prs->cpt[3]->damage_each_turn = 0;
    prs->cpt[3]->damages = 0;
    prs->cpt[3]->heal = 40;
    prs->cpt[3]->luck = 100;
    prs->cpt[3]->mana_cost = 3;
    prs->cpt[3]->spell_speed = 10;
    prs->cpt[3]->armor_gain = 0;
}
