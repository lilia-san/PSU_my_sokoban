/*
** EPITECH PROJECT, 2019
** open and read
** File description:
** op
*/

#include "../include/my_sokoban.h"

char *open_read(char *file)
{
    int fd = 0;
    int rd = 0;
    struct stat info;
    char *buffer = NULL;

    fd = open(file, O_RDONLY);
    if (stat(file, &info) < 0)
        return (NULL);
    else {
        buffer = malloc(sizeof(char) * (info.st_size +1));
        rd = read(fd, buffer, info.st_size);
    }
    if (buffer == NULL)
        return (NULL);
    close(fd);
    return (buffer);
}
