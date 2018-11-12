#include "ChessPiece.h"

ChessPiece::ChessPiece(const char* symbol)
{
	this->symbol = symbol;
}


ChessPiece::~ChessPiece()
{
}

const char* ChessPiece::toString()
{
	return this->symbol;
}

