/*
** EPITECH PROJECT, 2022
** init_struct_fight.c
** File description:
** init_struct
*/

#include "my_rpg.h"
#include "character.h"
#include "fight.h"

char *my_strcpy(char *dest, char const *src)
{
    int i = 0;

    for (; src[i]; i++) {
        dest[i] = src[i];
    }
    dest[i] = '\0';
    return (dest);
}

void set_position(attack_t *attack)
{
    sfVector2f pos_attack1 = {0.11 * 1920, 0.72 * 1080};
    sfVector2f pos_attack2 = {0.31 * 1920, 0.72 * 1080};
    sfVector2f pos_attack3 = {0.11 * 1920, 0.87 * 1080};
    sfVector2f pos_attack4 = {0.31 * 1920, 0.87 * 1080};
    sfTexture *texture;

    attack->sprite_comp[0] = sfSprite_create();
    texture = sfTexture_createFromFile("assets/images/basic_sword.png", NULL);
    sfSprite_setTexture(attack->sprite_comp[0], texture, sfFalse);
    sfSprite_setPosition(attack->sprite_comp[0], pos_attack1);
    if (attack->competence_use[1] != -1) {
        sfSprite_setPosition(attack->sprite_comp[1], pos_attack2);
    }
    if (attack->competence_use[2] != -1) {
        sfSprite_setPosition(attack->sprite_comp[2], pos_attack3);
    }
    if (attack->competence_use[3] != -1) {
        sfSprite_setPosition(attack->sprite_comp[3], pos_attack4);
    }
}

int init_competence_name(attack_t *attack, character_t *character)
{
    int i = 0;
    int nbr = 1;

    my_strcpy(attack->competence_name[0], "Nothing");
    attack->mana_cost_use[0] = 0;
    for (; character->all_comp[i] != '\0'; i++) {
        if (character->all_comp[i] == '1') {
            my_strcpy(attack->competence_name[nbr], character->cpt[i]->name);
            attack->sprite_comp[nbr] =
            sfSprite_copy(character->cpt[i]->sprite_cpt);
            attack->mana_cost_use[nbr] = character->cpt[i]->mana_cost;
            nbr++;
        }
    }
    for (; nbr != 4; nbr++) {
        attack->competence_use[nbr] = -1;
    }
    set_position(attack);
}

int init_struct_attack(attack_t *attack, character_t *character)
{
    attack->round = malloc(sizeof(int) * 2);
    attack->sprite_comp = malloc(sizeof(sfSprite *) * 4);
    attack->competence_use = malloc(sizeof(int) * 4);
    attack->competence_name = malloc(sizeof(char *) * 4);
    attack->mana_cost_use = malloc(sizeof(int) * 4);
    attack->effect = malloc(sizeof(int) * 4);
    attack->attack_use = malloc(sizeof(char) * 14);
    for (int i = 0; i != 4; i++) {
        attack->competence_use[i] = 0;
        attack->effect[i] = 0;
        attack->competence_name[i] = malloc(sizeof(char) * 14);
    }
    attack->round[0] = 0;
    attack->mana_rest = character->mana;
    attack->round[1] = 0;
    attack->attack = 1;
    attack->defense = 1;
    init_competence_name(attack, character);
}
