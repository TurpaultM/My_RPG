/*
** EPITECH PROJECT, 2022
** fi
** File description:
** fight 2
*/

#include "fight.h"
#include "my_rpg.h"
#include "character.h"

void event_fight_2(global *global)
{
    if (global->event.type == sfEvtClosed) {
        sfRenderWindow_close(global->window);
    }
}
