#include <iostream>
#include <cmath>
#include "Spielfeld.h"
#include "SetUpMines.h"
#include "ActionOnClick.h"                                            // hier kommen dann die anderen Klassen hin
#include "Anzeige.h"
#include "CountMinesEx.h"

using namespace std; 

int checkNachbarn(int x, int y, Spielfeld& spielfeld){
  char** feld = spielfeld.getFeld();
  char wert = feld[x][y];
  if(wert == 'M') return -1;
  return wert - '0';
}

bool checkNiederlage(int x, int y, Spielfeld& spielfeld){
  return spielfeld.getFeld()[x][y] == 'M';
}

bool checkSieg(int x, int y, Spielfeld& spielfeld){
  // TODO einfach nur gucken wie viele Felder noch frei sind
  return false;
}

void feldAufdecken(int x, int y, Spielfeld& spielfeld){
  spielfeld.setSichtbar(x, y);
  cout << "Feld [" << x << "][" << y << "] wurde entblößt" << spielfeld.getFeld()[x][y] << "\n";
}

int main(){
Spielfeld spielfeld;
Anzeige anzeige;

  int eingabeHoehe = 15;
  int eingabeBreite = 15;
  int schwierigkeit = 15;

  spielfeld.initialisierungSpielfeld(eingabeHoehe, eingabeBreite); 
  placeMines(eingabeHoehe, eingabeBreite, schwierigkeit, spielfeld);
  //placeNumbers(eingabeHoehe, eingabeBreite, spielfeld);

  bool gameOver = false;
  char aktion;
  int x, y;

  while(!gameOver){
    anzeige.zeichneSpielfeld(spielfeld);

    cout << "Aktion wählen (a = aufdecken, f = flagge): ";
    cin >> aktion;
    cout << "X-Koordinate: (Spalte 0-" << eingabeBreite - 1 << "): ";
    cin >> x;
    cout << "X-Koordinate: (Zeile 0-" << eingabeHoehe - 1 << "): ";
    cin >> y;

    if(aktion == 'a'){
      if(checkNiederlage(x, y, spielfeld)){
        cout << "\n Bamm! bist auf eine Mine drauf. GAME OVER! \n";
        gameOver = true;
      }else{
        feldAufdecken(x, y, spielfeld);
        if(checkSieg(x, y, spielfeld)){
          cout << "Gewonnen!! Uhu, gut gemacht.";
          gameOver = true;
        }
      }
    }else if(aktion == 'f'){
      //TODO flaggen logik implementieren Maxi!
      cout << "Flagge auf " << x << ", " << y << "\n";
    }else{
      cout << "Gib was richtiges ein du kek. (a oder f)";
    }

  }

  return 0;
}
