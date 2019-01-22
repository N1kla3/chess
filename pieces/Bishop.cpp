#include "Bishop.h"
#include "../ChessBoard.h"
#include "iostream"


Bishop::Bishop(const string& side):ChessPiece(side)
{
    symbol = "B";
}


Bishop::~Bishop()
{
}
//that override function make squares, that bishop can move, became TRUE
 void Bishop::canMove(int i, int j, ChessBoard* rboard){
    Bishop::oneDirection(i, j, 1, rboard);
    Bishop::oneDirection(i, j, 2, rboard);
    Bishop::oneDirection(i, j, 3, rboard);
    Bishop::oneDirection(i, j, 4, rboard);
}
 void Bishop::oneDirection(int i, int j, int direction, ChessBoard* rboard){
    int a = i;
    int b = j;

    while(((a >= 0) && (a < rboard->BOARD_LENGTH)) && ((b >= 0) && (b < rboard->BOARD_LENGTH))){

        switch (direction){
            case 1: {
                a++;
                b++;
                break;
            }
            case 2:{
                a++;
                b--;
                break;
            }
            case 3:{
                a--;
                b++;
                break;
            }
            case 4:{
                a--;
                b--;
                break;
            }
            default:{
                a++;
            }
        }

        if((a >= rboard->BOARD_LENGTH) || (b >= rboard->BOARD_LENGTH) || (b < 0) ||(a < 0)||
                                                    (rboard->board[a][b]->side == rboard->board[i][j]->side)){
            break;
        }
        cout << a << " " << b << endl;
        if (strncmp(rboard->board[a][b]->symbol, " ", 1) != 0){
            break;
        }
    }
}