/*
** EPITECH PROJECT, 2022
** fight
** File description:
** fight
*/

#include "fight.h"
#include "my_rpg.h"
#include "character.h"

int *event_fight(rect_t *rect, global *global, attack_t *attack, int *stat)
{
    float mu_x = sfMouse_getPositionRenderWindow(global->window).x;
    float mu_y = sfMouse_getPositionRenderWindow(global->window).y;
    float x1 = 0;
    float y1 = 0;

    if (global->event.type == sfEvtMouseButtonPressed &&
        attack->round[0] == 0) {
        stat = event_clicked(global, rect, attack, stat);
    } else if (global->event.type == sfEvtMouseButtonPressed) {
        attack->round[0] = (attack->round[0] + 1) % 3;
        attack->round[1] = 0;
    }
    event_fight_2(global);
    return stat;
}

void draw_fight_monster(sfRenderWindow *window, character_t *character,
monster_t *monster, attack_t *attack)
{
    sfRenderWindow_drawSprite(window, character->sprite_perso, NULL);
    sfRenderWindow_drawSprite(window, monster->sprite_monster, NULL);
    for (int i = 0; attack->competence_use[i] != -1 && i != 4; i++) {
        sfRenderWindow_drawSprite(window, attack->sprite_comp[i], NULL);
    }
}

void action(global *global, character_t *character, attack_t *attack,
monster_t *monster)
{
    attack->mana_rest = character->mana;
    if (attack->round[0] == 0) {
        init_all_pos(global, character, monster);
        draw_fight_monster(global->window, character, monster, attack);
    } else if (attack->round[0] == 1) {
        attack_mob(attack, character, monster, global);
    } else {
        move_monster(monster, character);
        if (attack->round[1] == 0) {
            attack_mob_to_hero(monster, character, attack->defense);
            attack->round[1]++;
            put_effect(character, monster, attack, global);
        }
        draw_fight_monster(global->window, character, monster, attack);
    }
}

void fight_loop(global *global, character_t *character, monster_t *monster,
int *stat)
{
    rect_t *rect = malloc(sizeof(rect_t) * 14);
    attack_t attack;
    sfTexture *txtur = sfTexture_createFromFile("assets/images/sw.png", NULL);
    sfSprite *sprite = create_background(txtur);

    init_struct_attack(&attack, character);
    rect = init_struct_fight(rect);
    while (sfRenderWindow_isOpen(global->window) && global->screen == 2
    && character->hp > 0 && monster->hp > 0) {
        while (sfRenderWindow_pollEvent(global->window, &global->event))
            stat = event_fight(rect, global, &attack, stat);
        rect = set_rect(rect, stat, character, monster);
        draw_fight_scene(global->window, sprite, rect);
        action(global, character, &attack, monster);
        draw_particle_effect(&attack, global);
        sfRenderWindow_display(global->window);
    }
    reward(monster, character, global);
    destroy_scene_fight(sprite, rect, txtur);
    free(rect);
}

void is_there_fight(global *global, character_t *character, monster_t *monster)
{
    int *stat = malloc(sizeof(int) * 4);
    sfVector2f pos = sfSprite_getPosition(character->sprite_perso);

    stat[0] = character->hp;
    stat[1] = monster->hp;
    stat[2] = character->mana;
    stat[3] = global->event.size.width;
    if (global->screen == 2) {
        fight_loop(global, character, monster, stat);
    }
    character->hp = stat[0];
    character->mana = stat[2];
    monster->hp = stat[1];
    sfSprite_setPosition(character->sprite_perso, pos);
    free(stat);
}
