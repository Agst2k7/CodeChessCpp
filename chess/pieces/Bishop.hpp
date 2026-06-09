#pragma once
#include <string>
#include "../ChessPiece.hpp"


class Bishop : public ChessPiece {

    public:
        Bishop(Color color) : ChessPiece(color) {}

        std::string toString() const override;
};