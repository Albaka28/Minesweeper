#ifndef ACTIONONCLICK_H
#define ACTIONONCLICK_H
#include "Spielfeld.h"


void FillEmptySpace(int PosX, int PosY, Spielfeld& spielfeld, Spielfeld& invisibleField);

void FillEmptySpaceRecursion(int PosX, int PosY, Spielfeld& spielfeld, Spielfeld& invisibleField);

#endif