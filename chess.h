// DO NOT MODIFY THIS FILE
// IF YOU WANT YOUR OWN HEADER FILES, CREATE THEM
#ifndef __CHESS_H__
#define __CHESS_H__

#include <stdio.h>
#include <stdbool.h>
#include <assert.h>
#include <unistd.h>

typedef char move_t[4];
typedef int* time_t;
int get_color();
int get_move(move_t, time_t, time_t);
void send_move(move_t);

void white();
void black();

#endif