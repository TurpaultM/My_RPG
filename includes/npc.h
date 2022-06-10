/*
** EPITECH PROJECT, 2022
** npc
** File description:
** npc
*/

#ifndef NPC_H_
    #define NPC_H_
    #include <stdio.h>
    #include <fcntl.h>
    #include <stddef.h>
    #include <unistd.h>
    #include <stdlib.h>
    #include <string.h>
    #include <time.h>
    #include <SFML/Window.h>
    #include <SFML/Audio.h>
    #include <SFML/System.h>
    #include <SFML/Graphics.h>

typedef struct shop_npc_but_s {
    sfRectangleShape *button;
    sfText *shop_txt;
} shop_npc_but_t;

typedef struct shop_npc_s {
    sfSprite *key1_npc_spr;
    sfTexture *key1_npc_tex;
    sfSprite *key2_npc_spr;
    sfTexture *key2_npc_tex;
    sfSprite *key3_npc_spr;
    sfTexture *key3_npc_tex;
    sfSprite *npc_shop_spr;
    sfTexture *npc_shop_tex;
    sfSprite *bull_shop_spr;
    sfTexture *bull_shop_tex;
    shop_npc_but_t **shop_but;
    int key_blue;
    int key_red;
    int key_green;
} shop_npc_t;

typedef struct npc_s {
    char *name;
    sfSprite *sprite_npc;
    sfTexture *texture_npc;
    sfVector2f pos_npc;
    sfText *dialogue_txt;
    sfFont *dialogue_font;
    sfIntRect npc_rect;
    char *text;
} npc_t;

#endif /* !NPC_H_ */
