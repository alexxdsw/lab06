#include "board.hpp"

Board::Board() {
    int count = 1;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            grid[i][j] = '0' + count++;
        }
    }
}

Board::Board(const Board& other) {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            grid[i][j] = other.grid[i][j];
        }
    }
}

Board& Board::operator=(const Board& other) {
    if (this != &other) {
        for (int i = 0; i < 3; i++) {
            for (int j = 0; j < 3; j++) {
                grid[i][j] = other.grid[i][j];
            }
        }
    }
    return *this;
}

bool Board::operator==(const Board& other) const {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (grid[i][j] != other.grid[i][j]) {
                return false;
            }
        }
    }
    return true;
}

std::istream& operator>>(std::istream& in, Board& board) {
    return in;
}

std::ostream& operator<<(std::ostream& out, const Board& board) {
    for (int i = 0; i < 3; i++) {
        out << " " << board.grid[i][0] << " | " << board.grid[i][1] << " | " << board.grid[i][2] << std::endl;
        if (i < 2) {
            out << "---|---|---" << std::endl;
        }
    }
    return out;
}

void Board::DrawBoard() {
    std::cout << *this;
}

bool Board::PlaceMarker(int slot, char marker) {
    int row = (slot - 1) / 3;
    int col = (slot - 1) % 3;

    if (grid[row][col] != 'X' && grid[row][col] != 'O') {
        grid[row][col] = marker;
        return true;
    }
    return false;
}

int Board::CheckWinner() {
    for (int i = 0; i < 3; i++) {
        if (grid[i][0] == grid[i][1] && grid[i][1] == grid[i][2]) {
            return 1;
        }
        if (grid[0][i] == grid[1][i] && grid[1][i] == grid[2][i]) {
            return 1;
        }
    }
    if (grid[0][0] == grid[1][1] && grid[1][1] == grid[2][2]) {
        return 1;
    }
    if (grid[0][2] == grid[1][1] && grid[1][1] == grid[2][0]) {
        return 1;
    }
    return 0;
}
