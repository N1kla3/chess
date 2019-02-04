#pragma once
#include <string>
#include <vector>

class ChessBoard;

using namespace::std;

class ChessPiece
{
public:
	const char* symbol;
    bool side;//TRUE - white, FALSE - black
	ChessPiece(bool);
	~ChessPiece();
	const char* toString();
    virtual vector<int>* canMove(int i, int j, ChessBoard* rboard) = 0;
};

