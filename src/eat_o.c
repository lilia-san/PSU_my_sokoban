/*
** EPITECH PROJECT, 2019
** eat o
** File description:
** eat o
*/

#include "../include/my_sokoban.h"

void right_o(t_place *place, t_water *water)
{
    if (mvinch((place->y), (place->x + 1)) == 'O') {
        water->y = place->y;
        water->x = place->x + 1;
    }
}

void left_o(t_place *place, t_water *water)
{
    if (mvinch((place->y), (place->x - 1)) == 'O') {
        water->y = place->y;
        water->x = place->x - 1;
    }
}

void up_o(t_place *place, t_water *water)
{
    if (mvinch((place->y - 1), (place->x)) == 'O') {
        water->y = place->y - 1;
        water->x = place->x;
    }
}

void down_o(t_place *place, t_water *water)
{
    if (mvinch((place->y + 1), (place->x)) == 'O') {
        water->y = place->y + 1;
        water->x = place->x;
    }
}
