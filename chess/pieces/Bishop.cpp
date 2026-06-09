#include "Bishop.hpp"

std::string Bishop::toString() const {
    if (getColor() == Color::WHITE) {
        return "B";
    } else { return "b"; };
}