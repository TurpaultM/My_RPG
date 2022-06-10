/*
** EPITECH PROJECT, 2022
** iniyialisations
** File description:
** ini_menu_2
*/

#include "character.h"

void ini_frame(global *global, sfFont *font)
{
    global->framerates = 90;
    global->fram_text = sfText_create();
    sfText_setFont(global->fram_text, font);
    sfText_setColor(global->fram_text, sfRed);
    sfText_setCharacterSize(global->fram_text, 20);
    sfText_setPosition(global->fram_text, (sfVector2f){938, 130});
    sfText_setString(global->fram_text, int_to_char(global->framerates));
}

void ini_music2(global *global, sfFont *font)
{
    global->music.sound_text = sfText_create();
    sfText_setFont(global->music.sound_text, font);
    sfText_setColor(global->music.sound_text, sfRed);
    sfText_setCharacterSize(global->music.sound_text, 20);
    sfText_setPosition(global->music.sound_text, (sfVector2f){230, 130});
    sfText_setString(global->music.sound_text,
    int_to_char(global->music.sound_volume));
    ini_frame(global, font);
}

void ini_music(global *global, sfFont *font)
{
    global->music.music_back = sfMusic_createFromFile("assets/music/mus.ogg");
    global->music.buff = sfSoundBuffer_createFromFile("assets/music/so"
    "und_button.ogg");
    global->music.sound_volume = 100;
    global->music.music_volume = 0;
    sound_start(global);
    music(global);
    global->music.music_text = sfText_create();
    sfText_setFont(global->music.music_text, font);
    sfText_setColor(global->music.music_text, sfRed);
    sfText_setCharacterSize(global->music.music_text, 20);
    sfText_setPosition(global->music.music_text, (sfVector2f){1675, 130});
    sfText_setString(global->music.music_text,
    int_to_char(global->music.music_volume));
    ini_music2(global, font);
    global->key_b = false;
    global->key_g = false;
}

void set_rec_pos_shop(character_t *prs, sfVector2f pos, int i)
{
    sfRectangleShape_setPosition(prs->shop_npc.shop_but[i]->button, pos);
}

void set_text_pos_shop(character_t *prs, char *name, sfVector2f pos, int i)
{
    sfText_setPosition(prs->shop_npc.shop_but[i]->shop_txt, pos);
    sfText_setString(prs->shop_npc.shop_but[i]->shop_txt, name);
}
