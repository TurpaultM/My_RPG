/*
** EPITECH PROJECT, 2022
** B-MUL-200-NAN-2-1-myrpg-matteo.turpault
** File description:
** init_text_npc
*/

#include "character.h"

void init_text_npc(character_t *prs)
{
    for (size_t i = 0; i < 8; i++) {
        sfText_setFont(prs->npc[i]->dialogue_txt , prs->quete.font_quete);
        sfText_setColor(prs->npc[i]->dialogue_txt, sfBlack);
        sfText_setCharacterSize(prs->npc[i]->dialogue_txt, 15);
    }
    prs->bck_txt = sfRectangleShape_create();
    sfRectangleShape_setFillColor(prs->bck_txt, sfWhite);
    sfRectangleShape_setSize(prs->bck_txt, (sfVector2f){1100, 200});
    sfRectangleShape_setOutlineThickness(prs->bck_txt, 0);
    sfRectangleShape_setOutlineColor(prs->bck_txt, sfWhite);
}
