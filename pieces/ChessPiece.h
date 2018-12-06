#pragma once
#include <string>

class ChessBoard;

using namespace::std;

class ChessPiece
{
public:
	const char* symbol;
	bool blocked;
	const string* side;
	ChessPiece(bool, const string&);
	~ChessPiece();
	const char* toString();
    virtual void canMove(int i, int j, ChessBoard* rboard);
};

