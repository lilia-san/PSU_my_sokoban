/*
** EPITECH PROJECT, 2019
** manage error
** File description:
** manage error
*/

#include "../include/my_sokoban.h"

void manage_error(char *buffer)
{
    if (buffer != NULL) {
        no_o(buffer);
        no_p(buffer);
        no_x(buffer);
        no_ashtag(buffer);
        bad_letters(buffer);
    }
    else
        exit(84);
}

int bad_letters(char *buffer)
{
    int i = 0;

    while (buffer[i] != '\0')
    {
        if (buffer[i] != 'P' && buffer[i] != '#' && buffer[i] != 'X' &&
            buffer[i] != 'O' && buffer[i] != '\n' && buffer[i] != ' ') {
            exit(84);
        }
        i++;
    }
    return (0);
}
