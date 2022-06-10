/*
** EPITECH PROJECT, 2022
** init
** File description:
** init
*/

#include "character.h"
#include "my_rpg.h"

void init_stat_man(character_t *prs)
{
    prs->xp = 0;
    prs->hp = 23;
    prs->level = 1;
    prs->competences = 4;
    prs->damages = 5;
    prs->defenses = 2;
    prs->intelligence = 1;
    prs->speed = 8;
    prs->money = 7;
    prs->mana = 8;
    prs->movement_speed = 0;
}

void init_man(character_t *prs, int which_player)
{
    prs->sprite_perso = sfSprite_create();
    if (which_player == 5) {
        prs->texture_perso =
        sfTexture_createFromFile("assets/charact/perso_blanc/white.png", NULL);
    } else {
        prs->texture_perso =
        sfTexture_createFromFile("assets/charact/perso_orange/orange.png",
        NULL);
    }
    sfSprite_setTexture(prs->sprite_perso, prs->texture_perso, sfFalse);
    sfSprite_setScale(prs->sprite_perso, (sfVector2f){2.8, 2.8});
    prs->rect = (sfIntRect){192, 128, 32, 32};
    prs->pos_character = (sfVector2f){960, 520};
    init_stat_man(prs);
}
