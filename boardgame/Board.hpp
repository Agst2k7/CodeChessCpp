#pragma once
#include "Position.hpp"
#include "Piece.hpp"

class Piece;

class Board {
    private:
        Piece* grid[8][8] {};

    public:
        void placePiece(Piece &piece, Position& pos);

        Piece* piece(const Position& pos) const;
        bool isThereAPiece(const Position& pos) const;
};