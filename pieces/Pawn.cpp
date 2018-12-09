
#include "Pawn.h"


Pawn::Pawn(bool blocked, const string& side):ChessPiece(blocked, side)
{
    symbol = "P";
}


Pawn::~Pawn()
{
}
