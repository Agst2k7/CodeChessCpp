#include "Rook.hpp"

std::string Rook::toString() const {
    if (getColor() == Color::WHITE) {
        return "R";
    } else { return "r"; };
}