#include <cassert>
#include "../include/board.hpp"

void test_default_constructor() {
    Board board;
    // Verificăm inițializarea corectă a tablei
    assert(board.PlaceMarker(1, 'X') == true);
    assert(board.PlaceMarker(1, 'O') == false);
}

void test_copy_constructor() {
    Board board1;
    board1.PlaceMarker(1, 'X');
    Board board2 = board1;  // Constructor de copiere

    assert(board2.PlaceMarker(2, 'O') == true);
    assert(board2.PlaceMarker(1, 'O') == false);
}

void test_operator_assignment() {
    Board board1;
    board1.PlaceMarker(1, 'X');
    Board board2;
    board2 = board1;  // Operator de atribuire

    assert(board2.PlaceMarker(2, 'O') == true);
    assert(board2.PlaceMarker(1, 'O') == false);
}

void test_check_winner() {
    Board board;
    board.PlaceMarker(1, 'X');
    board.PlaceMarker(2, 'X');
    board.PlaceMarker(3, 'X');  // Linie câștigătoare

    assert(board.CheckWinner() == 1);
}

int main() {
    test_default_constructor();
    test_copy_constructor();
    test_operator_assignment();
    test_check_winner();

    std::cout << "Toate testele pentru Board au trecut cu succes!\n";
    return 0;
}
