#include "../ChessBoard.h"
#include "Knight.h"
#include <iostream>


Knight::Knight(bool side) : ChessPiece(side)
{
    symbol = "K";
}


Knight::~Knight()
{
}
vector<int>* Knight::canMove(int column, int row, ChessBoard* rBoard) {
    vec.clear();

    int a = column - 1;
    int b = row - 2;
    int columnAdd = 2;
    int rowAdd = 0;
    int addcolumnAdd = -1;
    int addrowAdd = 1;


    for(int i = 0; i < 8; i++){
        a = a + columnAdd;
        b = b + rowAdd;
        columnAdd = columnAdd + addcolumnAdd;
        rowAdd = rowAdd + addrowAdd;

        if(columnAdd == -2){
            addcolumnAdd = 1;
        }
        if(rowAdd == 2){
            addrowAdd = -1;
        }
        if(rowAdd == -2){
            addrowAdd = 1;
        }
        if((a >= rBoard->BOARD_LENGTH) || (b >= rBoard->BOARD_LENGTH) || (b < 0) ||(a < 0)){
            continue;
        }
        if((rBoard->board[column][row] != nullptr) && (rBoard->board[a][b] != nullptr)){
            if((rBoard->board[column][row]->side == rBoard->board[a][b]->side)){
                continue;
            }
        }if(i == 0){
            int x = column - 1;
            int y = row - 2;
            vec.push_back(x);
            vec.push_back(y);
        }else{
            vec.push_back(a);
            vec.push_back(b);
        }
    }
    return &vec;
}
