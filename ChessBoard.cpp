#include "ChessBoard.h"
#include <iostream>

using namespace std;


ChessBoard::ChessBoard(){


		for (int i = 0; i < MAXLENGTH; i++) {
			for (int j = 0; j < MAXLENGTH; j++) {
				this->board[i][j] = new ChessPiece(" ", false, "empty");
			}
		}

		this->board[0][0] = new Rook("R", false, "black");
		this->board[0][7] = new Rook("R", false, "black");
		this->board[7][0] = new Rook("R", false, "white");
		this->board[7][7] = new Rook("R", false, "white");

		this->board[0][1] = new Knight("K", false, "black");
		this->board[0][6] = new Knight("K", false, "black");
		this->board[7][1] = new Knight("K", false, "white");
		this->board[7][6] = new Knight("K", false, "white");

		this->board[0][2] = new Bishop("B", false, "black");
		this->board[0][5] = new Bishop("B", false, "black");
		this->board[7][2] = new Bishop("B", false, "white");
		this->board[7][5] = new Bishop("B", false, "white");

		this->board[0][4] = new King("@", false, "black");
		this->board[7][4] = new King("@", false, "white");

		this->board[0][3] = new Queen("Q", false, "black");
		this->board[7][3] = new Queen("Q", false, "white");

		this->board[1][0] = new Pawn("P", false, "black");
		this->board[1][1] = new Pawn("P", false, "black");
		this->board[1][2] = new Pawn("P", false, "black");
		this->board[1][3] = new Pawn("P", false, "black");
		this->board[1][4] = new Pawn("P", false, "black");
		this->board[1][5] = new Pawn("P", false, "black");
		this->board[1][6] = new Pawn("P", false, "black");
		this->board[1][7] = new Pawn("P", false, "black");
		this->board[6][0] = new Pawn("P", false, "white");
		this->board[6][1] = new Pawn("P", false, "white");
		this->board[6][2] = new Pawn("P", false, "white");
		this->board[6][3] = new Pawn("P", false, "white");
		this->board[6][4] = new Pawn("P", false, "white");
		this->board[6][5] = new Pawn("P", false, "white");
		this->board[6][6] = new Pawn("P", false, "white");
		this->board[6][7] = new Pawn("P", false, "white");

}

std::string ChessBoard::toString() {
	string result = "";

	for (int i = 0; i < 8; i++)
	{
		for (int j = 0; j < 8; j++) {
			result += this->board[i][j]->symbol;
			
		}
		result += "\n";
	}

	return result;

}void ChessBoard::display(){      //display a board
    for (int i = 0; i < 8; i++)
    {	cout <<"---------------------------------\n| ";

        for (int j = 0; j < 8; j++) {
            cout << this->board[i][j]->symbol << " | ";
        }
		cout << i << endl;
    }
    cout << "---------------------------------\n";
    cout << "  0   1   2   3   4   5   6   7  \n\n";
}
//method that make variable "blocked" equals false
void ChessBoard::block(){
    for(int i = 0;i < 8; i++){
        for(int j = 0;j < 8; j++){
            this->board[i][j]->blocked = false;
        }
    }

}
ChessBoard::~ChessBoard(){
 
}
