/*
** EPITECH PROJECT, 2022
** grouped functions
** File description:
** destroy game 2
*/

#include "my_rpg.h"
#include "character.h"

void destroy_stat2(character_t *prs, global *glob)
{
    sfSprite_destroy(prs->stat.money_spr);
    sfTexture_destroy(prs->stat.money_tex);
    sfSprite_destroy(prs->stat.shield_spr);
    sfTexture_destroy(prs->stat.shield_tex);
    sfSprite_destroy(prs->stat.speed_spr);
    sfTexture_destroy(prs->stat.speed_tex);
    sfSprite_destroy(prs->stat.sword_spr);
    sfTexture_destroy(prs->stat.sword_tex);
    sfSprite_destroy(prs->stat.xp_spr);
    sfTexture_destroy(prs->stat.xp_tex);
    sfSprite_destroy(prs->stat.p1_spr);
    sfSprite_destroy(prs->stat.p2_spr);
    sfSprite_destroy(prs->stat.p3_spr);
    sfSprite_destroy(prs->stat.p4_spr);
    sfSprite_destroy(prs->stat.p5_spr);
    sfSprite_destroy(prs->stat.p6_spr);
    sfTexture_destroy(prs->stat.plus_tex);
}

void destroy_stat(character_t *prs, global *glob)
{
    sfSprite_destroy(prs->stat.intel_spr);
    sfTexture_destroy(prs->stat.intel_tex);
    sfSprite_destroy(prs->stat.life_spr);
    sfTexture_destroy(prs->stat.life_tex);
    sfSprite_destroy(prs->stat.mana_spr);
    sfTexture_destroy(prs->stat.mana_tex);
    destroy_stat2(prs, glob);
    for (int i = 0; i < 6; i++) {
        sfRectangleShape_destroy(prs->stat.text_stat[i]->button);
    }
    for (int i = 0; i < 12; i++) {
        sfText_destroy(prs->stat.text_stat[i]->text_stat);
        free(prs->stat.text_stat[i]);
    }
    free(prs->stat.text_stat);
    destroy_comp(prs, glob);
    free(prs);
}
