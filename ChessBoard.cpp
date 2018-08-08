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

		this->board[7][0] = new Rook("r");
		this->board[7][0] = new Rook("r");
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
