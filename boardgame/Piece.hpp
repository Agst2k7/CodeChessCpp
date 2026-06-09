#pragma once
#include <string>
#include "Position.hpp"

class Piece {
    private:
        Position* pos;
    public:
        Piece() {
            pos = nullptr;
        }

        virtual std::string toString() const = 0;
};