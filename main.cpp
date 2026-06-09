
#include "UI.hpp"
#include "chess/ChessMatch.hpp"


int main() {

    ChessMatch chessmatch;
    chessmatch.initialSetup();

    drawBoard(chessmatch.getBoard());

    return 0;
}