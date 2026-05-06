#include <iostream>
#include "Anzeige.h"

using namespace std;

void Anzeige::clearScreen(){
  cout << "\033[2J\033[1;1H";
};

void Anzeige::zeichneMenu(){
  clearScreen();
  cout << "";

};

void Anzeige::zeichneSpielfeld(Spielfeld& feld){
  //clearScreen();
  //int h = feld.getHöhe();
  //int b = feld.getBreite();

};
