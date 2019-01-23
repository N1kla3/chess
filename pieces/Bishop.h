#pragma once
#include "ChessPiece.h"
#include <cstring>


class Bishop :
	public ChessPiece
{
public:
	Bishop(bool);
	virtual void canMove(int, int, ChessBoard*)override;
private:
    void oneDirection(int, int, int, ChessBoard*);
	~Bishop();
};

