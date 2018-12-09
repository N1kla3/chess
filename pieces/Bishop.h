#pragma once
#include "ChessPiece.h"
#include <cstring>


class Bishop :
	public ChessPiece
{
public:
	const int BOARDMIN = 0;
	const int BOARDMAX = 7;
	Bishop(bool, const string&);
	virtual void canMove(int, int, ChessBoard*)override;
private:
    void oneDirection(int, int, int, ChessBoard*);
	~Bishop();
};

