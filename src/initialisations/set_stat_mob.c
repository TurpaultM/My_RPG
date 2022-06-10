/*
** EPITECH PROJECT, 2022
** B-MUL-200-NAN-2-1-myrpg-matteo.turpault
** File description:
** set_stat_mob
*/

#include "character.h"

void set_slime(monster_t *mst, int def, int atk)
{
    mst->gain_xp = 1;
    mst->hp = (rand() % 20) + 6;
    mst->level = 2;
    mst->damages = (rand() % 4) + atk;
    mst->defenses = (rand() % 3) + def;
    mst->speed = (rand() % 5) + 2;
    mst->gain_money = 2;
}

void set_ghost(monster_t *mst)
{
    mst->gain_xp = (rand() % 4) + 3;
    mst->hp = (rand() % 20) + 30;
    mst->level = 7;
    mst->damages = (rand() % 10) + 7;
    mst->defenses = (rand() % 20) + 30;
    mst->speed = (rand() % 60) + 15;
    mst->gain_money = (rand() % 30) + 20;
}

void set_zombie(monster_t *mst)
{
    mst->gain_xp = (rand() % 10) + 6;
    mst->hp = (rand() % 40) + 60;
    mst->level = 8;
    mst->damages = (rand() % 15) + 10;
    mst->defenses = (rand() % 24) + 35;
    mst->speed = (rand() % 15) + 2;
    mst->gain_money = (rand() % 4) + 10;
}

void set_pablo(monster_t *mst)
{
    mst->gain_xp = (rand() % 20) + 10;
    mst->hp = (rand() % 10) + 3;
    mst->level = 2;
    mst->damages = (rand() % 2) + 3;
    mst->defenses = (rand() % 2) + 1;
    mst->speed = (rand() % 40) + 10;
    mst->gain_money = (rand() % 30) + 10;
}
