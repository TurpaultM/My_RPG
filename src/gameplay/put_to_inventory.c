/*
** EPITECH PROJECT, 2022
** gameplay
** File description:
** put the items on the inventory
*/

#include "my_rpg.h"
#include "character.h"

void pos_item_inventory(sfSprite *sprite, sfVector2f pos)
{
    sfSprite_setPosition(sprite, pos);
}

void test(character_t *prs)
{
    pos_item_inventory(prs->invent.sword_spr, (sfVector2f){200, 200});
}
