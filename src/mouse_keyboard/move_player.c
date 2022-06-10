/*
** EPITECH PROJECT, 2022
** move_player
** File description:
** move_player
*/

#include "character.h"

void movement_left(character_t *prs, global *glob, monster_t **mst)
{
    if (sfKeyboard_isKeyPressed(sfKeyQ)) {
        prs->time->time = sfClock_getElapsedTime(prs->time->left);
        prs->time->sec = prs->time->time.microseconds / 22000;
        if (prs->time->sec > 0.7 && verif_col(prs, mst, glob) == sfFalse) {
            move_all_left(prs);
            sfClock_restart(prs->time->left);
        }
        prs->time->time = sfClock_getElapsedTime(prs->time->left_anim);
        prs->time->sec_anim = prs->time->time.microseconds / 60000;
        if (prs->time->sec_anim > 1) {
            anim_left(prs);
            sfClock_restart(prs->time->left_anim);
        }
    }
}

void movement_rigth(character_t *prs, global *glob, monster_t **mst)
{
    if (sfKeyboard_isKeyPressed(sfKeyD)) {
        prs->time->time = sfClock_getElapsedTime(prs->time->right);
        prs->time->sec = prs->time->time.microseconds / 22000;
        if (prs->time->sec > 0.7 && verif_col(prs, mst, glob) == sfFalse) {
            move_all_right(prs);
            sfClock_restart(prs->time->right);
        }
        prs->time->time = sfClock_getElapsedTime(prs->time->right_anim);
        prs->time->sec_anim = prs->time->time.microseconds / 60000;
        if (prs->time->sec_anim > 1) {
            anim_right(prs);
            sfClock_restart(prs->time->right_anim);
        }
    } else {
        movement_left(prs, glob, mst);
    }
}

void movement_up(character_t *prs, global *glob, monster_t **mst)
{
    if (sfKeyboard_isKeyPressed(sfKeyZ)) {
        prs->time->time = sfClock_getElapsedTime(prs->time->up);
        prs->time->sec = prs->time->time.microseconds / 22000;
        if (prs->time->sec > 0.7 && verif_col(prs, mst, glob) == sfFalse) {
            move_all_up(prs);
            sfClock_restart(prs->time->up);
        }
        prs->time->time = sfClock_getElapsedTime(prs->time->up_anim);
        prs->time->sec_anim = prs->time->time.microseconds / 60000;
        if (prs->time->sec_anim > 1) {
            anim_up(prs);
            sfClock_restart(prs->time->up_anim);
        }
    } else {
        movement_rigth(prs, glob, mst);
    }
}

void movement_down(character_t *prs, global *glob, monster_t **mst)
{
    if (sfKeyboard_isKeyPressed(sfKeyS)) {
        prs->time->time = sfClock_getElapsedTime(prs->time->down);
        prs->time->sec = prs->time->time.microseconds / 22000;
        if (prs->time->sec > 0.7 && verif_col(prs, mst, glob) == sfFalse) {
            move_all_down(prs);
            sfClock_restart(prs->time->down);
        }
        prs->time->time = sfClock_getElapsedTime(prs->time->down_anim);
        prs->time->sec_anim = prs->time->time.microseconds / 60000;
        if (prs->time->sec_anim > 1) {
            anim_down(prs);
            sfClock_restart(prs->time->down_anim);
        }
    } else {
        movement_up(prs, glob, mst);
    }
}

void move_player(character_t *prs, global *glob, monster_t **mst)
{
    movement_down(prs, glob, mst);
}
