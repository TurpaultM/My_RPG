/*
** EPITECH PROJECT, 2022
** init_porcent
** File description:
** init_porcent
*/

#include <stdlib.h>

float **init_porcent_sizex(float **porcent)
{
    porcent[0][0] = 0.7;
    porcent[1][0] = 1;
    porcent[2][0] = 0.15;
    porcent[3][0] = 0.15;
    porcent[4][0] = 0.15;
    porcent[5][0] = 0.15;
    porcent[6][0] = 0.1;
    porcent[7][0] = 0.4;
    porcent[8][0] = 0.4;
    porcent[9][0] = 0.35;
    porcent[10][0] = 0.25;
    porcent[11][0] = 0.25;
    porcent[12][0] = 0.25;
    porcent[13][0] = 0.25;
    return porcent;
}

float **init_porcent_sizey(float **porcent)
{
    porcent[0][1] = 0.15;
    porcent[1][1] = 0.35;
    porcent[2][1] = 0.10;
    porcent[3][1] = 0.10;
    porcent[4][1] = 0.1;
    porcent[5][1] = 0.1;
    porcent[6][1] = 0.15;
    porcent[7][1] = 0.05;
    porcent[8][1] = 0.05;
    porcent[9][1] = 0.35;
    porcent[10][1] = 0.1;
    porcent[11][1] = 0.1;
    porcent[12][1] = 0.1;
    porcent[13][1] = 0.1;
    return porcent;
}

float **init_porcent_posx(float **porcent)
{
    porcent[0][2] = 0;
    porcent[1][2] = 0;
    porcent[2][2] = 0.05;
    porcent[3][2] = 0.25;
    porcent[4][2] = 0.05;
    porcent[5][2] = 0.25;
    porcent[6][2] = 0.85;
    porcent[7][2] = 0.2;
    porcent[8][2] = 0.2;
    porcent[9][2] = 0.45;
    porcent[10][2] = 0.5;
    porcent[11][2] = 0.5;
    porcent[12][2] = 0.5;
    porcent[13][2] = 0.5;
    return porcent;
}

float **init_porcent_posy(float **porcent)
{
    porcent[0][3] = 0;
    porcent[1][3] = 0.65;
    porcent[2][3] = 0.7;
    porcent[3][3] = 0.7;
    porcent[4][3] = 0.85;
    porcent[5][3] = 0.85;
    porcent[6][3] = 0.75;
    porcent[7][3] = 0.05;
    porcent[8][3] = 0.05;
    porcent[9][3] = 0.65;
    porcent[10][3] = 0.7;
    porcent[11][3] = 0.7;
    porcent[12][3] = 0.85;
    porcent[13][3] = 0.85;
    return porcent;
}

float **init_porcent(void)
{
    float **porcent = malloc(sizeof(float *) * 14);

    for (int i = 0; i != 14; i++) {
        porcent[i] = malloc(sizeof(float) * 4);
    }
    porcent = init_porcent_posx(porcent);
    porcent = init_porcent_posy(porcent);
    porcent = init_porcent_sizex(porcent);
    porcent = init_porcent_sizey(porcent);
    return porcent;
}
