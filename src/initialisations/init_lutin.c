/*
** EPITECH PROJECT, 2022
** init
** File description:
** init
*/

#include "character.h"
#include "my_rpg.h"

void init_stat_lutin(character_t *prs)
{
    prs->xp = 0;
    prs->hp = 30;
    prs->level = 1;
    prs->competences = 5;
    prs->damages = 10;
    prs->defenses = 20;
    prs->intelligence = 22;
    prs->speed = 20;
    prs->money = 2000;
    prs->mana = 40;
    prs->movement_speed = 8;
}

void init_lutin(character_t *prs, int which_player)
{
    prs->sprite_perso = sfSprite_create();
    if (which_player == 1) {
        prs->texture_perso =
        sfTexture_createFromFile("assets/charact/pablo_bleu/blue.png", NULL);
    } else {
        prs->texture_perso =
        sfTexture_createFromFile("assets/charact/pablo_rouge/red.png", NULL);
    }
    sfSprite_setTexture(prs->sprite_perso, prs->texture_perso, sfFalse);
    sfSprite_setScale(prs->sprite_perso, (sfVector2f){2.8, 2.8});
    prs->rect = (sfIntRect){192, 128, 32, 32};
    prs->pos_character = (sfVector2f){960, 520};
    init_stat_lutin(prs);
}
