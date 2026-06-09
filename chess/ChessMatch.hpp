#pragma once
#include "../boardgame/Board.hpp"
#include "Color.hpp"
#include "../boardgame/Position.hpp"
#include "../boardgame/Utils.hpp"

#include "pieces/King.hpp"
#include "pieces/Queen.hpp"
#include "pieces/Rook.hpp"
#include "pieces/Bishop.hpp"
#include "pieces/Knight.hpp"
#include "pieces/Pawn.hpp"

class ChessMatch {
    private:
        Board board;
        Color turn;

        King wK {King{WHITE}}, bK {King{BLACK}};
        Queen wQ {Queen{WHITE}}, bQ{Queen{BLACK}};
        Rook wR {Rook{WHITE}}, bR {Rook{BLACK}};
        Bishop wB{Bishop{WHITE}}, bB{Bishop{BLACK}};
        Knight wN{Knight{WHITE}}, bN{Knight{BLACK}};
        Pawn wP1{Pawn{WHITE}}, wP2{Pawn{WHITE}}, wP3{Pawn{WHITE}}, wP4{Pawn{WHITE}}, wP5{Pawn{WHITE}}, wP6{Pawn{WHITE}}, wP7{Pawn{WHITE}}, wP8{Pawn{WHITE}};
        Pawn bP1{Pawn{BLACK}}, bP2{Pawn{BLACK}}, bP3{Pawn{BLACK}}, bP4{Pawn{BLACK}}, bP5{Pawn{BLACK}}, bP6{Pawn{BLACK}}, bP7{Pawn{BLACK}}, bP8{Pawn{BLACK}};

        Position p1, p2 , p3, p4, p5, p6, p7, p8, p9, p10, p11, p12, p13, p14, p15, p16, p17, p18, p19, p20, p21, p22, p23, p24, p25, p26, p27, p28, p29, p30, p31, p32;
        
        
        

    public:
        ChessMatch()
        : board(), turn(WHITE),
        p1(fromChessNotation("A1")),
        p2(fromChessNotation("B1")),
        p3(fromChessNotation("C1")),
        p4(fromChessNotation("D1")),
        p5(fromChessNotation("E1")),
        p6(fromChessNotation("F1")),
        p7(fromChessNotation("G1")),
        p8(fromChessNotation("H1")),
        p9(fromChessNotation("A2")),
        p10(fromChessNotation("B2")),
        p11(fromChessNotation("C2")),
        p12(fromChessNotation("D2")),
        p13(fromChessNotation("E2")),
        p14(fromChessNotation("F2")),
        p15(fromChessNotation("G2")),
        p16(fromChessNotation("H2")),
        p17(fromChessNotation("A8")),
        p18(fromChessNotation("B8")),
        p19(fromChessNotation("C8")),
        p20(fromChessNotation("D8")),
        p21(fromChessNotation("E8")),
        p22(fromChessNotation("F8")),
        p23(fromChessNotation("G8")),
        p24(fromChessNotation("H8")),
        p25(fromChessNotation("A7")),
        p26(fromChessNotation("B7")),
        p27(fromChessNotation("C7")),
        p28(fromChessNotation("D7")),
        p29(fromChessNotation("E7")),
        p30(fromChessNotation("F7")),
        p31(fromChessNotation("G7")),
        p32(fromChessNotation("H7"))

        {}

        void initialSetup();

        const Board& getBoard() const;
};