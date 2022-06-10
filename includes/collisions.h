/*
** EPITECH PROJECT, 2022
** include
** File description:
** its the collisions struct
*/

#ifndef COLLISIONS_H_
    #define COLLISIONS_H_
    #include <stdio.h>
    #include <fcntl.h>
    #include <stddef.h>
    #include <unistd.h>
    #include <stdlib.h>
    #include <string.h>
    #include <time.h>
    #include <SFML/Window.h>
    #include <SFML/Audio.h>
    #include <SFML/System.h>
    #include <SFML/Graphics.h>

typedef struct colision_s {
    sfVector2f position;
    sfVector2f size;
    sfRectangleShape *button;
} colision_t;

#endif /* !COLLISIONS_H_ */
