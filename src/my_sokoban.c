/*
** EPITECH PROJECT, 2019
** sokoban
** File description:
** sokoban
*/

#include "../include/my_sokoban.h"
#include <stdio.h>

t_place *find_cursor(char *buffer, t_place *place)
{
    int i = 0;
    place->x = 0;
    place->y = 0;
    if (buffer != NULL) {
        while (buffer[i] != 'P') {
            if (buffer[i] == '\n') {
                place->y++;
                place->x = 0;
                i++;
            }
            place->x++;
            i++;
        }
    }
    else
        exit(84);
    return (place);
}

void my_game_board(char *file, char *buffer, t_place *place, t_water *water)
{
    place = find_cursor(buffer, place);
    initscr();
    printw(buffer);
    cbreak();
    noecho();
    keypad(stdscr, TRUE);
    wmove(stdscr, place->y, place->x);
    wrefresh(stdscr);
    move_p(file, buffer, place, water);
    endwin();
}
