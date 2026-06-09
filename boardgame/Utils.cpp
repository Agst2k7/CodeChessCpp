#include "Utils.hpp"


int letterToInt(char c) {
    if (c >= 'A' && c <= 'Z') {
        c += 'a' - 'A';
    }

    return c - 'a';
}

Position fromChessNotation(const std::string& notation) {
    int row = 8 - (notation[1] - '0');
    int column = letterToInt(notation[0]);

    return Position(row, column);
}