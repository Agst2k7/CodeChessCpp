#pragma once
#include <string>
#include "../ChessPiece.hpp"


class Knight : public ChessPiece {

    public:
        Knight(Color color) : ChessPiece(color) {}

        std::string toString() const override;
};