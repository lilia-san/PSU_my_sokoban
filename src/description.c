/*
** EPITECH PROJECT, 2019
** description
** File description:
** describe
*/

#include "../include/my_sokoban.h"

int description(char *str)
{
    if (str[0] == '-' && str[1] == 'h' && str[2] == '\0') {
        write (1, "USAGE", 5);
        my_putchar('\n');
        write (1, "    ./my_sokoban map", 20);
        my_putchar('\n');
        write (1, "DESCRIPTION", 11);
        my_putchar('\n');
        write (1, "    map file representing the warehouse map, containi", 53);
        write (1, "ng '#' for walls, \n        'P' for the player, 'X' fo", 53);
        write(1, "r boxes and 'O' for storage locations.\n", 39);
    }
    else
        return (84);
}
