#include <iostream>
#include "Anzeige.h"

using namespace std;

void Anzeige::clearScreen(){
  cout << "\033[2J\033[1;1H";
};

void Anzeige::zeichneMenu(){

};

void Anzeige::zeichneSpielfeld(Spielfeld& feld){

};
