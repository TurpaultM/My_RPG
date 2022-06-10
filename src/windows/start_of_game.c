/*
** EPITECH PROJECT, 2022
** start game
** File description:
** start_of_game
*/

#include "character.h"
#include "my_rpg.h"

void monster_apparition(global *global, monster_t **mst)
{
    if ((rand() % 100) == 6) {
        global->screen = 2;
        mst[0]->monster_id = 0;
    }
    if ((rand() % 100) == 6) {
        global->screen = 2;
        mst[0]->monster_id = 1;
    }
    if ((rand() % 400) == 6) {
        global->screen = 2;
        mst[0]->monster_id = 2;
    }
    if ((rand() % 400) == 6) {
        global->screen = 2;
        mst[0]->monster_id = 3;
    }
    if ((rand() % 500) == 6) {
        global->screen = 2;
        mst[0]->monster_id = 4;
    }
}

void choose_who_to_analyse(global *glob, character_t *prs, monster_t **mst)
{
    int mu_x = sfMouse_getPositionRenderWindow(glob->window).x;
    int mu_y = sfMouse_getPositionRenderWindow(glob->window).y;

    choosege_up(prs, glob);
    if (prs->screen == 2) {
        change_comp(prs, glob);
    }
    if (prs->screen == 5) {
        detect_option_game(glob, mu_x, mu_y, prs);
    }
}

void analyse_events(global *glob, character_t *prs, monster_t **mst)
{
    sfRenderWindow_display(glob->window);
    sfRenderWindow_setFramerateLimit(glob->window, glob->framerates);
    while (sfRenderWindow_pollEvent(glob->window, &glob->event)) {
        if (glob->event.type == sfEvtKeyPressed)
            monster_apparition(glob, mst);
        if (glob->event.type == sfEvtClosed)
            sfRenderWindow_close(glob->window);
        if (glob->event.type == sfEvtMouseButtonPressed)
            choose_who_to_analyse(glob, prs, mst);
    }
    start_pause(prs, glob);
    prs->screen == 0 ? move_player(prs, glob, mst) : 0;
    prs->screen == 1 ? change_color_of_stats(prs, glob) : 0;
    prs->screen == 2 ? change_color(prs, glob) : 0;
    if (prs->screen == 5) {
        change_color_of_button3(glob);
        change_color_frame(glob);
    }
}

void fountain_anim(character_t *prs)
{
    prs->back->time = sfClock_getElapsedTime(prs->back->ftn);
    prs->back->sec = prs->back->time.microseconds / (150000);
    if (prs->back->sec > 1) {
        prs->back->fount_rect.top -= 60;
        if (prs->back->fount_rect.top < 0) {
            prs->back->fount_rect.top = 300;
        }
        sfClock_restart(prs->back->ftn);
    }
}

void start_game(global *glob, character_t *prs, monster_t **mst)
{
    if (glob->screen == 1) {
        while (sfRenderWindow_isOpen(glob->window) && glob->screen != 10) {
            sfRenderWindow_clear(glob->window, sfBlack);
            draw_all(glob, prs);
            analyse_events(glob, prs, mst);
            sfRenderWindow_display(glob->window);
            is_there_fight(glob, prs, mst[mst[0]->monster_id]);
            fountain_anim(prs);
        }
        destroy_game(prs, glob);
    }
}
