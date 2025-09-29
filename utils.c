// DO NOT MODIFY
// PROVIDES FUNCTIONS TO SEND AND RECEIVE INPUTS FROM AUTOGRADER
#include "chess.h"

int get_color()
{
    int num;
    if (scanf(" %d", &num) != 1)
        return -1;
    return num;
}

int get_move(move_t move, time_t time_me, time_t time_opp)
{
    if (scanf(" %c%c%c%c %d %d", &move[0], &move[1], &move[2], &move[3], time_me, time_opp) != 6)
        return -1; // Should never happen
    return 0;
}

void send_move(move_t move)
{
    printf("%c%c%c%c\n", move[0], move[1], move[2], move[3]);
    fflush(stdout); // Very important otherwise your engine times out because of buffering
}
