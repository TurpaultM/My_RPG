/*
** EPITECH PROJECT, 2022
** attack
** File description:
** attack
*/

#include "my_rpg.h"
#include "character.h"
#include "fight.h"

void init_particle(global *glob)
{
    glob->width = 200;
    glob->heigh = 200;
    glob->pixel = set_pixel(glob->width, glob->heigh);
    glob->texture_part = sfTexture_create(glob->width, glob->heigh);
    sfTexture_updateFromPixels(glob->texture_part, glob->pixel->pixels,
    glob->pixel->width, glob->pixel->height, 0, 0);
    glob->sprite_part = sfSprite_create();
    sfSprite_setTexture(glob->sprite_part, glob->texture_part, sfTrue);
    sfTexture_updateFromPixels(glob->texture_part, glob->pixel->pixels,
    glob->pixel->width, glob->pixel->height, 0, 0);
    sfSprite_setPosition(glob->sprite_part, (sfVector2f){200, 200});
    glob->nb_part = 10;
    glob->color = sfTransparent;
}

void init_attack(attack_t *attack)
{
    int i = 0;

    for (; attack->competence_use[i] != 1; i++);
    attack->mana = attack->mana_cost_use[i];
    my_strcpy(attack->attack_use, attack->competence_name[i]);
    if (my_strcmp(attack->attack_use, "Heal") == 0 ||
    my_strcmp(attack->attack_use, "Armor up") == 0 ||
    my_strcmp(attack->attack_use, "Regen shield") == 0) {
        attack->attack = 0;
    } else {
        attack->attack = 1;
    }
    attack->defense = 1;
}

void set_stat_comp_atk(character_t *character, attack_t *attack)
{
    if (my_strcmp(attack->attack_use, "Double attack") == 0) {
        attack->attack = 2;
        character->mana -= attack->mana;
    }
    if (my_strcmp(attack->attack_use, "Bleeding") == 0) {
        attack->effect[0] = 3;
        character->mana -= attack->mana;
    }
    if (my_strcmp(attack->attack_use, "Fire sword") == 0) {
        attack->effect[1] = 3;
        character->mana -= attack->mana;
    }
}

void set_stat_comp_def_mana(character_t *character, attack_t *attack)
{
    if (my_strcmp(attack->attack_use, "Poison") == 0) {
        attack->effect[3] = 3;
        character->mana -= attack->mana;
    }
    if (my_strcmp(attack->attack_use, "Hydro cannon") == 0) {
        attack->attack = 2;
        character->mana -= attack->mana;
    }
    if (my_strcmp(attack->attack_use, "Titan armor") == 0) {
        attack->defense = 2;
        attack->attack = 2;
        character->mana -= attack->mana;
    }
}

void set_stat_comp(character_t *character, attack_t *attack)
{
    set_stat_comp_atk(character, attack);
    set_stat_comp_def_mana(character, attack);
}
