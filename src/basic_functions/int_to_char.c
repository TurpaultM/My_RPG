/*
** EPITECH PROJECT, 2022
** basic_functions
** File description:
** int_to_char
*/

#include "my_rpg.h"

int my_power_rec(int nbr, int p)
{
    if (p == 0) {
        return 1;
    } else if (nbr == 0) {
        return 0;
    } else {
        return nbr * my_power_rec(nbr, p - 1);
    }
}

char *int_to_char(int result)
{
    int i = 0;
    char *str;
    int compteur = 0;

    for (int rep = result; rep < -9 || rep > 9; i++)
        rep = rep / 10;
    str = malloc(sizeof(char) * (i + 3));
    if (result < 0) {
        result = -result;
        str[0] = '-';
        str[1] = '\0';
        compteur++;
    }
    for (; i != -1; compteur++, i--) {
        str[compteur] = '0' + (result / my_power_rec(10, i));
        str[compteur + 1] = '\0';
        result -= (result / my_power_rec(10, i)) * my_power_rec(10, i);
    }
    return (str);
}
