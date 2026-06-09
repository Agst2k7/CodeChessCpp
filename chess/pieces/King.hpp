#pragma once
#include "../ChessPiece.hpp"
#include <string>

class King : public ChessPiece {

    public:
        King(Color color) : ChessPiece(color) {}

        std::string toString();
};