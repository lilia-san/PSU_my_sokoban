/*
** EPITECH PROJECT, 2019
** my_putstr
** File description:
** my_putstr
*/

#include "../include/my_sokoban.h"

int my_putstr(char const *str)
{
    int i = 0;

    if (str == NULL)
        return (84);
    while (str[i] != '\0') {
        write(1, &str[i], 1);
        i++;
    }
    return (0);
}
