/*
** EPITECH PROJECT, 2022
** B-MUL-200-NAN-2-1-myrpg-matteo.turpault
** File description:
** check_perm
*/

#include "character.h"

bool check_perm_double_atk(character_t *prs)
{
    if (prs->damages >= 20) {
        return (true);
    }
    return (false);
}

bool check_perm_bleeding(character_t *prs)
{
    if (prs->damages >= 9 && prs->speed >= 25) {
        return (true);
    }
    return (false);
}

bool check_perm_fire(character_t *prs)
{
    if (prs->damages >= 15 && prs->mana >= 10) {
        return (true);
    }
    return (false);
}

bool check_perm_heal(character_t *prs)
{
    if (prs->hp >= 30 && prs->intelligence >= 14) {
        return (true);
    }
    return (false);
}

bool check_perm_poison(character_t *prs)
{
    if (prs->intelligence >= 16 && prs->mana >= 18) {
        return (true);
    }
    return (false);
}
