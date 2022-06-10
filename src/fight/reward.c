/*
** EPITECH PROJECT, 2022
** attack
** File description:
** attack
*/

#include "my_rpg.h"
#include "character.h"
#include "fight.h"

void set_competence(attack_t *attack)
{
    for (int i = 0; i != 4 && attack->competence_use[i] != -1; i++) {
        attack->competence_use[i] = 0;
    }
}

int *event_clicked2(global *global, rect_t *rect, attack_t *attack, int *stat)
{
    float mu_x = sfMouse_getPositionRenderWindow(global->window).x;
    float mu_y = sfMouse_getPositionRenderWindow(global->window).y;
    float x1 = rect[6].pos.x;
    float y1 = rect[6].pos.y;

    if (mu_x > x1 && mu_x < x1 + rect[6].size.x && mu_y > y1 &&
    mu_y < y1 + rect[6].size.y)
        global->screen = 1;

    for (int i = 0; i != 4; i++) {
        x1 = rect[i + 2].pos.x;
        y1 = rect[i + 2].pos.y;
        if (mu_x > x1 && mu_x < x1 + rect[i + 2].size.x && mu_y > y1 &&
        mu_y < y1 + rect[i + 2].size.y && attack->competence_use[i] != -1 &&
        attack->mana_rest - attack->mana_cost_use[i] >= 0) {
            set_competence(attack);
            attack->competence_use[i] = 1;
            attack->round[0]++;
        }
    }
}

int *event_clicked(global *global, rect_t *rect, attack_t *attack, int *stat)
{
    float mu_x = sfMouse_getPositionRenderWindow(global->window).x;
    float mu_y = sfMouse_getPositionRenderWindow(global->window).y;
    float x1 = 0;
    float y1 = 0;

    x1 = rect[6].pos.x;
    y1 = rect[6].pos.y;
    if (mu_x > x1 && mu_x < x1 + rect[6].size.x && mu_y > y1 &&
    mu_y < y1 + rect[6].size.y)
        global->screen = 1;
    event_clicked2(global, rect, attack, stat);
    return stat;
}

int reward(monster_t *monster, character_t *character, global *global)
{
    global->screen = 1;
    if (monster->hp <= 0) {
        character->xp += monster->gain_xp;
        character->money += monster->gain_money;
        while (character->xp >= 20) {
            character->xp -= 20;
            character->level++;
            character->competences += rand() % 3 + 4;
        }
        sfText_setString(character->stat.text_stat[8]->text_stat,
        int_to_char(character->money));
        sfText_setString(character->stat.text_stat[0]->text_stat,
        int_to_char(character->competences));
        sfText_setString(character->stat.text_stat[3]->text_stat,
        int_to_char(character->level));
        sfText_setString(character->stat.text_stat[1]->text_stat,
        int_to_char(character->xp));
    }
}

sfSprite *create_background(sfTexture *texture)
{
    sfSprite *sprite;

    sprite = sfSprite_create();
    sfSprite_setTexture(sprite, texture, sfFalse);
    return sprite;
}
