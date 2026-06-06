#pragma once
#include <vector>

#include "Piece.hpp"

class Board {

    private:
        int rows = 8;
        int columns = 8;
        Piece places[8][8];

    public:
        Board();

        Piece piece(int&row, int& column);
        void placePiece(Piece& piece, Position& position);

};

