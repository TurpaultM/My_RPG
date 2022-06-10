/*
** EPITECH PROJECT, 2022
** initialisations
** File description:
** ini the quetes
*/

#include "character.h"

void free_quete(character_t *prs)
{
    sfFont_destroy(prs->quete.font_quete);
    for (int i = 2; i < 2; i++) {
        sfText_destroy(prs->quete.quete_txt[i]->text_quete);
    }
    free(prs->quete.quete_txt);
}

void ini_rect(character_t *prs)
{
    sfRectangleShape_setFillColor(prs->quete.quete_txt[0]->button, sfWhite);
    sfRectangleShape_setSize(prs->quete.quete_txt[0]->button,
    (sfVector2f){350, 70});
    sfRectangleShape_setPosition(prs->quete.quete_txt[0]->button,
    (sfVector2f){1550, 5});
    prs->quete.back_quest_spr = sfSprite_create();
    prs->quete.back_quest_tex = sfTexture_createFromFile("assets/images/p"
    "archment.png", NULL);
    sfSprite_setTexture(prs->quete.back_quest_spr,
    prs->quete.back_quest_tex, sfFalse);
    sfSprite_setPosition(prs->quete.back_quest_spr,
    (sfVector2f){100, 25});
    ini_shop_pnj(prs);
    ini_stats(prs);
}

void ini_quete(character_t *prs)
{
    prs->quete.font_quete = sfFont_createFromFile("assets/font/font.otf");

    prs->quete.quete_txt = malloc(sizeof(quete_t *) * 2);
    for (int i = 0; i < 2; i++) {
        prs->quete.quete_txt[i] = malloc(sizeof(quete_t));
        prs->quete.quete_txt[i]->button = sfRectangleShape_create();
        prs->quete.quete_txt[i]->text_quete = sfText_create();
        sfRectangleShape_setOutlineThickness(prs->quete.quete_txt[i]->button,
        0);
        sfRectangleShape_setOutlineColor(prs->quete.quete_txt[i]->button,
        sfBlack);
        sfText_setFont(prs->quete.quete_txt[i]->text_quete,
        prs->quete.font_quete);
        sfText_setColor(prs->quete.quete_txt[i]->text_quete, sfBlack);
        sfText_setCharacterSize(prs->quete.quete_txt[i]->text_quete, 25);
    }
    ini_rect(prs);
    display_quete(prs);
}
