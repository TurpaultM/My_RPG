/*
** EPITECH PROJECT, 2022
** fight
** File description:
** fight
*/

#include "fight.h"
#include "my_rpg.h"
#include "character.h"

void move_character(character_t *character)
{
    sfVector2f pos = sfSprite_getPosition(character->sprite_perso);
    static int front = -4;

    if (pos.x == 0.65 * 1920) {
        front = -4;
    }
    if (pos.x < 0.55 * 1920) {
        front = 4;
    }
    if (pos.x == 0.65 * 1920 - 4 && front == 4) {
        front = 0;
    }
    pos.x += front;
    sfSprite_setPosition(character->sprite_perso, pos);
}

void move_monster(monster_t *monster, character_t *character)
{
    sfVector2f pos = sfSprite_getPosition(monster->sprite_monster);
    sfVector2f pos_perso = {0.65 * 1920, 0.40 * 1080};
    static int front = +4;

    if (pos.x == 0.25 * 1920) {
        front = +4;
    }
    if (pos.x > 0.35 * 1920) {
        front = -4;
    }
    if (pos.x == 0.25 * 1920 + 4 && front == -4) {
        front = 0;
    }
    pos.x += front;
    sfSprite_setPosition(character->sprite_perso, pos_perso);
    sfSprite_setPosition(monster->sprite_monster, pos);
}

void init_all_pos(global *global, character_t *character, monster_t *monster)
{
    sfVector2f pos_perso = {0.65 * 1920, 0.40 * 1080};
    sfVector2f pos_monstr = {0.25 * 1920, 0.3 * 1080};

    character->rect.left = 256;
    character->rect.top = 160;
    sfSprite_setTextureRect(character->sprite_perso, character->rect);
    sfSprite_setPosition(character->sprite_perso, pos_perso);
    sfSprite_setPosition(monster->sprite_monster, pos_monstr);
}
