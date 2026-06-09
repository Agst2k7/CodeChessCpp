#include "Queen.hpp"

std::string Queen::toString() const {
    if (getColor() == Color::WHITE) {
        return "Q";
    } else { return "q"; };
}