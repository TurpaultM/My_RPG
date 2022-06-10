/*
** EPITECH PROJECT, 2022
** mouse_keyboard
** File description:
** choose what competence you want
*/

#include "character.h"

int nb_comp(character_t *prs)
{
    int nb_one = 0;

    for (size_t i = 0; i < 9; i++) {
        if (prs->all_comp[i] == '1') {
            nb_one++;
        }
    }
    return (nb_one);
}

bool set_comp(character_t *prs, int i)
{
    if (i == 0)
        return (check_perm_double_atk(prs));
    if (i == 1)
        return (check_perm_bleeding(prs));
    if (i == 2)
        return (check_perm_fire(prs));
    if (i == 3)
        return (check_perm_heal(prs));
    if (i == 4)
        return (check_perm_poison(prs));
    if (i == 5)
        return (check_perm_hydro(prs));
    if (i == 6)
        return (check_perm_armor_up(prs));
    if (i == 7)
        return (check_perm_regen_shield(prs));
    if (i == 8)
        return (check_perm_titan_armor(prs));

}

void change_comp(character_t *prs, global *glob)
{
    int mu_x = 0;
    int mu_y = 0;

    for (int i = 0, x_elf = 0, y_elf = 0; i < 9; i++) {
        mu_x = sfMouse_getPositionRenderWindow(glob->window).x;
        mu_y = sfMouse_getPositionRenderWindow(glob->window).y;
        x_elf = sfRectangleShape_getPosition(prs->cpt[i]->button).x;
        y_elf = sfRectangleShape_getPosition(prs->cpt[i]->button).y;
        if (mu_x >= x_elf && mu_x <= (x_elf + 100) && mu_y >= y_elf
        && mu_y <= (y_elf + 100) && nb_comp(prs) < 3
        && set_comp(prs, i) == true) {
            prs->all_comp[i] = '1';
        }
    }
}
