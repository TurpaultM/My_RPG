/*
** EPITECH PROJECT, 2022
** initialisations
** File description:
** ini the shop of the pnj
*/

#include "my_rpg.h"
#include "character.h"

void ini_shop_pnj_txt(character_t *prs)
{
    for (int i = 0; i < 4; i++) {
        prs->shop_npc.shop_but[i]->shop_txt = sfText_create();
        sfText_setFont(prs->shop_npc.shop_but[i]->shop_txt,
        prs->quete.font_quete);
        sfText_setColor(prs->shop_npc.shop_but[i]->shop_txt, sfBlack);
        sfText_setCharacterSize(prs->shop_npc.shop_but[i]->shop_txt, 30);
    }
    set_text_pos_shop(prs, "Red key", (sfVector2f){900, 610}, 0);
    set_text_pos_shop(prs, "Blue key", (sfVector2f){600, 610}, 1);
    set_text_pos_shop(prs, "Green key", (sfVector2f){1200, 610}, 2);
    set_text_pos_shop(prs, "Hello stranger, I have some keys for "
    "you,\nbut be careful each one can give access to a mysterious lair.\n"
    "Each key costs 1000 ecus except the red one which cos"
    "ts 5000.\nhowever it is useless.", (sfVector2f){295, 155}, 3);
    prs->shop_npc.key_blue = 0;
    prs->shop_npc.key_green = 0;
    prs->shop_npc.key_red = 0;
}

void ini_shop_pnj_sprite2(character_t *prs)
{
    sfSprite_setTexture(prs->shop_npc.key3_npc_spr,
    prs->shop_npc.key3_npc_tex, sfFalse);
    sfSprite_setPosition(prs->shop_npc.key3_npc_spr, (sfVector2f){1228, 525});
    prs->shop_npc.npc_shop_spr = sfSprite_create();
    prs->shop_npc.npc_shop_tex = sfTexture_createFromFile("assets/p"
    "nj/pnj_shop.png", NULL);
    sfSprite_setTexture(prs->shop_npc.npc_shop_spr,
    prs->shop_npc.npc_shop_tex, sfFalse);
    sfSprite_setPosition(prs->shop_npc.npc_shop_spr, (sfVector2f){200, 400});
    prs->shop_npc.bull_shop_spr = sfSprite_create();
    prs->shop_npc.bull_shop_tex = sfTexture_createFromFile("assets/p"
    "nj/bull.png", NULL);
    sfSprite_setTexture(prs->shop_npc.bull_shop_spr,
    prs->shop_npc.bull_shop_tex, sfFalse);
    sfSprite_setPosition(prs->shop_npc.bull_shop_spr, (sfVector2f){205, 100});
    ini_shop_pnj_txt(prs);
}

void ini_shop_pnj_sprite(character_t *prs)
{
    prs->shop_npc.key1_npc_spr = sfSprite_create();
    prs->shop_npc.key1_npc_tex = sfTexture_createFromFile("assets/i"
    "mages/clé_blue.png", NULL);
    sfSprite_setTexture(prs->shop_npc.key1_npc_spr,
    prs->shop_npc.key1_npc_tex, sfFalse);
    sfSprite_setPosition(prs->shop_npc.key1_npc_spr, (sfVector2f){628, 525});
    prs->shop_npc.key2_npc_spr = sfSprite_create();
    prs->shop_npc.key2_npc_tex = sfTexture_createFromFile("assets/i"
    "mages/clé_red.png", NULL);
    sfSprite_setTexture(prs->shop_npc.key2_npc_spr,
    prs->shop_npc.key2_npc_tex, sfFalse);
    sfSprite_setPosition(prs->shop_npc.key2_npc_spr, (sfVector2f){925, 525});
    prs->shop_npc.key3_npc_spr = sfSprite_create();
    prs->shop_npc.key3_npc_tex = sfTexture_createFromFile("assets/i"
    "mages/clé_green.png", NULL);
    ini_shop_pnj_sprite2(prs);
}

void ini_shop_pnj2(character_t *p)
{
    sfRectangleShape_setFillColor(p->shop_npc.shop_but[0]->button, sfWhite);
    sfRectangleShape_setSize(p->shop_npc.shop_but[0]->button,
    (sfVector2f){1800, 800});
    set_rec_pos_shop(p, (sfVector2f){50, 100}, 0);
    set_rec_pos_shop(p, (sfVector2f){600, 500}, 1);
    set_rec_pos_shop(p, (sfVector2f){900, 500}, 2);
    set_rec_pos_shop(p, (sfVector2f){1200, 500}, 3);
}

void ini_shop_pnj(character_t *p)
{
    sfColor sfGray = sfColor_fromRGB(150, 150, 150);

    p->shop_npc.shop_but = malloc(sizeof(shop_npc_t *) * 4);
    for (int i = 0; i < 4; i++) {
        p->shop_npc.shop_but[i] = malloc(sizeof(shop_npc_t));
        p->shop_npc.shop_but[i]->button = sfRectangleShape_create();
        sfRectangleShape_setFillColor(p->shop_npc.shop_but[i]->button,
        sfGray);
        sfRectangleShape_setSize(p->shop_npc.shop_but[i]->button,
        (sfVector2f){100, 100});
        sfRectangleShape_setOutlineThickness(p->shop_npc.shop_but[i]->button,
        1);
        sfRectangleShape_setOutlineColor(p->shop_npc.shop_but[i]->button,
        sfBlack);
    }
    ini_shop_pnj2(p);
    ini_shop_pnj_sprite(p);
}
