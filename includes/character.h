/*
** EPITECH PROJECT, 2022
** includes
** File description:
** character includes
*/

#ifndef CHARACTER_H_
    #define CHARACTER_H_
    #include <stdio.h>
    #include <fcntl.h>
    #include <stddef.h>
    #include <stdbool.h>
    #include <unistd.h>
    #include <stdlib.h>
    #include <string.h>
    #include <time.h>
    #include <SFML/Window.h>
    #include <SFML/Audio.h>
    #include <SFML/System.h>
    #include <SFML/Graphics.h>
    #include "my_rpg.h"
    #include "collisions.h"
    #include "npc.h"

typedef struct text_stat_s {
    sfText *text_stat;
    sfRectangleShape *button;
} text_stat_t;

typedef struct stat_s {
    text_stat_t **text_stat;
    sfSprite *life_spr;
    sfTexture *life_tex;
    sfSprite *shield_spr;
    sfTexture *shield_tex;
    sfSprite *mana_spr;
    sfTexture *mana_tex;
    sfSprite *sword_spr;
    sfTexture *sword_tex;
    sfSprite *money_spr;
    sfTexture *money_tex;
    sfSprite *speed_spr;
    sfTexture *speed_tex;
    sfSprite *intel_spr;
    sfTexture *intel_tex;
    sfSprite *xp_spr;
    sfTexture *xp_tex;
    sfTexture *plus_tex;
    sfSprite *p1_spr;
    sfSprite *p2_spr;
    sfSprite *p3_spr;
    sfSprite *p4_spr;
    sfSprite *p5_spr;
    sfSprite *p6_spr;
} stat_t;

typedef struct invent_s {
    sfSprite *sword_spr;
    sfTexture *sword_tex;
} invent_t;

typedef struct text_quete_s {
    sfText *text_quete;
    sfRectangleShape *button;
} text_quete_t;

typedef struct quete_s {
    text_quete_t **quete_txt;
    sfFont *font_quete;
    sfSprite *back_quest_spr;
    sfTexture *back_quest_tex;
} quete_t;

typedef struct move_time_s{
    sfTime time;
    float sec;
    float sec_anim;
    sfClock *up;
    sfClock *down;
    sfClock *right;
    sfClock *left;
    sfClock *left_anim;
    sfClock *right_anim;
    sfClock *up_anim;
    sfClock *down_anim;
} move_time_t;

typedef struct background_s {
    sfSprite *backs;
    sfTexture *backt;
    sfSprite *fronts;
    sfTexture *frontt;
    sfVector2f pos_bg;
    sfSprite *fountains;
    sfTexture *fountaint;
    sfVector2f pos_ftns;
    sfIntRect fount_rect;
    sfTime time;
    float sec;
    sfClock *ftn;
    sfSprite *back_spr;
    sfTexture *back_tex;
} background_t;

typedef struct comptence_s {
    char *name;
    sfSprite *sprite_cpt;
    sfTexture *texture_cpt;
    int damages;
    int luck;
    int spell_speed;
    int mana_cost;
    int damage_each_turn;
    int heal;
    int armor_gain;
    sfVector2f pos;
    sfVector2f pos_txt;
    sfText *text_comp;
    sfRectangleShape *button;
} competence_t;

typedef struct character_s {
    sfSprite *sprite_perso;
    sfTexture *texture_perso;
    int who;
    int xp;
    int hp;
    int level;
    int competences;
    int damages;
    int defenses;
    int intelligence;
    int speed;
    int money;
    int mana;
    int movement_speed;
    char all_comp[9];
    int which_npc;
    int quete_avail;
    sfRectangleShape *bck_txt;
    sfIntRect rect;
    sfVector2f pos_character;
    move_time_t *time;
    background_t *back;
    quete_t quete;
    int screen;
    stat_t stat;
    colision_t **colision;
    competence_t **cpt;
    npc_t **npc;
    invent_t invent;
    shop_npc_t shop_npc;
} character_t;

typedef struct monster_s {
    char *name;
    int monster_id;
    sfSprite *sprite_monster;
    sfTexture *texture_monster;
    int gain_xp;
    int hp;
    int level;
    int damages;
    int defenses;
    int speed;
    int gain_money;
} monster_t;

int detect_menu(global *global);

void detect_perso(global *global);

void move_player(character_t *prs, global *glob, monster_t **mst);

void start_game(global *glob, character_t *prs, monster_t **mst);

void init_man(character_t *prs, int which_player);

void init_lutin(character_t *prs, int which_player);

void init_woman(character_t *prs, int which_player);

void anim_up(character_t *prs);

void anim_down(character_t *prs);

void anim_left(character_t *prs);

void anim_right(character_t *prs);

void ini_quete(character_t *prs);

void display_quete(character_t *prs);

void start_pause(character_t *prs, global *glob);

void init_monster(monster_t **monster);

void set_pablo(monster_t *mst);

void set_zombie(monster_t *mst);

void set_ghost(monster_t *mst);

void set_slime(monster_t *mst, int def, int atk);

void set_stat(monster_t **mst, int i);

void set_text(character_t *prs, char *name, sfVector2f pos, int i);

void ini_stats(character_t *prs);

