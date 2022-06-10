/*
** EPITECH PROJECT, 2022
** init
** File description:
** init
*/

#include "character.h"
#include "my_rpg.h"

void init_stat_woman(character_t *prs)
{
    prs->xp = 5;
    prs->hp = 14;
    prs->level = 1;
    prs->competences = 6;
    prs->damages = 2;
    prs->defenses = 1;
    prs->intelligence = 4;
    prs->speed = 14;
    prs->money = 16;
    prs->mana = 30;
    prs->movement_speed = 2;
}

void init_woman(character_t *prs, int which_player)
{
    prs->sprite_perso = sfSprite_create();
    if (which_player == 4) {
        prs->texture_perso =
        sfTexture_createFromFile("assets/charact/perso_vert/green.png", NULL);
    } else {
        prs->texture_perso =
        sfTexture_createFromFile("assets/charact/perso_violet/violet.png",
        NULL);
    }
    sfSprite_setTexture(prs->sprite_perso, prs->texture_perso, sfFalse);
    sfSprite_setScale(prs->sprite_perso, (sfVector2f){2.8, 2.8});
    prs->rect = (sfIntRect){192, 128, 32, 32};
    prs->pos_character = (sfVector2f){960, 520};
    init_stat_woman(prs);
}
