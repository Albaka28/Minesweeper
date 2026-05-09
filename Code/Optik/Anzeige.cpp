#include <iostream>
#include "Anzeige.h"

using namespace std;

void Anzeige::clearScreen(){
  cout << "\033[2J\033[1;1H";
};

void Anzeige::zeichneMenu(){
  bool imMenu = true;
  int auswahl = 0;

  while(imMenu){
    clearScreen();
        cout << "====================================\n";
        cout << "       MINESWEEPER TERMINAL         \n";
        cout << "====================================\n\n";

        cout << "1. Neues Spiel \n";
        cout << "2. Einstellungen \n";
        cout << "3. Beenden \n";

        cout << flush;
        cin >> auswahl;

        switch (auswahl) {
          case 1:
            imMenu = false;
            break;

          case 2:
            cout << "später mache ich das frfr \n";
            break;

          case 3:
            exit(0);
            break;

          default:
            cout << "Gib richitg ein du kek!";
            break;
        }
  }

};

void Anzeige::zeichneSpielfeld(Spielfeld& feld){
  clearScreen();
  
  int h = feld.getHoehe();
  int b = feld.getBreite();
  char** meinArray = feld.getFeld();

  for(int i = 0; i < h; i++){
    for(int j = 0; j < b; j++){
      if(feld.istSichtbar(i, j)){ 
        cout << "[ " << feld.getFeld()[i][j] << " ] ";
        }else{
            cout << "[ # ] "; // Zeigt ein verdecktes Feld an
        }
    }
    cout << "\n\n";
}
};