void ini_upgrade_rect(character_t *prs);

void change_color_of_stats(character_t *prs, global *global);

void choosege_up(character_t *prs, global *global);

void ini_cols(character_t *prs);

sfBool verif_col(character_t *prs, monster_t **mst, global *global);

char *alloc_insert(char *mstr);

void move_all_down(character_t *prs);

void move_all_left(character_t *prs);

void move_all_right(character_t *prs);

void move_all_up(character_t *prs);

void draw_quete_stat(global *glob, character_t *prs);

void draw_all(global *glob, character_t *prs);

void destroy_game(character_t *prs, global *glob);

void ini_compet(character_t *prs);

void change_color_of_comp(character_t *prs, global *global);

void ini_npc_text(character_t *prs);

void ini_compet_txt(character_t *prs);

void change_comp(character_t *prs, global *glob);

void verif_if_comp_taken(character_t *prs, int mu_x, int mu_y);

void ini_shop_pnj(character_t *prs);

void change_color_of_keys(character_t *prs, global *global);

void choose_key(character_t *prs, global *global);

int detect_option_game(global *global, int mu_x, int mu_y, character_t *prs);

void is_there_fight(global *global, character_t *character,
monster_t *monster);

void monster_apparition(global *global, monster_t **mst);

sfVector2f npc_pos(int i);

char *texture(int i);

char *npc_text(int i);

char *npc_name(int i);

sfIntRect get_rect(int i);

void draw_npc(global *glob, character_t *prs);

sfVector2f cpt_pos_txt(int i);

void ini_all_comp(character_t *prs);

void change_color_5(character_t *prs, int mu_x, int mu_y);

sfVector2f cpt_pos(int i);

char *cpt_name(int i);

char *txr_cpt(int i);

void ini_all_comp(character_t *prs);

void init_cpt(character_t *prs);

void set_double_attack(character_t *prs);

void set_bleeding(character_t *prs);

void set_fire_sword(character_t *prs);

void set_heal(character_t *prs);

void set_poison(character_t *prs);

void set_hydro(character_t *prs);

void set_armor_up(character_t *prs);

void set_regen_shield(character_t *prs);

void set_titan_shield(character_t *prs);

void init_text_npc(character_t *prs);

void change_color(character_t *prs, global *global);

void npc_hitbox(character_t *prs, global *glob);

void print_quete(character_t *prs, global *glob);

bool check_perm_double_atk(character_t *prs);

bool check_perm_bleeding(character_t *prs);

bool check_perm_fire(character_t *prs);

bool check_perm_heal(character_t *prs);

bool check_perm_poison(character_t *prs);

bool check_perm_hydro(character_t *prs);

bool check_perm_armor_up(character_t *prs);

bool check_perm_regen_shield(character_t *prs);

bool check_perm_titan_armor(character_t *prs);

void change_color_of_button4(global *g, int mx, int my);

int detect_option(global *global, int mu_x, int mu_y);

int detect_option_cont(global *global, int mu_x, int mu_y);

void detect_option_4(global *global, int mu_x, int mu_y);

void set_rec_pos_shop(character_t *prs, sfVector2f pos, int i);

void set_text_pos_shop(character_t *prs, char *name, sfVector2f pos, int i);

bool set_comp(character_t *prs, int i);

int nb_comp(character_t *prs);

void print_quete_in_stat(global *glob, character_t *prs);

void detect_perso_3(global *global, int mu_x, int mu_y);

void detect_option_3(global *global, int mu_x, int mu_y);

void change_color_of_button_character3(global *g, int mx, int my, sfColor);

void verif_color_frame_cont(global *global);

void ini_music2(global *global, sfFont *font);

int detect_option_cont_2(global *global, int mu_x, int mu_y);

void change_color_of_button4(global *g, int mx, int my);

void place_rect_col(sfVector2f size, sfVector2f pos, int i, character_t *prs);

void ini_vect_rect_3_cont(character_t *prs);

void verif_boss(character_t *prs, monster_t **mst, global *global);

void choosege_up_2_cont(character_t *prs, sfColor sfGray, int mu_x, int mu_y);

void change_color_of_stats_3(character_t *prs, sfColor sfGray,
int mu_x, int mu_y);

void draw_menu_escape_cont(global *glob, character_t *prs);

float **init_porcent(void);

void detect_option_game_4_cont(global *g, int mx, int my, character_t *prs);

void ini_vect_rect_2(character_t *prs);

void destroy_stat(character_t *prs, global *glob);

void destroy_comp(character_t *prs, global *glob);

int my_strcmp(char *s1, char *s2);

void my_put_pixel(pixel_t *buffer,
unsigned int x, unsigned int y, global *glob);

void particle_animation(global *glob, effect_t *effect);

void effect_part(global *glob, char *type);

void draw_effect(pixel_t *pxl, sfVector2f beg,
sfVector2f end, global *glob);

void draw_particle(global *glob, effect_t **particle);

void framebuffer_clear(pixel_t *pixel, sfColor color);

void refresh(global *glob, sfColor *color);

void detect_option_game_2_cont(global *g, int k, int w, character_t *prs);

void init_part(global *glob);

#endif /* !CHARACTER_H_ */
