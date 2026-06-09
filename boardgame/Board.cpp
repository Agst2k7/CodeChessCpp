#include "Board.hpp"

Piece* Board::piece(const Position& pos) const {
    return grid[pos.getRow()][pos.getColumn()];
}

bool Board::isThereAPiece(const Position& pos) const {
    return piece(pos) != nullptr;
}

void Board::placePiece(Piece& piece, Position& pos) {
    grid[pos.getRow()][pos.getColumn()] = &piece;
}
