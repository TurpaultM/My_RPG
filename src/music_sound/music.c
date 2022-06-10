/*
** EPITECH PROJECT, 2022
** music_sound
** File description:
** music
*/

#include "my_rpg.h"

void music(global *global)
{
    sfMusic_play(global->music.music_back);
    sfMusic_setLoop(global->music.music_back, sfTrue);
    sfMusic_setVolume(global->music.music_back, global->music.music_volume);
}

void sound_start(global *global)
{
    sfSound_setBuffer(global->music.sound, global->music.buff);
    sfSound_setVolume(global->music.sound, global->music.sound_volume);
}
