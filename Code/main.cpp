#include <iostream>
#include <cmath>
#include "Logik/Spielfeld.h"
#include "Optik/Anzeige.h"
#include "Logik/MinenGeneration.h"
                                              // hier kommen dann die anderen Klassen hin
using namespace std; 

int checkNachbarn(int x, int y, Spielfeld& spielfeld){
  // TODO Maxi hier die logik hihi
  return 0;
}

bool checkNiederlage(int x, int y, Spielfeld& spielfeld){
  // TODO Hier nur ob auf dem Feld x y eine Bombe ist
  return 0;
}

bool checkSieg(int x, int y, Spielfeld& spielfeld){
  // TODO einfach nur gucken wie viele Felder noch frei sind
  return false;
}

void feldAufdecken(int x, int y, Spielfeld& spielfeld){
  // TODO keine Ahnung wie man das umsetzen soll 
}



int main(){
Spielfeld spielfeld;
Anzeige anzeige;

  int eingabeHoehe = 10;
  int eingabeBreite = 10;
  int schwierigkeit = 80;

  spielfeld.initialisierungSpielfeld(eingabeHoehe, eingabeBreite); 
  placeMinen(eingabeHoehe, eingabeBreite, schwierigkeit, spielfeld);

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

    if(aktion = 'a'){
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
