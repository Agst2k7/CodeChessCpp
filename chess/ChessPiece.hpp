#pragma once
#include "../boardgame/Piece.hpp"
#include "Color.hpp"

class ChessPiece : public Piece {
    private:
        Color color;
    
        public:
            ChessPiece(Color _color) : Piece() {
                color = _color;
            }

            Color getColor() const {
                return color;
            }
};