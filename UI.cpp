#include "UI.hpp"

#include <iostream>



void drawBoard(const Board& board) {
    bool isWhite;

    for(int r=0; r<8; ++r) {
        if (r%2 == 0) { isWhite = true; }
        else { isWhite = false; }
        std::cout << (8-r) << " ";
        for(int c=0; c<8; ++c, isWhite = !isWhite) {
            Position pos(r, c);
            if(board.isThereAPiece(pos)) {
                
            } else {
            if (isWhite) {
                std::cout << "=";
            } else {
                std::cout << "-";
            } }
            std::cout << " ";
        } std::cout << '\n';
    } 
    std::cout << "  A B C D E F G H" << '\n';
    
}

