#ifndef SETUPMINES_H
#define SETUPMINES_H
#include "Spielfeld.h"
#include "CountMines.h"

void placeMines(int SizeX, int SizeY, int difficulty, Spielfeld& field);    // habe hier noch ein Objkt erstellt

void randomPlacement(int SizeX, int SizeY, Spielfeld& field);

#endif
