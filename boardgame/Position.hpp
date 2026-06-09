#pragma once

class Position {
    private:
        int row;
        int column;
    
        public:
            Position(int _row, int _column) {
                row = _row;
                column = _column;
            }

            int getRow() const {
                return row;
            }

            int getColumn() const {
                return column;
            }

            void setRow(int new_row) {
                row = new_row;
            }

            void setColumn(int new_column) {
                column = new_column;
            }
};