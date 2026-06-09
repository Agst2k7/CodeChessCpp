#include "boardgame/Board.hpp"
#include "UI.hpp"
#include "chess/pieces/King.hpp"


int main() {

    Board b;
    King k(WHITE);
    Position pos(2, 3);



    b.placePiece(k, pos);

    drawBoard(b);

    return 0;
}