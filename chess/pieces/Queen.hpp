#pragma once
#include <string>
#include "../ChessPiece.hpp"


class Queen : public ChessPiece {

    public:
        Queen(Color color) : ChessPiece(color) {}

        std::string toString() const override;
};