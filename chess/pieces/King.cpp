#include "King.hpp"

std::string King::toString() {
    if (getColor() == Color::WHITE) {
        return "K";
    } else { return "k"; };
}