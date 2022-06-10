/*
** EPITECH PROJECT, 2022
** B-MUL-200-NAN-2-1-myrpg-matteo.turpault
** File description:
** draw_game_2
*/

#include "character.h"
#include "my_rpg.h"
#include "particles.h"

void draw_menu_escape_cont(global *glob, character_t *prs)
{
    sfRenderWindow_drawRectangleShape(glob->window,
    glob->menu.button_menu[19]->button,NULL);
    sfRenderWindow_drawText(glob->window,
    glob->menu.button_menu[12]->text_button, NULL);
    sfRenderWindow_drawText(glob->window, glob->music.music_text, NULL);
    sfRenderWindow_drawText(glob->window, glob->music.sound_text, NULL);
    sfRenderWindow_drawText(glob->window, glob->fram_text, NULL);
}

void draw_quete_stat_2(global *glob, character_t *prs)
{
    sfRenderWindow_drawSprite(glob->window, prs->stat.life_spr, NULL);
    sfRenderWindow_drawSprite(glob->window, prs->stat.shield_spr, NULL);
    sfRenderWindow_drawSprite(glob->window, prs->stat.mana_spr, NULL);
    sfRenderWindow_drawSprite(glob->window, prs->stat.sword_spr, NULL);
    sfRenderWindow_drawSprite(glob->window, prs->stat.money_spr, NULL);
    sfRenderWindow_drawSprite(glob->window, prs->stat.speed_spr, NULL);
    sfRenderWindow_drawSprite(glob->window, prs->stat.intel_spr, NULL);
    sfRenderWindow_drawSprite(glob->window, prs->stat.xp_spr, NULL);
    sfRenderWindow_drawSprite(glob->window, prs->stat.p1_spr, NULL);
    sfRenderWindow_drawSprite(glob->window, prs->stat.p2_spr, NULL);
    sfRenderWindow_drawSprite(glob->window, prs->stat.p3_spr, NULL);
    sfRenderWindow_drawSprite(glob->window, prs->stat.p4_spr, NULL);
    sfRenderWindow_drawSprite(glob->window, prs->stat.p5_spr, NULL);
    sfRenderWindow_drawSprite(glob->window, prs->stat.p6_spr, NULL);
    print_quete_in_stat(glob, prs);
}

void draw_inventory(global *glob, character_t *prs)
{
    if (prs->shop_npc.key_red == 1) {
        sfSprite_setPosition(prs->shop_npc.key2_npc_spr,
        (sfVector2f){1430, 590});
        sfRenderWindow_drawSprite(glob->window,
        prs->shop_npc.key2_npc_spr, NULL);
    }
    if (prs->shop_npc.key_green == 1) {
        sfSprite_setPosition(prs->shop_npc.key3_npc_spr,
        (sfVector2f){1330, 780});
        sfRenderWindow_drawSprite(glob->window,
        prs->shop_npc.key3_npc_spr, NULL);
    }
}

void draw_quete_stat(global *glob, character_t *prs)
{
    sfRenderWindow_drawSprite(glob->window,
    prs->quete.back_quest_spr, NULL);
    for (int i = 0; i < 12; i++) {
        sfRenderWindow_drawText(glob->window,
        prs->stat.text_stat[i]->text_stat, NULL);
    }
    for (int i = 0; i < 6; i++) {
        sfRenderWindow_drawRectangleShape(glob->window,
        prs->stat.text_stat[i]->button, NULL);
    }
    if (prs->shop_npc.key_blue == 1) {
        sfSprite_setPosition(prs->shop_npc.key1_npc_spr,
        (sfVector2f){1030, 680});
        sfRenderWindow_drawSprite(glob->window,
        prs->shop_npc.key1_npc_spr, NULL);
    }
    draw_inventory(glob, prs);
    draw_quete_stat_2(glob, prs);
}
