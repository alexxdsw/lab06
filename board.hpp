#ifndef BOARD_HPP
#define BOARD_HPP

#include <iostream>

/**
 * @file board.hpp
 * @brief Definirea clasei Board pentru jocul Tic-Tac-Toe.
 * @author Roșca Alexandru
 * @date 2024
 */

/**
 * @class Board
 * @brief Reprezintă tabla de joc pentru Tic-Tac-Toe.
 */
class Board {
private:
    char grid[3][3]; /**< Reprezentarea tablei de joc (3x3). */

public:
    /**
     * @brief Constructor implicit. Inițializează tabla cu numerele 1-9.
     */
    Board();

    /**
     * @brief Constructor de copiere.
     * @param other Obiectul Board care va fi copiat.
     */
    Board(const Board& other);

    /**
     * @brief Operatorul de atribuire.
     * @param other Obiectul Board care va fi copiat.
     * @return Referința către obiectul curent.
     */
    Board& operator=(const Board& other);

    /**
     * @brief Operatorul de egalitate.
     * @param other Obiectul Board cu care se compară.
     * @return True dacă tablele sunt identice, false în caz contrar.
     */
    bool operator==(const Board& other) const;

    /**
     * @brief Plasează un marker pe tablă.
     * @param slot Numărul poziției (1-9) unde se va plasa markerul.
     * @param marker Markerul care va fi plasat ('X' sau 'O').
     * @return True dacă plasarea a avut succes, false altfel.
     */
    bool PlaceMarker(int slot, char marker);

    /**
     * @brief Verifică dacă există un câștigător.
     * @return 1 dacă există un câștigător, 0 altfel.
     */
    int CheckWinner();

    /**
     * @brief Afișează starea curentă a tablei de joc.
     */
    void DrawBoard();

    /**
     * @brief Operatorul de citire pentru clasa Board.
     * @param in Fluxul de intrare.
     * @param board Obiectul Board în care se vor citi datele.
     * @return Referința către fluxul de intrare.
     */
    friend std::istream& operator>>(std::istream& in, Board& board);

    /**
     * @brief Operatorul de afișare pentru clasa Board.
     * @param out Fluxul de ieșire.
     * @param board Obiectul Board care va fi afișat.
     * @return Referința către fluxul de ieșire.
     */
    friend std::ostream& operator<<(std::ostream& out, const Board& board);
};

#endif
