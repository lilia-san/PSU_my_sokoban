/*
** EPITECH PROJECT, 2019
** my_sokoban
** File description:
** sokoban
*/

#include <sys/types.h>
#include <sys/stat.h>
#include <stddef.h>
#include <unistd.h>
#include <stdlib.h>
#include <fcntl.h>
#include <ncurses.h>

typedef struct t_place t_place;
struct t_place
{
    int x;
    int y;
    int a;
    int b;
};

typedef struct t_water t_water;
struct t_water
{
    int x;
    int y;
};

int description(char *);
void my_putchar(char c);
char *open_read(char *file);
int my_putstr(char const *);
void my_game_board(char *file, char *buffer, t_place *place, t_water *water);
t_place *find_cursor(char *buffer, t_place *place);
int bad_letters(char *);
int no_p(char *);
int no_x(char *);
int no_o(char *);
int no_ashtag(char *);
void move_p(char *file, char *buffer, t_place *place, t_water *water);
void manage_error(char *buffer);
void go_right(t_place *place);
void go_left(t_place *place, t_water *water);
void go_up(t_place *place, t_water *water);
void go_down(t_place *place, t_water *water);
void right_o(t_place *place, t_water *water);
void left_o(t_place *place, t_water *water);
void up_o(t_place *place, t_water *water);
void down_o(t_place *place, t_water *owater);
