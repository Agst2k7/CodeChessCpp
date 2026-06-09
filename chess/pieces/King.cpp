#include "King.hpp"

std::string King::toString() const {
    if (getColor() == Color::WHITE) {
        return "K";
    } else { return "k"; };
}