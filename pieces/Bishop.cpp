#include "Bishop.h"
#include "../ChessBoard.h"


Bishop::Bishop(const char * symbol, bool blocked, string side):ChessPiece(symbol, blocked, side)
{

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
    const int BOARDMIN = 0;
    const int BOARDMAX = 7;

    while(((a >= BOARDMIN) && (a <= BOARDMAX)) && ((b >= BOARDMIN) && (b <= BOARDMAX))){

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

        if((a > 7) || (b > 7) || (b < 0) ||(a < 0)|| (rboard->board[a][b]->side == rboard->board[i][j]->side)){
            break;
        }
        rboard->board[a][b]->blocked = true;
        if (strncmp(rboard->board[a][b]->symbol, " ", 1) != 0){
            break;
        }
    }
}