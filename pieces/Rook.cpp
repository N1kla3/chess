#include "../ChessBoard.h"
#include "Rook.h"


Rook::Rook(bool side) : ChessPiece(side)
{
    symbol = "R";
}


Rook::~Rook()
{
}
vector<int>* Rook::canMove(int i, int j, ChessBoard* rboard) {
    vec.clear();
    chooseDirection(i, j, DOWN, rboard);
    chooseDirection(i, j, UP, rboard);
    chooseDirection(i, j, LEFT, rboard);
    chooseDirection(i, j, RIGHT, rboard);
    return &vec;

}

void Rook::chooseDirection(int i, int j, direction direction, ChessBoard* rboard) {
    column = i;
    row = j;

    while(((column >= 0) && (column < rboard->BOARD_LENGTH)) && ((row >= 0) && (row < rboard->BOARD_LENGTH))){

        checkingInGivenDirection(direction);

        if((column >= rboard->BOARD_LENGTH) || (row >= rboard->BOARD_LENGTH) || (row < 0) ||(column < 0)){
            break;
        }
        if((rboard->board[column][row] != nullptr) && (rboard->board[i][j] != nullptr)){
            if((rboard->board[column][row]->side == rboard->board[i][j]->side)){
                break;
            }
        }
        vec.push_back(column);
        vec.push_back(row);
        if (rboard->board[column][row] != nullptr){
            break;
        }

    }
}
void Rook::checkingInGivenDirection(direction direction){
    switch (direction){
        case DOWN: {
            column++;
            break;
        }
        case LEFT:{
            row--;
            break;
        }
        case UP:{
            column--;
            break;
        }
        case RIGHT:{
            row++;
            break;
        }
        default:{
            //throw;
        }

    }
}