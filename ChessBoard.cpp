#include "stdafx.h"
#include "ChessBoard.h"


ChessBoard::ChessBoard(){
	
		for (int i = 0; i < 8; i++) {
			for (int j = 0; j < 8; j++) {
				this->board[i][j] = new ChessPiece("*");
			}
		}

		this->board[0][0] = new Rook("R");
		this->board[0][7] = new Rook("R");
		this->board[7][0] = new Rook("R");
		this->board[7][7] = new Rook("R");

		this->board[0][1] = new Knight("K");
		this->board[0][6] = new Knight("K");
		this->board[7][1] = new Knight("K");
		this->board[7][6] = new Knight("K");

		this->board[0][2] = new Bishop("B");
		this->board[0][5] = new Bishop("B");
		this->board[7][2] = new Bishop("B");
		this->board[7][5] = new Bishop("B");

		this->board[0][4] = new King("@");
		this->board[7][4] = new King("@");

		this->board[0][3] = new Queen("Q");
		this->board[7][3] = new Queen("Q");

		this->board[1][0] = new Pawn("P");
		this->board[1][1] = new Pawn("P");
		this->board[1][2] = new Pawn("P");
		this->board[1][3] = new Pawn("P");
		this->board[1][4] = new Pawn("P");
		this->board[1][5] = new Pawn("P");
		this->board[1][6] = new Pawn("P");
		this->board[1][7] = new Pawn("P");
		this->board[6][0] = new Pawn("P");
		this->board[6][1] = new Pawn("P");
		this->board[6][2] = new Pawn("P");
		this->board[6][3] = new Pawn("P");
		this->board[6][4] = new Pawn("P");
		this->board[6][5] = new Pawn("P");
		this->board[6][6] = new Pawn("P");
		this->board[6][7] = new Pawn("P");

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
}

ChessBoard::~ChessBoard(){
 
}
