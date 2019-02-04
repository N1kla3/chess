#pragma once
#include "ChessPiece.h"

enum direction {DOWN, LEFT, UP, RIGHT} ;

class Rook :
	public ChessPiece
{
public:
	Rook(bool);
	~Rook();
	vector<int>* canMove(int, int, ChessBoard*)override;
	vector<int> vec;
private:
    int column;
    int row;
    void checkingInGivenDirection(direction);
    void chooseDirection(int, int, direction, ChessBoard*);
};

