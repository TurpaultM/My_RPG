/*
** EPITECH PROJECT, 2022
** gameplay
** File description:
** display text for the quetes
*/

#include "character.h"

void set_text_pos_quete(character_t *prs, char *name, sfVector2f pos, int i)
{
    sfText_setPosition(prs->quete.quete_txt[i]->text_quete, pos);
    sfText_setString(prs->quete.quete_txt[i]->text_quete, name);
}

void display_quete(character_t *prs)
{
    set_text_pos_quete(prs, "Kill  the  2  bosses", (sfVector2f){1585, 20}, 0);
}
