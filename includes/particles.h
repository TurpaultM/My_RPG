/*
** EPITECH PROJECT, 2022
** include
** File description:
** particles include
*/

#ifndef particles_
    #define particles_

typedef struct effect_s {
    sfVector2f end;
    sfVector2f beg;
    float speed;
    float len;
    sfColor color;
} effect_t;

typedef struct pixel_s {
    unsigned int width;
    unsigned int height;
    sfUint8 *pixels;
} pixel_t;

#endif /* !particles_ */
