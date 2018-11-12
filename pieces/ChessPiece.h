#pragma once
#include <string>

using namespace::std;

class ChessPiece
{
public:
	const char* symbol;
	ChessPiece(const char*);
	~ChessPiece();
	const char* toString();
};

