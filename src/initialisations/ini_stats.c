/*
** EPITECH PROJECT, 2022
** initialisations
** File description:
** ini the stats
*/

#include "character.h"

char *my_strcat(char *dest, char const *src)
{
    int i = 0;
    for (; dest[i] != '\0'; i++);
    for (int j = 0; src[j] != '\0'; j++, i++) {
        dest[i] = src[j];
    }
    return (dest);
}

void put_sprite(sfSprite *sprite, char *texture, sfVector2f pos)
{
    sfTexture *tex;

    sprite = sfSprite_create();
    tex = sfTexture_createFromFile(texture, NULL);
    sfSprite_setTexture(sprite, tex, sfFalse);
    sfSprite_setPosition(sprite, pos);
}

void ini_stats_3(character_t *prs)
{
    prs->stat.money_spr = sfSprite_create();
    prs->stat.money_tex = sfTexture_createFromFile("assets/images/money.png",
    NULL);
    sfSprite_setTexture(prs->stat.money_spr ,prs->stat.money_tex, sfFalse);
    sfSprite_setPosition(prs->stat.money_spr, (sfVector2f){1400, 390});
    prs->stat.speed_spr = sfSprite_create();
    prs->stat.speed_tex = sfTexture_createFromFile("assets/images/speed.png",
    NULL);
    sfSprite_setTexture(prs->stat.speed_spr ,prs->stat.speed_tex, sfFalse);
    sfSprite_setPosition(prs->stat.speed_spr, (sfVector2f){1400, 270});
    prs->stat.intel_spr = sfSprite_create();
    prs->stat.intel_tex = sfTexture_createFromFile("assets/images/Livre.png",
    NULL);
    sfSprite_setTexture(prs->stat.intel_spr ,prs->stat.intel_tex, sfFalse);
    sfSprite_setPosition(prs->stat.intel_spr, (sfVector2f){1400, 330});
    prs->stat.xp_spr = sfSprite_create();
    prs->stat.xp_tex = sfTexture_createFromFile("assets/images/xp.png", NULL);
    sfSprite_setTexture(prs->stat.xp_spr ,prs->stat.xp_tex, sfFalse);
    sfSprite_setPosition(prs->stat.xp_spr, (sfVector2f){1400, 200});
    ini_upgrade_rect(prs);
}

void ini_stats_2(character_t *p)
{
    p->stat.life_spr = sfSprite_create();
    p->stat.life_tex = sfTexture_createFromFile("assets/images/cr.png", NULL);
    sfSprite_setTexture(p->stat.life_spr ,p->stat.life_tex, sfFalse);
    sfSprite_setPosition(p->stat.life_spr, (sfVector2f){1050, 200});
    p->stat.shield_spr = sfSprite_create();
    p->stat.shield_tex = sfTexture_createFromFile("assets/images/b.png", NULL);
    sfSprite_setTexture(p->stat.shield_spr ,p->stat.shield_tex, sfFalse);
    sfSprite_setPosition(p->stat.shield_spr, (sfVector2f){1057, 265});
    p->stat.mana_spr = sfSprite_create();
    p->stat.mana_tex = sfTexture_createFromFile("assets/images/o.png", NULL);
    sfSprite_setTexture(p->stat.mana_spr ,p->stat.mana_tex, sfFalse);
    sfSprite_setPosition(p->stat.mana_spr, (sfVector2f){1058, 325});
    p->stat.sword_spr = sfSprite_create();
    p->stat.sword_tex = sfTexture_createFromFile("assets/images/s.png", NULL);
    sfSprite_setTexture(p->stat.sword_spr ,p->stat.sword_tex, sfFalse);
    sfSprite_setPosition(p->stat.sword_spr, (sfVector2f){1058, 390});
    set_text(p, int_to_char(p->speed), (sfVector2f){1450, 275}, 7);
    set_text(p, int_to_char(p->money), (sfVector2f){1450, 395}, 8);
    set_text(p, int_to_char(p->mana), (sfVector2f){1120, 335}, 9);
    ini_stats_3(p);
}

void ini_stats(character_t *p)
{
    p->stat.text_stat = malloc(sizeof(stat_t *) * 12);
    for (int i = 0; i < 12; i++) {
        p->stat.text_stat[i] = malloc(sizeof(stat_t));
        p->stat.text_stat[i]->text_stat = sfText_create();
        sfText_setFont(p->stat.text_stat[i]->text_stat, p->quete.font_quete);
        sfText_setColor(p->stat.text_stat[i]->text_stat, sfBlack);
        sfText_setCharacterSize(p->stat.text_stat[i]->text_stat, 25);
    }
    set_text(p, int_to_char(p->competences),
    (sfVector2f){1664, 90}, 0);
    set_text(p, int_to_char(p->xp), (sfVector2f){1450, 210}, 1);
    set_text(p, int_to_char(p->hp), (sfVector2f){1120, 215}, 2);
    set_text(p, int_to_char(p->level), (sfVector2f){1330, 100}, 3);
    set_text(p, int_to_char(p->damages), (sfVector2f){1120, 395}, 4);
    set_text(p, int_to_char(p->defenses), (sfVector2f){1120, 270}, 5);
    set_text(p, int_to_char(p->intelligence),
    (sfVector2f){1450, 335}, 6);
    set_text(p, "Level :", (sfVector2f){1220, 100}, 10);
    set_text(p, "/ 20", (sfVector2f){1480, 210}, 11);
    ini_stats_2(p);
}
