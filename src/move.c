/*
** EPITECH PROJECT, 2019
** move stuff
** File description:
** move stuff
*/

#include "../include/my_sokoban.h"

void go_right(t_place *place)
{
    if (mvinch((place->y), (place->x + 1)) == 'X' ||
        (mvinch((place->y), (place->x + 1)) == ' ') ||
        (mvinch((place->y), (place->x + 1)) == 'O')) {
        if ((mvinch((place->y), (place->x + 1)) == 'X') &&
            (mvinch((place->y), (place->x + 2)) != '#') &&
            (mvinch((place->y), (place->x + 2)) != 'X')) {
            mvaddch((place->y), (place->x + 1), ' ');
            mvaddch((place->y), (place->x + 2), 'X');
        }
        if (mvinch((place->y), (place->x + 1)) == 'O') {
            place->b = place->y;
            place->a = place->x + 1;
        }
        if ((mvinch((place->y), (place->x + 1)) == ' ') ||
            (mvinch((place->y), (place->x + 1)) == 'O'))
            place->x++;
        if (mvinch(place->b, place->a) == ' ')
            mvaddch(place->b, place->a, 'O');
    }
}

void go_left(t_place *place, t_water *water)
{
    if (mvinch((place->y), (place->x - 1)) == 'X' ||
        (mvinch((place->y), (place->x - 1)) == ' ') ||
        (mvinch((place->y), (place->x - 1)) == 'O')) {
        if ((mvinch((place->y), (place->x - 1)) == 'X') &&
            (mvinch((place->y), (place->x - 2)) != '#') &&
            (mvinch((place->y), (place->x - 2)) != 'X')) {
            mvaddch((place->y), (place->x - 1), ' ');
            mvaddch((place->y), (place->x - 2), 'X');
        }
        if (mvinch((place->y), (place->x - 1)) == 'O') {
            place->b = place->y;
            place->a = place->x - 1;
        }
        if ((mvinch((place->y), (place->x - 1)) == ' ') ||
            (mvinch((place->y), (place->x - 1)) == 'O'))
            place->x--;
        if (mvinch(place->b, place->a) == ' ')
            mvaddch(place->b, place->a, 'O');
    }
}

void go_up(t_place *place, t_water *water)
{
    if (mvinch((place->y - 1), (place->x)) == 'X' ||
        (mvinch((place->y - 1), (place->x)) == 'O') ||
        (mvinch((place->y - 1), (place->x)) == ' ')) {
        if ((mvinch((place->y - 1), (place->x)) == 'X') &&
            (mvinch((place->y - 2), (place->x)) != '#') &&
            (mvinch((place->y - 2), (place->x)) != 'X')) {
            mvaddch((place->y - 1), (place->x), ' ');
            mvaddch((place->y - 2), (place->x), 'X');
        }
        if (mvinch((place->y - 1), (place->x)) == 'O') {
            place->b = place->y - 1;
            place->a = place->x;
        }
        if ((mvinch((place->y - 1), (place->x)) == ' ') ||
            (mvinch((place->y - 1), (place->x)) == 'O'))
            place->y--;
        if (mvinch(place->b, place->a) == ' ')
            mvaddch(place->b, place->a, 'O');
    }
}

void go_down(t_place *place, t_water *water)
{
    if (mvinch((place->y + 1), (place->x)) == 'X' ||
        (mvinch((place->y + 1), (place->x)) == 'O') ||
        (mvinch((place->y + 1), (place->x)) == ' ')) {
        if ((mvinch((place->y + 1), (place->x)) == 'X') &&
            (mvinch((place->y + 2), (place->x)) != '#') &&
            (mvinch((place->y + 2), (place->x)) != 'X')) {
            mvaddch((place->y + 1), (place->x), ' ');
            mvaddch((place->y + 2), (place->x), 'X');
        }
        if (mvinch((place->y + 1), (place->x)) == 'O') {
            place->b = place->y + 1;
            place->a = place->x;
        }
        if ((mvinch((place->y + 1), (place->x)) == ' ') ||
            (mvinch((place->y + 1), (place->x)) == 'O'))
            place->y++;
        if (mvinch(place->b, place->a) == ' ')
            mvaddch(place->b, place->a, 'O');
    }
}

void move_p(char * file, char *buffer, t_place *place, t_water *water)
{
    int key = 0;
    char P;
    place == find_cursor(buffer, place);
    while (key = getch()) {
        mvaddch(place->y, place->x, ' ');
        switch (key)
        {
        case 32:
            clear();
            my_game_board(file, buffer, place, water);
        case KEY_UP:
            go_up(place, water);
            break;
        case KEY_DOWN:
            go_down(place, water);
            break;
        case KEY_RIGHT:
            go_right(place);
            break;
        case KEY_LEFT:
            go_left(place, water);
            break;
        } mvaddch(place->y, place->x, 'P');
        mvinch(place->y, place->x);
    }
}
