#pragma once
#include <string>

class ChessBoard;

using namespace::std;

class ChessPiece
{
public:
	const char* symbol;
	bool blocked;
	string side;
	ChessPiece(const char*, bool, string);
	~ChessPiece();
	const char* toString();
    virtual void canMove(int i, int j, ChessBoard* rboard);
};

