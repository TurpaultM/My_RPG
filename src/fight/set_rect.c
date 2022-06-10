/*
** EPITECH PROJECT, 2022
** attack
** File description:
** attack
*/

#include "my_rpg.h"
#include "character.h"
#include "fight.h"

void draw_particle_effect(attack_t *attack, global * glob)
{
    if (attack->effect[1] > 0) {
        sfSprite_setPosition(glob->sprite_part,
        (sfVector2f){0.25 * 1920, 0.3 * 1080});
        effect_part(glob, "fire");
    }
    if (attack->effect[2] > 0) {
        sfSprite_setPosition(glob->sprite_part,
        (sfVector2f){0.65 * 1920 - 32, 0.40 * 1080 - 32});
        effect_part(glob, "heal");
    }
    if (attack->effect[3] > 0) {
        sfSprite_setPosition(glob->sprite_part,
        (sfVector2f){0.25 * 1920, 0.3 * 1080});
        effect_part(glob, "poison");
    }
}

void draw_fight_scene(sfRenderWindow *window, sfSprite *sprite, rect_t *rect)
{
    sfRenderWindow_drawSprite(window, sprite, sfFalse);
    sfRenderWindow_clear(window, sfBlack);
    sfRenderWindow_drawSprite(window, sprite, NULL);
    for (int i = 0; i != 14; i++) {
        sfRenderWindow_drawRectangleShape(window, rect[i].rect, NULL);
    }
}

rect_t *set_rect(rect_t *rect, int *stat, character_t *character,
monster_t *monster)
{
    sfVector2f size_mana = sfRectangleShape_getSize(rect[13].rect);
    sfVector2f size_hp_mst = sfRectangleShape_getSize(rect[8].rect);
    sfVector2f size_hp_prs = sfRectangleShape_getSize(rect[11].rect);

    size_hp_prs.x = 480 * character->hp / stat[0];
    size_hp_mst.x = 1920 * 0.4 * monster->hp / stat[1];
    size_mana.x = 1920 * 0.25 * character->mana / stat[2];
    sfRectangleShape_setSize(rect[13].rect, size_mana);
    sfRectangleShape_setSize(rect[11].rect, size_hp_prs);
    sfRectangleShape_setSize(rect[8].rect, size_hp_mst);
    if (character->hp > stat[0])
        character->hp = stat[0];
    return rect;
}

void destroy_scene_fight(sfSprite *sprite, rect_t *rect, sfTexture *texture)
{
    sfTexture_destroy(texture);
    sfSprite_destroy(sprite);
    for (int i = 0; i != 14; i++)
        sfRectangleShape_destroy(rect[i].rect);
}
