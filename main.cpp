#include <iostream>
#include "Player.h"
#include "Board.h"
#include "Game.h"

int main()
{
    Game game;
    game.initialize();
    game.run();
    return 0;
}
