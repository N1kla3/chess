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

    int a = i;
    int b = j;

    while(((a >= 0) && (a <= 7)) && ((b >= 0) && (b <= 7))){
        a--;
        b--;
        if((a < 0) || (b < 0)||(rboard->board[a][b]->side == rboard->board[i][j]->side)){
            break;
        }
        rboard->board[a][b]->blocked = true;
        if (strncmp(rboard->board[a][b]->symbol, " ", 1) != 0){
            break;
        }
    }
    a = i;
    b = j;

    while(((a >= 0) && (a <= 7)) && ((b >= 0) && (b <= 7))){

        a++;
        b--;
        if((a > 7) || (b < 0)||(rboard->board[a][b]->side == rboard->board[i][j]->side)){
            break;
        }
        rboard->board[a][b]->blocked = true;
        if (strncmp(rboard->board[a][b]->symbol, " ", 1) != 0){
            break;
        }
    }
    a = i;
    b = j;

    while(((a >= 0) && (a <= 7)) && ((b >= 0) && (b <= 7))){

        a--;
        b++;
        if((a < 0) || (b > 7) || (rboard->board[a][b]->side == rboard->board[i][j]->side)){
            break;
        }
        rboard->board[a][b]->blocked = true;
        if (strncmp(rboard->board[a][b]->symbol, " ", 1) != 0){
            break;
        }
    }
    a = i;
    b = j;

    while(((a >= 0) && (a <= 7)) && ((b >= 0) && (b <= 7))){

        a++;
        b++;
        if((a > 7) || (b > 7)||(rboard->board[a][b]->side == rboard->board[i][j]->side)){
            break;
        }
        rboard->board[a][b]->blocked = true;
        if (strncmp(rboard->board[a][b]->symbol, " ", 1) != 0){
            break;
        }
    }
}