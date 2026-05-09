#ifndef COUNTMINES_H
#define COUNTMINES_H
#include "Spielfeld.h"

void placeNumbers(int größe_x, int größe_y, Spielfeld& spielfeld);

int countMinesAroundTarget(int größe_x, int größe_y);

int countMinesAroundTargetNorth(int größe_x, int größe_y);

int countMinesAroundTargetEast(int größe_x, int größe_y);

int countMinesAroundTargetSouth(int größe_x, int größe_y);

int countMinesAroundTargetWest(int größe_x, int größe_y);

int countMinesAroundTargetCornerLT(int posX, int posY);

int countMinesAroundTargetCornerLB(int posX, int posY);

int countMinesAroundTargetCornerRT(int posX, int posY);

int countMinesAroundTargetCornerRB(int posX, int posY);

void countMinesCenter(int größe_x, int größe_y);

void countMinesNorth(int größe_x, int größe_y);

void countMinesEast(int größe_x, int größe_y);

void countMinesSouth(int größe_x, int größe_y);

void countMinesWest(int größe_x, int größe_y);

void countMinesCorner(int größe_x, int größe_y);

bool isMine(int posX, int posY);

#endif