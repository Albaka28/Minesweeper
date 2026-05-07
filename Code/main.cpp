#include <iostream>
#include <cmath>
#include "Logik/Spielfeld.h"
#include "Optik/Anzeige.h"
#include "Logik/MinenGeneration.h"
                                              // hier kommen dann die anderen Klassen hin
using namespace std; 


int main(){
Spielfeld spielfeld;
Anzeige anzeige;

  int eingabeHoehe; 
  int eingabeBreite;
  int eingabeRadius;
  int schwierigkeit = 80;

  cout << "Geben sie die Größe ihres Spielfeldes an: \n";
  cin >> eingabeHoehe;
  cin >> eingabeBreite;
  // cin >> eingabeRadius;

  // spielfeld.setHoehe(eingabeHoehe);
  // spielfeld.setBreite(eingabeBreite);
  // spielfeld.setRadius(eingabeRadius);

  // spielfeld.bauSpielfeld(spielfeld.getHoehe(), spielfeld.setBreite());
  // cout << "\nHier ist dein Donut:\n\n";
  // spielfeld.bauDonutSpielfeld(eingabeRadius);

  spielfeld.initialisierungSpielfeld(eingabeHoehe, eingabeBreite); 
  placeMinen(eingabeHoehe, eingabeBreite, schwierigkeit, spielfeld);
  anzeige.zeichneSpielfeld(spielfeld);
  return 0;
}
