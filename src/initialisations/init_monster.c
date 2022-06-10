/*
** EPITECH PROJECT, 2022
** monster
** File description:
** 5 mob and 2 BOSS
*/

#include "my_rpg.h"
#include "character.h"

int len_str(char *str)
{
    int len = 0;

    for (int i = 0; str[i] != '\0'; i++) {
        len++;
    }
    return (len);
}

char *alloc_insert(char *mstr)
{
    int nb = len_str(mstr);
    char *name = malloc(sizeof(char) * (nb + 1));

    name[nb] = '\0';
    for (int i = 0; i < nb; i++) {
        name[i] = mstr[i];
    }
    return name;
}

char *init_name(int i)
{
    switch (i) {
        case 0:
            return alloc_insert("Slime rouge");
        case 1:
            return alloc_insert("Slime bleu");
        case 2:
            return alloc_insert("Fantôme");
        case 3:
            return alloc_insert("Zombie");
        case 4:
            return alloc_insert("Rat");
        case 5:
            return alloc_insert("Sylka");
        case 6:
            return alloc_insert("Wa'ter");
        default:
            return alloc_insert("VOID");
    }
}

char *chose_texture(int i)
{
    switch (i) {
        case 0:
            return ("assets/charact/red_slime.png");
        case 1:
            return ("assets/charact/blue_slime.png");
        case 2:
            return ("assets/charact/ghost.png");
        case 3:
            return ("assets/charact/zombie.png");
        case 4:
            return ("assets/charact/rat.png");
        case 5:
            return ("assets/images/dragon.png");
        case 6:
            return ("assets/images/marin.png");
        default:
            return ("void");
    }
}

void init_monster(monster_t **monster)
{
    char *nm;

    for (int i = 0; i < 7; i++) {
        monster[i] = malloc(sizeof(monster_t));
        monster[i]->monster_id = 0;
        monster[i]->name = init_name(i);
        monster[i]->texture_monster =
        sfTexture_createFromFile(chose_texture(i), NULL);
        monster[i]->sprite_monster = sfSprite_create();
        sfSprite_setTexture(monster[i]->sprite_monster,
        monster[i]->texture_monster, sfFalse);
        set_stat(monster, i);
        sfSprite_setTexture(monster[i]->sprite_monster,
        monster[i]->texture_monster, sfFalse);
        sfSprite_setTextureRect(monster[i]->sprite_monster, get_rect(i));
        sfSprite_scale(monster[i]->sprite_monster, (sfVector2f){3.2, 3.2});
    }
}
