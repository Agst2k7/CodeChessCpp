#include "Pawn.hpp"

std::string Pawn::toString() const {
    if (getColor() == Color::WHITE) {
        return "P";
    } else { return "p"; };
}