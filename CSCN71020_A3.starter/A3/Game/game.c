// Game.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <string.h>
#include "game.h"

static bool isValidShape(const char* shape)
{
    return (strcmp(shape, STR_ROCK) == 0 ||
        strcmp(shape, STR_PAPER) == 0 ||
        strcmp(shape, STR_SISSOR) == 0);
}

const char* playGame(const char* player1Shape, const char* player2Shape)
{
    // validate both inputs
    if (!isValidShape(player1Shape) || !isValidShape(player2Shape))
    {
        return STR_INVALID;
    }

    // check draw
    if (strcmp(player1Shape, player2Shape) == 0)
    {
        return STR_DRAW;
    }

    // determine winner
    bool player1Wins =
        (strcmp(player1Shape, STR_ROCK) == 0 && strcmp(player2Shape, STR_SISSOR) == 0) ||
        (strcmp(player1Shape, STR_PAPER) == 0 && strcmp(player2Shape, STR_ROCK) == 0) ||
        (strcmp(player1Shape, STR_SISSOR) == 0 && strcmp(player2Shape, STR_PAPER) == 0);

    return player1Wins ? STR_PLAYER1 : STR_PLAYER2;
}
int main()
{
    return 1;
}