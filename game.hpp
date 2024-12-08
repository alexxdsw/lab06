#ifndef GAME_HPP
#define GAME_HPP

#include "board.hpp"
#include <iostream>

/**
 * @file game.hpp
 * @brief Definirea clasei Game pentru gestionarea logicii jocului Tic-Tac-Toe.
 * @author Roșca Alexandru
 * @date 2024
 */

/**
 * @class Game
 * @brief Reprezintă logica jocului Tic-Tac-Toe.
 */
class Game {
private:
    Board board;            /**< Tabla de joc utilizată în timpul jocului. */
    char current_marker;    /**< Markerul curent ('X' sau 'O'). */
    int current_player;     /**< Jucătorul curent (1 sau 2). */

public:
    /**
     * @brief Constructor implicit. Inițializează jocul cu primul jucător și markerul 'X'.
     */
    Game();

    /**
     * @brief Pornește jocul Tic-Tac-Toe.
     */
    void Start();

    /**
     * @brief Schimbă jucătorul curent și markerul utilizat.
     */
    void SwapPlayer();

    /**
     * @brief Anunță câștigătorul jocului.
     */
    void AnnounceWinner();
};

#endif
