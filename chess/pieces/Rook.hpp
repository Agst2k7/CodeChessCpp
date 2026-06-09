#pragma once
#include <string>
#include "../ChessPiece.hpp"


class Rook : public ChessPiece {

    public:
        Rook(Color color) : ChessPiece(color) {}

        std::string toString() const override;
};