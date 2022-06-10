/*
** EPITECH PROJECT, 2022
** initilisation
** File description:
** initialise the sprite, textures, rect for the menu
*/

#include "my_rpg.h"

void ini_sprite_howto2(global *global)
{
    global->menu.howto4_spr = sfSprite_create();
    global->menu.howto4_tex = sfTexture_createFromFile(
    "assets/images/howto4.png" ,
    NULL);
    sfSprite_setTexture(global->menu.howto4_spr, global->menu.howto4_tex,
    sfFalse);
    global->menu.howto5_spr = sfSprite_create();
    global->menu.howto5_tex = sfTexture_createFromFile(
    "assets/images/howto5.png" ,
    NULL);
    sfSprite_setTexture(global->menu.howto5_spr, global->menu.howto5_tex,
    sfFalse);
}

void ini_sprite_howto(global *global)
{
    global->menu.howto1_spr = sfSprite_create();
    global->menu.howto1_tex = sfTexture_createFromFile(
    "assets/images/howto1.png" , NULL);
    sfSprite_setTexture(global->menu.howto1_spr, global->menu.howto1_tex,
    sfFalse);
    global->menu.howto2_spr = sfSprite_create();
    global->menu.howto2_tex = sfTexture_createFromFile(
    "assets/images/howto2.png" , NULL);
    sfSprite_setTexture(global->menu.howto2_spr, global->menu.howto2_tex,
    sfFalse);
    global->menu.howto3_spr = sfSprite_create();
    global->menu.howto3_tex = sfTexture_createFromFile(
    "assets/images/howto3.png" ,
    NULL);
    sfSprite_setTexture(global->menu.howto3_spr, global->menu.howto3_tex,
    sfFalse);
    ini_sprite_howto2(global);
}

void ini_sprite_menu(global *global)
{
    ini_sprite_howto(global);
    ini_button_pos(global);
    global->menu.background = sfSprite_create();
    global->menu.background_texture = sfTexture_createFromFile("assets/imag"
    "es/menu.jpg", NULL);
    sfSprite_setTexture(global->menu.background,
    global->menu.background_texture, sfFalse);
    global->option_spr = sfSprite_create();
    global->option_tex = sfTexture_createFromFile("assets/ima"
    "ges/menu_flouted.png", NULL);
    sfSprite_setTexture(global->option_spr, global->option_tex, sfFalse);
    global->credit_spr = sfSprite_create();
    global->credit_tex = sfTexture_createFromFile("assets/imag"
    "es/credits.png", NULL);
    sfSprite_setTexture(global->credit_spr, global->credit_tex, sfFalse);
    sfSprite_setPosition(global->credit_spr, (sfVector2f){0, 300});
    for (int i = 13; i < 19; i++) {
        set_rec_size(global, (sfVector2f){200, 200}, i);
    }
}

void init_buttons(void)
{
    global glob;

    glob.menu.button_menu = malloc(sizeof(button *) * 22);
    ini_choose(&glob);
    glob.screen = 0;
    for (int i = 0; i < 22; i++) {
        glob.menu.button_menu[i] = malloc(sizeof(button));
        glob.menu.button_menu[i]->button = sfRectangleShape_create();
        sfRectangleShape_setFillColor(glob.menu.button_menu[i]->button,
        sfTransparent);
        sfRectangleShape_setSize(glob.menu.button_menu[i]->button,
        (sfVector2f){400, 100});
        sfRectangleShape_setOutlineThickness(glob.menu.button_menu[i]->button,
        1);
        sfRectangleShape_setOutlineColor(glob.menu.button_menu[i]->button,
        sfBlack);
    }
    ini_sprite_menu(&glob);
    ini_text_buttons(&glob);
    start_menu(&glob);
}
