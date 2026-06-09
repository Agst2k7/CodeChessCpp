#pragma once
#include <string>
#include "../ChessPiece.hpp"


class Pawn : public ChessPiece {

    public:
        Pawn(Color color) : ChessPiece(color) {}

        std::string toString() const override;
};