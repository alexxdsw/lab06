#ifndef GAME_HPP
#define GAME_HPP

#include "board.hpp"
#include <iostream>

class Game {
private:
    Board board;
    char current_marker;
    int current_player;

public:
    Game();
    void Start();
    void SwapPlayer();
    void AnnounceWinner();
};

#endif
