/*
** EPITECH PROJECT, 2019
** error
** File description:
** error
*/
#include "../include/my_sokoban.h"

int no_p(char *buffer)
{
    for (int i = 0; buffer[i] != '\0'; i++)
    {
        if (buffer[i] == 'P')
            return (1);
    }
    exit(84);
}

int no_x(char *buffer)
{
    for (int i = 0; buffer[i] != '\0'; i++)
    {
        if (buffer[i] == 'X')
            return (1);
    }
    exit(84);
}

int no_o(char *buffer)
{
    for (int i = 0; buffer[i] != '\0'; i++)
    {
        if (buffer[i] == 'O')
            return (1);
    }
    exit(84);
}

int no_ashtag(char *buffer)
{
    for (int i = 0; buffer[i] != '\0'; i++)
    {
        if (buffer[i] == '#')
            return (1);
    }
    exit(84);
}
