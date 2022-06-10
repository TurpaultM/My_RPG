/*
** EPITECH PROJECT, 2022
** B-MUL-200-NAN-2-1-myrpg-matteo.turpault
** File description:
** check_perm2
*/

#include "character.h"

bool check_perm_hydro(character_t *prs)
{
    if (prs->damages >= 10 && prs->intelligence >= 16) {
        return (true);
    }
    return (false);
}

bool check_perm_armor_up(character_t *prs)
{
    if (prs->defenses >= 12 && prs->hp >= 17) {
        return (true);
    }
    return (false);
}

bool check_perm_regen_shield(character_t *prs)
{
    if (prs->defenses >= 15 && prs->intelligence >= 15) {
        return (true);
    }
    return (false);
}

bool check_perm_titan_armor(character_t *prs)
{
    if (prs->defenses >= 25 && prs->hp >= 20) {
        return (true);
    }
    return (false);
}
