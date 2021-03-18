/*
** EPITECH PROJECT, 2019
** main
** File description:
** my_main
*/

#include "../include/my_sokoban.h"
#include <stdio.h>

int main(int ac, char **av)
{
    t_water *water;
    t_place *place;
    char *buffer = NULL;

    if (ac == 2) {
        if (av[1][0] == '-' && av[1][1] == 'h' && av[1][2] == '\0')
            description(av[1]);
        else {
            buffer = open_read(av[1]);
            manage_error(buffer);
            place = find_cursor(buffer, place);
            my_game_board(av[1], buffer, place, water);
        }
    }
    else
        return (84);
    return (0);
}
