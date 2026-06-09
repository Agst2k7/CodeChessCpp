#include "Knight.hpp"

std::string Knight::toString() const {
    if (getColor() == Color::WHITE) {
        return "N";
    } else { return "n"; };
}