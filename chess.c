// Modify this file
// You may add more files if you want
// USE THE PROVIDED FUNCTIONS TO RECEIVE AND SEND MOVES (OTHERWISE YOU MAY TIME OUT)
#include "chess.h"

const char *moves[] = {"e2e4", "e7e5", "f1c4", "b8c6", "d1h5", "g8f6", "h5f7", "a7a5", "a2a4", "b7b5"};

void white()
{
    printf("e2e4\n");
    fflush(stdout);
    char sc, sr, ec, er;
    int idx = 2, time, opp_time;
    do
    {
        if (scanf(" %c%c%c%c %d %d", &sc, &sr, &ec, &er, &time, &opp_time))
        {
            assert(sc == moves[idx - 1][0] && sr == moves[idx - 1][1] && ec == moves[idx - 1][2] && er == moves[idx - 1][3]);
            printf("%s\n", moves[idx]);
            fflush(stdout);
            idx += 2;
        }
    } while (true);
}

void black()
{
    char sc, sr, ec, er;
    int idx = 1, time, opp_time;
    do
    {
        if (scanf(" %c%c%c%c %d %d", &sc, &sr, &ec, &er, &time, &opp_time))
        {
            assert(sc == moves[idx - 1][0] && sr == moves[idx - 1][1] && ec == moves[idx - 1][2] && er == moves[idx - 1][3]);
            printf("%s\n", moves[idx]);
            fflush(stdout);
            idx += 2;
        }
    } while (true);
}