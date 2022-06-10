/*
** EPITECH PROJECT, 2022
** initialisation
** File description:
** ini_vectors_menu.c
*/

#include "my_rpg.h"

void ini_button_pos_2(global *global)
{
    set_rec_pos(global, (sfVector2f){840, 200}, 15);
    set_rec_pos(global, (sfVector2f){840, 570}, 16);
    set_rec_pos(global, (sfVector2f){1400, 570}, 17);
    set_rec_pos(global, (sfVector2f){1400, 200}, 18);
    set_rec_pos(global, (sfVector2f){760, 450}, 19);
    set_rec_pos(global, (sfVector2f){1400, 850}, 20);
    set_rec_pos(global, (sfVector2f){1500, 920}, 21);
}

void ini_button_pos(global *global)
{
    set_rec_pos(global, (sfVector2f){760, 440}, 0);
    set_rec_pos(global, (sfVector2f){760, 240}, 1);
    set_rec_pos(global, (sfVector2f){760, 480}, 2);
    set_rec_pos(global, (sfVector2f){50, 60}, 3);
    set_rec_pos(global, (sfVector2f){1500, 60}, 4);
    set_rec_pos(global, (sfVector2f){760, 800}, 5);
    set_rec_pos(global, (sfVector2f){1500, 900}, 6);
    set_rec_pos(global, (sfVector2f){760, 640}, 7);
    set_rec_pos(global, (sfVector2f){760, 60}, 8);
    set_rec_pos(global, (sfVector2f){810, 180}, 9);
    set_rec_pos(global, (sfVector2f){940, 180}, 10);
    set_rec_pos(global, (sfVector2f){1070, 180}, 11);
    set_rec_pos(global, (sfVector2f){230, 200}, 13);
    set_rec_pos(global, (sfVector2f){230, 570}, 14);
    ini_button_pos_2(global);
}
