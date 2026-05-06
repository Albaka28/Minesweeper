#ifndef ANZEIGE_H
#define ANZEIGE_H
#include "../Logik/Spielfeld.h"

class Anzeige{
  public:
    void clearScreen();
    void zeichneSpielfeld(Spielfeld& feld);
    void zeichneMenu();
};
#endif

