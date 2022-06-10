/*
** EPITECH PROJECT, 2022
** attack
** File description:
** attack
*/

#include "my_rpg.h"
#include "character.h"
#include "fight.h"
#include "particles.h"

void attack_mob(attack_t *attack,
character_t *character, monster_t *monster, global *global)
{
    init_attack(attack);
    move_character(character);
    if (attack->round[1] == 0 && attack->attack != 0) {
        set_stat_comp(character, attack);
        attack_hero_to_mob(monster, character, attack);
        attack->round[1]++;
    }
    if (attack->round[1] == 0 && attack->attack == 0) {
        not_attack(character, attack, global);
        attack->round[1]++;
    }
    draw_fight_monster(global->window, character, monster, attack);
}

void put_effect(character_t *character,
monster_t *monster, attack_t *attack, global *glob)
{
    if (attack->effect[0] > 0) {
        monster->hp -= 3;
    }
    if (attack->effect[1] > 0) {
        monster->hp -= 3;
    }
    if (attack->effect[2] > 0) {
        character->hp += 3;
    }
    if (attack->effect[3] > 0) {
        monster->hp -= 3;
    }
    for (int i = 0; i != 4; i++) {
        attack->effect[i] -= 1;
    }
}

int not_attack(character_t *character, attack_t *attack, global *glob)
{
    if (my_strcmp(attack->attack_use, "Heal") == 0) {
        character->hp += 40;
        character->mana -= attack->mana;
    }
    if (my_strcmp(attack->attack_use, "Armor up") == 0) {
        attack->defense = 2;
        character->mana -= attack->mana;
    }
    if (my_strcmp(attack->attack_use, "Regen shield") == 0) {
        sfSprite_setPosition(glob->sprite_part,
        (sfVector2f){0.65 * 1920 - 32, 0.40 * 1080 - 32});
        effect_part(glob, "heal");
        attack->effect[2] = 3;
        character->mana -= attack->mana;
    }
}

int attack_hero_to_mob(monster_t *monster, character_t *character,
attack_t *attack)
{
    if (monster->defenses - character->damages * attack->attack >= 0) {
        if (rand() % 100 + monster->speed >
            monster->defenses - character->damages * attack->attack) {
            monster->hp -= 1;
            return 1;
        } else {
            return 0;
        }
    } else {
        if (rand() % 100 == 1) {
            return 0;
        } else {
            monster->hp += monster->defenses -
            character->damages * attack->attack;
            return 1;
        }
    }
    return 0;
}

int attack_mob_to_hero(monster_t *monster, character_t *character, int def)
{
    if (character->defenses * def - monster->damages >= 0) {
        if (rand() % 100 + character->speed >
            character->defenses * def - monster->damages) {
            character->hp -= 1;
            return 0;
        } else {
            return 1;
        }
    } else {
        if (rand() % 100 == 1) {
            return 1;
        } else {
            character->hp += character->defenses * def - monster->damages;
            return 0;
        }
    }
}
