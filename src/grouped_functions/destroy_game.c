/*
** EPITECH PROJECT, 2022
** grouped function
** File description:
** destroy the game
*/

#include "my_rpg.h"
#include "character.h"

void destroy_shop(character_t *prs, global *glob)
{
    for (int i = 0; i < 4; i++) {
        sfText_destroy(prs->shop_npc.shop_but[i]->shop_txt);
        sfRectangleShape_destroy(prs->shop_npc.shop_but[i]->button);
        free(prs->shop_npc.shop_but[i]);
    }
    sfSprite_destroy(prs->shop_npc.key1_npc_spr);
    sfTexture_destroy(prs->shop_npc.key1_npc_tex);
    sfSprite_destroy(prs->shop_npc.key2_npc_spr);
    sfTexture_destroy(prs->shop_npc.key2_npc_tex);
    sfSprite_destroy(prs->shop_npc.key3_npc_spr);
    sfTexture_destroy(prs->shop_npc.key3_npc_tex);
    sfSprite_destroy(prs->shop_npc.npc_shop_spr);
    sfTexture_destroy(prs->shop_npc.npc_shop_tex);
    sfSprite_destroy(prs->shop_npc.bull_shop_spr);
    sfTexture_destroy(prs->shop_npc.bull_shop_tex);
    free(prs->shop_npc.shop_but);
}

void destroy_quete(character_t *prs, global *glob)
{
    sfFont_destroy(prs->quete.font_quete);
    for (int i = 0; i < 2; i++) {
        sfRectangleShape_destroy(prs->quete.quete_txt[i]->button);
        sfText_destroy(prs->quete.quete_txt[i]->text_quete);
        free(prs->quete.quete_txt[i]);
    }
    sfSprite_destroy(prs->quete.back_quest_spr);
    free(prs->quete.quete_txt);
}

void destroy_howto(character_t *prs, global *glob)
{
    sfSprite_destroy(glob->menu.howto1_spr);
    sfSprite_destroy(glob->menu.howto2_spr);
    sfSprite_destroy(glob->menu.howto3_spr);
    sfSprite_destroy(glob->menu.howto4_spr);
    sfSprite_destroy(glob->menu.howto5_spr);
    sfTexture_destroy(glob->menu.howto1_tex);
    sfTexture_destroy(glob->menu.howto2_tex);
    sfTexture_destroy(glob->menu.howto3_tex);
    sfTexture_destroy(glob->menu.howto4_tex);
    sfTexture_destroy(glob->menu.howto5_tex);
    destroy_quete(prs, glob);
}

void destroy_comp(character_t *prs, global *glob)
{
    for (int i = 0; i < 9; i++) {
        sfText_destroy(prs->cpt[i]->text_comp);
        sfRectangleShape_destroy(prs->cpt[i]->button);
        sfSprite_destroy(prs->cpt[i]->sprite_cpt);
        free(prs->cpt[i]);
    }
    free(prs->cpt);
    sfSprite_destroy(prs->back->back_spr);
    sfTexture_destroy(prs->quete.back_quest_tex);
    destroy_shop(prs, glob);
    destroy_howto(prs, glob);
}

void destroy_game(character_t *prs, global *glob)
{
    for (int i = 0; i < 49; i++) {
        sfRectangleShape_destroy(prs->colision[i]->button);
        free(prs->colision[i]);
    }
    free(prs->colision);
    sfMusic_stop(glob->music.music_back);
    destroy_stat(prs, glob);
}
