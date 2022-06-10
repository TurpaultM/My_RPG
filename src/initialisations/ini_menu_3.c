/*
** EPITECH PROJECT, 2022
** initialisation
** File description:
** ini menu 3
*/

#include "my_rpg.h"

void ini_text_buttons_3(global *global)
{
    set_text_pos_string(global, "sound", (sfVector2f){180, 85}, 3);
    set_text_pos_string(global, "music", (sfVector2f){1630, 85}, 4);
    set_text_pos_string(global, "back", (sfVector2f){910, 825}, 5);
    set_text_pos_string(global, "back", (sfVector2f){1647, 925}, 6);
    set_text_pos_string(global, "Leave", (sfVector2f){890, 476}, 12);
    set_text_pos_string(global, "How to play", (sfVector2f){1460, 873}, 13);
    set_text_pos_string(global, "next", (sfVector2f){1647, 947}, 14);
}

void ini_text_buttons_2(global *global)
{
    global->length = 1920;
    global->height = 1080;
    global->ratio = 1;
    set_text_pos_string(global, "leave", (sfVector2f){905, 670}, 7);
    set_text_pos_string(global, "framerate", (sfVector2f){839, 80}, 8);
    set_text_pos_string(global, "30", (sfVector2f){818, 190}, 9);
    set_rec_size(global, (sfVector2f){50, 50}, 9);
    set_text_pos_string(global, "60", (sfVector2f){947, 190}, 10);
    set_rec_size(global, (sfVector2f){50, 50}, 10);
    set_text_pos_string(global, "90", (sfVector2f){1077, 190}, 11);
    set_rec_size(global, (sfVector2f){50, 50}, 11);
    set_text_pos_string(global, "settings", (sfVector2f){875, 463}, 0);
    set_text_pos_string(global, "Play", (sfVector2f){910, 264}, 1);
    set_text_pos_string(global, "credit", (sfVector2f){890, 507}, 2);
    ini_text_buttons_3(global);
}

void ini_text_buttons(global *global)
{
    sfFont *font = sfFont_createFromFile("assets/font/font.otf");

    for (int i = 0; i < 15; i++) {
        global->menu.button_menu[i]->text_button = sfText_create();
        sfText_setFont(global->menu.button_menu[i]->text_button, font);
        sfText_setColor(global->menu.button_menu[i]->text_button, sfBlack);
        sfText_setCharacterSize(global->menu.button_menu[i]->text_button, 33);
    }
    sfText_setCharacterSize(global->menu.button_menu[9]->text_button, 20);
    sfText_setCharacterSize(global->menu.button_menu[10]->text_button, 20);
    sfText_setCharacterSize(global->menu.button_menu[11]->text_button, 20);
    sfText_setCharacterSize(global->menu.button_menu[1]->text_button, 40);
    ini_text_buttons_2(global);
    global->music.sound = sfSound_create();
    ini_music(global, font);
}
