/*
** EPITECH PROJECT, 2022
** init game
** File description:
** init_game
*/

#include "character.h"
#include "my_rpg.h"

void init_clock(character_t *prs)
{
    prs->time->sec = 0;
    prs->time->sec_anim = 0;
    prs->time->up = sfClock_create();
    prs->time->down = sfClock_create();
    prs->time->left = sfClock_create();
    prs->time->right = sfClock_create();
    prs->time->up_anim = sfClock_create();
    prs->time->down_anim = sfClock_create();
    prs->time->left_anim = sfClock_create();
    prs->time->right_anim = sfClock_create();
    prs->back->sec = 0;
    prs->back->ftn = sfClock_create();
    sfSprite_setScale(prs->back->backs, (sfVector2f){2.75, 2.75});
    sfSprite_setScale(prs->back->fronts, (sfVector2f){2.75, 2.75});
    sfSprite_setScale(prs->back->fountains, (sfVector2f){5, 5});
    srand(time(NULL));
    ini_all_comp(prs);
}

void init_background_and_clock(character_t *prs)
{
    prs->time = malloc(sizeof(move_time_t));
    prs->back = malloc(sizeof(background_t));
    prs->back->backs = sfSprite_create();
    prs->back->backt = sfTexture_createFromFile("assets/images/map_bck.png",
    NULL);
    prs->back->fronts = sfSprite_create();
    prs->back->frontt = sfTexture_createFromFile("assets/images/map_fro.png",
    NULL);
    prs->back->fountains = sfSprite_create();
    prs->back->fountaint = sfTexture_createFromFile("assets/images/fount.png",
    NULL);
    sfSprite_setTexture(prs->back->fountains, prs->back->fountaint, sfFalse);
    sfSprite_setTexture(prs->back->backs, prs->back->backt, sfFalse);
    sfSprite_setTexture(prs->back->fronts, prs->back->frontt, sfFalse);
    prs->back->pos_bg = (sfVector2f){-800, -800};
    prs->back->pos_ftns = (sfVector2f){1230, 1200};
    prs->back->fount_rect = (sfIntRect){0, 0, 57, 57};
    sfSprite_setTextureRect(prs->back->fountains, prs->back->fount_rect);
    init_clock(prs);
}

void init_npc_and_cpt(character_t *p)
{
    p->cpt = malloc(sizeof(competence_t *) * 9);
    p->npc = malloc(sizeof(npc_t *) * 8);
    for (int i = 0; i < 8; i++) {
        p->npc[i] = malloc(sizeof(npc_t));
        p->npc[i]->name = npc_name(i);
        p->npc[i]->text = npc_text(i);
        p->npc[i]->sprite_npc = sfSprite_create();
        p->npc[i]->texture_npc = sfTexture_createFromFile(texture(i), NULL);
        p->npc[i]->pos_npc = npc_pos(i);
        p->npc[i]->dialogue_txt = sfText_create();
        p->npc[i]->npc_rect = (sfIntRect){0, 0, 32, 32};
        sfSprite_setScale(p->npc[i]->sprite_npc, (sfVector2f){2.8, 2.8});
        sfSprite_setTexture(p->npc[i]->sprite_npc, p->npc[i]->texture_npc,
        sfFalse);
        sfSprite_setTextureRect(p->npc[i]->sprite_npc, p->npc[i]->npc_rect);
        sfSprite_setPosition(p->npc[i]->sprite_npc, p->npc[i]->pos_npc);
    }
    init_text_npc(p);
    init_cpt(p);
    p->which_npc = 0;
}

void init_game(global *glob, int which_player)
{
    character_t *prs = malloc(sizeof(character_t));
    monster_t **monster = malloc(sizeof(monster_t*) * 7);
    init_part(glob);
    if (which_player == 1 || which_player == 2)
        init_lutin(prs, which_player);
    if (which_player == 3 || which_player == 4)
        init_woman(prs, which_player);
    if (which_player == 5 || which_player == 6)
        init_man(prs, which_player);
    sfSprite_setPosition(prs->sprite_perso, prs->pos_character);
    ini_quete(prs);
    prs->screen = 0;
    init_background_and_clock(prs);
    sfSprite_setPosition(prs->back->fountains, prs->back->pos_ftns);
    sfSprite_setPosition(prs->back->backs, (sfVector2f){-800, -800});
    sfSprite_setPosition(prs->back->fronts,(sfVector2f){-800, -800});
    init_monster(monster);
    ini_cols(prs);
    init_npc_and_cpt(prs);
    start_game(glob, prs, monster);
}
