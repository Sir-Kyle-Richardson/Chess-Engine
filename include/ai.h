#pragma once

#include "move.h"

namespace Chess
{
int aiMove(Board board, BoardHistory boardHistory, Color turn, int depth,
           Move _bm, int alpha = -400, int beta = 400);
}