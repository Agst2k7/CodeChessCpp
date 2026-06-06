#pragma once
#include "Board.hpp"
#include "Position.hpp"

class Piece {

    private:
        Position position;
        Board board;

    public:
        Piece();
        Piece(Board board);
    
    protected:
        Board getBoard();
};
