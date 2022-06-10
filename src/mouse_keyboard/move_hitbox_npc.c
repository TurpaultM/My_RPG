/*
** EPITECH PROJECT, 2022
** B-MUL-200-NAN-2-1-myrpg-matteo.turpault
** File description:
** move_hitbox_npc
*/

#include "character.h"

void draw_shop_npc(global *glob, character_t *prs)
{
    sfRenderWindow_drawSprite(
    glob->window, prs->shop_npc.bull_shop_spr, NULL);
    for (int i = 0; i < 4; i++) {
        sfRenderWindow_drawRectangleShape(glob->window,
        prs->shop_npc.shop_but[i]->button, NULL);
        sfRenderWindow_drawText(glob->window,
        prs->shop_npc.shop_but[i]->shop_txt, NULL);
    }
    sfRenderWindow_drawSprite(glob->window,
    prs->shop_npc.bull_shop_spr, NULL);
    sfRenderWindow_drawText(glob->window,
    prs->shop_npc.shop_but[3]->shop_txt, NULL);
    sfSprite_setPosition(prs->shop_npc.key2_npc_spr, (sfVector2f){925, 525});
    sfSprite_setPosition(prs->shop_npc.key1_npc_spr, (sfVector2f){628, 525});
    sfSprite_setPosition(prs->shop_npc.key3_npc_spr, (sfVector2f){1228, 525});
    sfRenderWindow_drawSprite(glob->window, prs->shop_npc.key1_npc_spr, NULL);
    sfRenderWindow_drawSprite(glob->window, prs->shop_npc.key2_npc_spr, NULL);
    sfRenderWindow_drawSprite(glob->window, prs->shop_npc.key3_npc_spr, NULL);
    sfRenderWindow_drawSprite(glob->window, prs->shop_npc.npc_shop_spr, NULL);
}

void print_quete(character_t *prs, global *glob)
{
    if (prs->screen == 0 && prs->quete_avail == 1) {
        sfRenderWindow_drawRectangleShape(glob->window,
        prs->quete.quete_txt[0]->button, NULL);
        for (int i = 0; i < 2; i++) {
            sfRenderWindow_drawText(glob->window,
            prs->quete.quete_txt[i]->text_quete, NULL);
        }
    }
}

void print_text(character_t *prs, int i, global *glob)
{
    sfText_setCharacterSize(prs->npc[0]->dialogue_txt, 15);
    sfRectangleShape_setPosition(prs->bck_txt, (sfVector2f){100, 800});
    sfText_setPosition(prs->npc[i]->dialogue_txt, (sfVector2f){160, 880});
    sfText_setString(prs->npc[i]->dialogue_txt, prs->npc[i]->text);
    sfRenderWindow_drawRectangleShape(glob->window, prs->bck_txt, NULL);
    sfRenderWindow_drawText(glob->window, prs->npc[i]->dialogue_txt, NULL);
    sfText_setPosition(prs->npc[i]->dialogue_txt, (sfVector2f){130, 820});
    sfText_setString(prs->npc[i]->dialogue_txt, prs->npc[i]->name);
    sfRenderWindow_drawText(glob->window, prs->npc[i]->dialogue_txt, NULL);
    if (i == 1 && prs->which_npc == 1) {
        change_color_of_keys(prs, glob);
        choose_key(prs, glob);
        draw_shop_npc(glob, prs);
    }
    i == 0 ? prs->quete_avail = 1 : 0;
}

void npc_hitbox(character_t *prs, global *glob)
{
    if (sfKeyboard_isKeyPressed(sfKeyE)) {
        prs->which_npc = 1;
    }
    for (size_t i = 0; i < 8; i++) {
        if (prs->pos_character.x > (prs->npc[i]->pos_npc.x - 80)
        && prs->pos_character.x + 50 < (prs->npc[i]->pos_npc.x + 130)
        && prs->pos_character.y > (prs->npc[i]->pos_npc.y - 80)
        && prs->pos_character.y + 50 < (prs->npc[i]->pos_npc.y + 130)) {
            print_text(prs, i, glob);
        }
    }
    if (sfKeyboard_isKeyPressed(sfKeyEscape)) {
        prs->which_npc = 0;
    }
}
