#include "ChessBoard.h"
#include <iostream>

using namespace std;


ChessBoard::ChessBoard(){


		for (int i = 0; i < BOARD_LENGTH; i++) {
			for (int j = 0; j < BOARD_HEIGHT; j++) {
				this->board[i][j] = new ChessPiece("empty");
			}
		}

		this->board[0][0] = new Rook("black");
		this->board[0][7] = new Rook("black");
		this->board[7][0] = new Rook("white");
		this->board[7][7] = new Rook("white");

		this->board[0][1] = new Knight("black");
		this->board[0][6] = new Knight("black");
		this->board[7][1] = new Knight("white");
		this->board[7][6] = new Knight("white");

		this->board[0][2] = new Bishop("black");
		this->board[0][5] = new Bishop("black");
		this->board[7][2] = new Bishop("white");
		this->board[7][5] = new Bishop("white");
		this->board[0][4] = new King("black");
		this->board[7][4] = new King("white");

		this->board[0][3] = new Queen("black");
		this->board[7][3] = new Queen("white");

		for(int i = 0;i < BOARD_HEIGHT;i++){
            this->board[1][i] = new Pawn("black");
            this->board[6][i] = new Pawn("white");
		}

}

std::string ChessBoard::toString() {
	string result = "";

	for (int i = 0; i < BOARD_LENGTH; i++)
	{
		for (int j = 0; j < BOARD_HEIGHT; j++) {
			result += this->board[i][j]->symbol;
			
		}
		result += "\n";
	}

	return result;

}void ChessBoard::display(){      //display a board
    for (int i = 0; i < BOARD_LENGTH; i++)
    {	cout <<"---------------------------------\n| ";

        for (int j = 0; j < BOARD_HEIGHT; j++) {
            cout << this->board[i][j]->symbol << " | ";
        }
		cout << i << endl;
    }
    cout << "---------------------------------\n";
    cout << "  0   1   2   3   4   5   6   7  \n\n";
}
//method that make variable "blocked" equals false
void ChessBoard::block(){
    for(int i = 0;i < BOARD_LENGTH; i++){
        for(int j = 0;j < BOARD_HEIGHT; j++){
            this->board[i][j]->blocked = false;
        }


    }

}
ChessBoard::~ChessBoard(){
 
}
