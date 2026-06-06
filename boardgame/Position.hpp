#pragma once

class Position {
    
    private:
        int row;
        int column;

    public:

        Position(int& row, int& column);

        int getRow();
        int getColumn();
};