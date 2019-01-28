#include "Bishop.h"
#include "../ChessBoard.h"
#include "iostream"
#include <vector>


Bishop::Bishop(bool side):ChessPiece(side)
{
    symbol = "B";
}


Bishop::~Bishop()
{

}
//function writes number of squares which figure can move
vector<int>* Bishop::canMove(int i, int j, ChessBoard* rboard){
    vec.clear();
    Bishop::oneDirection(i, j, RIGHT_DOWN, rboard);
    Bishop::oneDirection(i, j, LEFT_DOWN, rboard);
    Bishop::oneDirection(i, j, RIGHT_UP, rboard);
    Bishop::oneDirection(i, j, LEFT_UP, rboard);
    return &vec;
}
 void Bishop::oneDirection(int i, int j, Direction direction, ChessBoard* rboard){
    int column = i;
    int row = j;

    while(((column >= 0) && (column < rboard->BOARD_LENGTH)) && ((row >= 0) && (row < rboard->BOARD_LENGTH))){

        switch (direction){
            case RIGHT_DOWN: {

                column++;
                row++;
                break;
            }
            case LEFT_DOWN:{
                column++;
                row--;
                break;
            }
            case RIGHT_UP:{
                column--;
                row++;
                break;
            }
            case LEFT_UP:{
                column--;
                row--;
                break;
            }
            default:{
                //throw;
            }

        }

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