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
  clearScreen();
  
  int h = feld.getHoehe();
  int b = feld.getBreite();
  char** meinArray = feld.getFeld();

  for(int i = 0; i < h; i++){
    for(int j = 0; j < b; j++){
      cout << "[" << meinArray[i][j] << "] ";
    }
    cout << "\n\n";
  }

};
