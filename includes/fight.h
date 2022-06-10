/*
** EPITECH PROJECT, 2022
** struct
** File description:
** struct
*/

#ifndef struct_h
    #define struct_h
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
    #include "my_rpg.h"
    #include "character.h"

typedef struct rect_s {
    sfRectangleShape *rect;
    sfVector2f size;
    sfVector2f pos;
    float porcent_size_x;
    float porcent_size_y;
    float porcent_pos_x;
    float porcent_pos_y;
    sfColor color;
} rect_t;

typedef struct attack_s {
    sfSprite **sprite_comp;
    int *competence_use;
    int *mana_cost_use;
    int nbr_comp;
    int mana_rest;
    char **competence_name;
    int *round;
    char *attack_use;
    int mana;
    int attack;
    int defense;
    int *effect;
} attack_t;

void monster_apparition(global *global, monster_t **mst);

void analyse_events(global *glob, character_t *prs, monster_t **mst);

void fountain_anim(character_t *prs);

void start_game(global *glob, character_t *prs, monster_t **mst);

sfColor init_color_rect(rect_t *rect, int i);

rect_t init_pos_size_struct(rect_t *rect, int i, float **porcent);

rect_t *init_struct_fight(rect_t *rect);

void is_there_fight(global *global, character_t *character,
monster_t *monster);

void draw_fight_scene(sfRenderWindow *window, sfSprite *sprite, rect_t *rect);

rect_t *set_rect(rect_t *rect, int *stat, character_t *character,
monster_t *monster);

int *event_clicked(global *global, rect_t *rect, attack_t *attack, int *stat);

void set_competence(attack_t *attack);

int reward(monster_t *monster, character_t *character, global *global);

sfSprite *create_background(sfTexture *texture);

void destroy_scene_fight(sfSprite *sprite, rect_t *rect, sfTexture *texture);

void init_all_pos(global *global, character_t *character, monster_t *monster);

void attack_mob(attack_t *attack, character_t *character, monster_t *monster,
global *global);

void put_effect(character_t *character, monster_t *monster, attack_t *attack,
global *global);

int attack_hero_to_mob(monster_t *monster, character_t *, attack_t *attack);

int attack_mob_to_hero(monster_t *monster, character_t *character, int def);

void move_monster(monster_t *monster, character_t *character);

int init_struct_attack(attack_t *attack, character_t *character);

void init_attack(attack_t *attack);

void set_stat_comp(character_t *character, attack_t *attack);

void draw_fight_monster(sfRenderWindow *window, character_t *character,
monster_t *monster, attack_t *attack);

int not_attack(character_t *character, attack_t *attack, global *glob);

void move_character(character_t *character);

char *my_strcpy(char *dest, char const *src);

int my_strcmp(char *s1, char *s2);

#endif /* !struct_h */
