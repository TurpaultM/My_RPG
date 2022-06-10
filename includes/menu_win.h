/*
** EPITECH PROJECT, 2022
** incudes
** File description:
** menu include
*/

#ifndef menu_
    #define menu_
    #include <stdio.h>
    #include <fcntl.h>
    #include <stddef.h>
    #include <unistd.h>
    #include <stdlib.h>
    #include <string.h>
    #include <SFML/Window.h>
    #include <SFML/Audio.h>
    #include <SFML/System.h>
    #include <SFML/Graphics.h>

typedef struct button {
    sfRectangleShape *button;
    sfFont *font;
    sfText *text_button;
    sfVector2f pos;
} button;

typedef struct option {
    sfSprite *option_spr;
    sfTexture *option_tex;
    button **button_opt;
    int visible;
} option;

typedef struct menu_s {
    sfSprite *background;
    sfTexture *background_texture;
    sfSprite *choose_spr;
    sfTexture *choose_texture;
    sfSprite *howto1_spr;
    sfTexture *howto1_tex;
    sfSprite *howto2_spr;
    sfTexture *howto2_tex;
    sfSprite *howto3_spr;
    sfTexture *howto3_tex;
    sfSprite *howto4_spr;
    sfTexture *howto4_tex;
    sfSprite *howto5_spr;
    sfTexture *howto5_tex;
    button **button_menu;
    int visible;
    int volume;
    int is_character_chosen;
} menu_t;

#endif /* !menu_ */
