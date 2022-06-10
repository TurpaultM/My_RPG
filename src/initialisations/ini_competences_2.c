/*
** EPITECH PROJECT, 2022
** initialissations
** File description:
** init he competence 2
*/

#include "character.h"
#include "my_rpg.h"

void ini_all_comp(character_t *prs)
{
    for (int i = 0; i != 9; i++) {
        prs->all_comp[i] = '0';
    }
    prs->all_comp[9] = '\0';
}

char *txr_cpt(int i)
{
    if (i == 6)
        return ("assets/images/bcl.png");
    if (i == 7)
        return ("assets/images/shield_comp2.png");
    if (i == 8)
        return ("assets/images/shield_comp3.png");
    if (i == 1)
        return ("assets/images/sword_comp.png");
    if (i == 0)
        return ("assets/images/sword_comp2.png");
    if (i == 2)
        return ("assets/images/sword_comp3.png");
    if (i == 3)
        return ("assets/images/regene_comp.png");
    if (i == 4)
        return ("assets/images/poison_comp.png");
    if (i == 5)
        return ("assets/images/mana_comp.png");
}

char *cpt_name(int i)
{
    if (i == 0)
        return (alloc_insert("Double attack"));
    if (i == 1)
        return (alloc_insert("Bleeding"));
    if (i == 2)
        return (alloc_insert("Fire sword"));
    if (i == 3)
        return (alloc_insert("Heal"));
    if (i == 4)
        return (alloc_insert("Poison"));
    if (i == 5)
        return (alloc_insert("Hydro cannon"));
    if (i == 6)
        return (alloc_insert("Armor up"));
    if (i == 7)
        return (alloc_insert("Regen shield"));
    if (i == 8)
        return (alloc_insert("Titan armor"));
}

sfVector2f cpt_pos(int i)
{
    if (i == 6)
        return ((sfVector2f){717, 723});
    if (i == 7)
        return ((sfVector2f){919, 723});
    if (i == 8)
        return ((sfVector2f){1119, 723});
    if (i == 3)
        return ((sfVector2f){707, 518});
    if (i == 4)
        return ((sfVector2f){900, 500});
    if (i == 5)
        return ((sfVector2f){1109, 518});
    if (i == 1)
        return ((sfVector2f){919, 323});
    if (i == 0)
        return ((sfVector2f){717, 323});
    if (i == 2)
        return ((sfVector2f){1119, 323});
}

sfVector2f cpt_pos_txt(int i)
{
    if (i == 0)
        return ((sfVector2f){655, 420});
    if (i == 1)
        return ((sfVector2f){895, 420});
    if (i == 2)
        return ((sfVector2f){1070, 420});
    if (i == 3)
        return ((sfVector2f){720, 620});
    if (i == 4)
        return ((sfVector2f){905, 620});
    if (i == 5)
        return ((sfVector2f){1055, 620});
    if (i == 6)
        return ((sfVector2f){670, 820});
    if (i == 7)
        return ((sfVector2f){865, 820});
    if (i == 8)
        return ((sfVector2f){1068, 820});
}
