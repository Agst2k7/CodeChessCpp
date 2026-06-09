#include "ChessMatch.hpp"


void ChessMatch::initialSetup() {
    // WHITE
    board.placePiece(wR, p1);
    board.placePiece(wN, p2);
    board.placePiece(wB, p3);
    board.placePiece(wQ, p4);
    board.placePiece(wK, p5);
    board.placePiece(wB, p6);
    board.placePiece(wN, p7);
    board.placePiece(wR, p8);
    board.placePiece(wP1, p9);
    board.placePiece(wP2, p10);
    board.placePiece(wP3, p11);
    board.placePiece(wP4, p12);
    board.placePiece(wP5, p13);
    board.placePiece(wP6, p14);
    board.placePiece(wP7, p15);
    board.placePiece(wP8, p16);
    // BLACK
    board.placePiece(bR, p17);
    board.placePiece(bN, p18);
    board.placePiece(bB, p19);
    board.placePiece(bQ, p20);
    board.placePiece(bK, p21);
    board.placePiece(bB, p22);
    board.placePiece(bN, p23);
    board.placePiece(bR, p24);
    board.placePiece(bP1, p25);
    board.placePiece(bP2, p26);
    board.placePiece(bP3, p27);
    board.placePiece(bP4, p28);
    board.placePiece(bP5, p29);
    board.placePiece(bP6, p30);
    board.placePiece(bP7, p31);
    board.placePiece(bP8, p32);
    
}

const Board& ChessMatch::getBoard() const{
    return board;
}