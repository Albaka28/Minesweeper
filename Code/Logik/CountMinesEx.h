#ifndef COUNTMINESEX_H
#define COUNTMINESEX_H
#include "Spielfeld.h"

int countMinesAroundTarget(int SizeX, int SizeY, Spielfeld& field);

void countMines(int SizeX, int SizeY, Spielfeld& field);

bool isMine(int posX, int posY, Spielfeld& field);

#endif