/*
** EPITECH PROJECT, 2022
** B-MUL-200-NAN-2-1-myrpg-matteo.turpault
** File description:
** init_rect
*/

#include "my_rpg.h"
#include "character.h"

sfIntRect get_rect(int i)
{
    switch (i) {
        case 0:
            return ((sfIntRect){0, 0, 60, 60});
        case 1:
            return ((sfIntRect){0, 0, 60, 60});
        case 2:
            return ((sfIntRect){0, 0, 60, 60});
        case 3:
            return ((sfIntRect){0, 0, 60, 60});
        case 4:
            return ((sfIntRect){0, 0, 46, 46});
        case 5:
            return ((sfIntRect){0, 0, 32, 32});
        case 6:
            return ((sfIntRect){0, 0, 32, 32});
        default:
            return ((sfIntRect){0, 0, 0, 0});
    }
}
