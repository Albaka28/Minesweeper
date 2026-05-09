#ifndef COUNTMINES_H
#define COUNTMINES_H
#include "Spielfeld.h"

void placeNumbers(int größe_x, int größe_y, Spielfeld& spielfeld);

int countMinesAroundTarget(int größe_x, int größe_y, Spielfeld& spielfeld);

int countMinesAroundTargetNorth(int größe_x, int größe_y, Spielfeld& spielfeld);

int countMinesAroundTargetEast(int größe_x, int größe_y, Spielfeld& spielfeld);

int countMinesAroundTargetSouth(int größe_x, int größe_y, Spielfeld& spielfeld);

int countMinesAroundTargetWest(int größe_x, int größe_y, Spielfeld& spielfeld);

int countMinesAroundTargetCornerLT(int posX, int posY, Spielfeld& spielfeld);

int countMinesAroundTargetCornerLB(int posX, int posY, Spielfeld& spielfeld);

int countMinesAroundTargetCornerRT(int posX, int posY, Spielfeld& spielfeld);

int countMinesAroundTargetCornerRB(int posX, int posY, Spielfeld& spielfeld);

void countMinesCenter(int größe_x, int größe_y, Spielfeld& spielfeld);

void countMinesNorth(int größe_x, int größe_y, Spielfeld& spielfeld);

void countMinesEast(int größe_x, int größe_y, Spielfeld& spielfeld);

void countMinesSouth(int größe_x, int größe_y, Spielfeld& spielfeld);

void countMinesWest(int größe_x, int größe_y, Spielfeld& spielfeld);

void countMinesCorner(int größe_x, int größe_y, Spielfeld& spielfeld);

bool isMine(int posX, int posY, Spielfeld& spielfeld);

#endif