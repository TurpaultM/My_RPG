/*
** EPITECH PROJECT, 2022
** initialisations
** File description:
** initialisation modulables
*/

#include "my_rpg.h"
#include "character.h"

void set_rec_size(global *global, sfVector2f size, int i)
{
    sfRectangleShape_setSize(global->menu.button_menu[i]->button, size);
}

void set_text_pos_string(global *global, char *name, sfVector2f pos, int i)
{
    sfText_setPosition(global->menu.button_menu[i]->text_button, pos);
    sfText_setString(global->menu.button_menu[i]->text_button, name);
}

void set_text(character_t *prs, char *name, sfVector2f pos, int i)
{
    sfText_setPosition(prs->stat.text_stat[i]->text_stat, pos);
    sfText_setString(prs->stat.text_stat[i]->text_stat, name);
}

void set_rec_pos(global *global, sfVector2f pos, int i)
{
    sfRectangleShape_setPosition(global->menu.button_menu[i]->button, pos);
}

void set_rects_all_size(global *global)
{
    for (int i = 13; i < 19; i++) {
        set_rec_size(global, (sfVector2f){200, 200}, 13);
    }
}
