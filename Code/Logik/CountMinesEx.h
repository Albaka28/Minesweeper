#ifndef COUNTMINESEX_H
#define COUNTMINESEX_H
#include "Spielfeld.h"

int countMinesAroundTarget(int größe_x, int größe_y, Spielfeld& spielfeld);

void countMines(int größe_x, int größe_y, Spielfeld& spielfeld);

bool isMine(int posX, int posY, Spielfeld& spielfeld);

#endif