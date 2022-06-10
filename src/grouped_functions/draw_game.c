/*
** EPITECH PROJECT, 2022
** grouped_functions
** File description:
** draw the game
*/

#include "character.h"
#include "my_rpg.h"
#include "particles.h"

void draw_menu_escape(global *glob, character_t *prs)
{
    sfColor sfGray = sfColor_fromRGB(130, 130, 130);

    sfRenderWindow_clear(glob->window, sfGray);
    sfRenderWindow_drawSprite(glob->window, glob->option_spr, NULL);
    for (int i = 3; i < 6; i++) {
        sfRenderWindow_drawRectangleShape(glob->window,
        glob->menu.button_menu[i]->button,NULL);
        sfRenderWindow_drawText(glob->window,
        glob->menu.button_menu[i]->text_button, NULL);
    }
    for (int i = 8; i < 12; i++) {
        sfRenderWindow_drawRectangleShape(glob->window,
        glob->menu.button_menu[i]->button,NULL);
        sfRenderWindow_drawText(glob->window,
        glob->menu.button_menu[i]->text_button, NULL);
    }
    draw_menu_escape_cont(glob, prs);
}

void print_quete_in_stat(global *glob, character_t *prs)
{
    if (prs->screen == 1 && prs->quete_avail == 1) {
        sfText_setCharacterSize(prs->npc[0]->dialogue_txt, 20);
        sfText_setPosition(prs->npc[0]->dialogue_txt, (sfVector2f){200, 300});
        sfText_setString(prs->npc[0]->dialogue_txt, "The  quest  for  the  wo"
        "rld:\n\n\tYou  have  been  chosen  to  accomplish  this  work.\n\tTa"
        "lk  to  the  townspeople  to  learn\n\tmore  about  what  awaits  yo"
        "u.\n\tThe  merchant  will  be  very  helpful\n\tto  completing  this"
        "  quest.\n\n\t\t  ==  Go  on  an  adventure,  HERO.  ==\n\n\n\tYou  "
        "must  defeat  two  bosses  ...\n\tgood  luck");
        sfRenderWindow_drawText(glob->window, prs->npc[0]->dialogue_txt, NULL);
    }
}

void draw_comp(global *glob, character_t *prs)
{
    sfRenderWindow_drawSprite(glob->window, prs->back->back_spr, NULL);
    for (int i = 0; i < 9; i++) {
        sfRenderWindow_drawRectangleShape(glob->window,
        prs->cpt[i]->button, NULL);
        sfRenderWindow_drawText(glob->window, prs->cpt[i]->text_comp, NULL);
        sfRenderWindow_drawSprite(glob->window, prs->cpt[i]->sprite_cpt, NULL);
    }
}

void draw_all_2(global *glob, character_t *prs)
{
    sfSprite_setTextureRect(prs->sprite_perso, prs->rect);
    sfSprite_setTextureRect(prs->back->fountains, prs->back->fount_rect);
    sfRenderWindow_drawSprite(glob->window, prs->sprite_perso, NULL);
    sfRenderWindow_drawSprite(glob->window, prs->back->fronts, NULL);
    sfRenderWindow_drawSprite(glob->window, prs->back->fountains, NULL);
    npc_hitbox(prs, glob);
    print_quete(prs, glob);
    if (prs->screen == 1)
        draw_quete_stat(glob, prs);
    if (prs->screen == 2)
        draw_comp(glob, prs);
    if (prs->screen == 5)
        draw_menu_escape(glob, prs);
}

void draw_all(global *glob, character_t *prs)
{
    sfRenderWindow_drawSprite(glob->window, prs->back->backs, NULL);
    sfRenderWindow_drawSprite(glob->window, prs->sprite_perso, NULL);
    sfRenderWindow_drawSprite(glob->window, prs->back->fronts, NULL);
    sfRenderWindow_drawSprite(glob->window, prs->back->fountains, NULL);
    prs->screen == 0 ? draw_npc(glob, prs) : 0;
    draw_all_2(glob, prs);
}
