#include <iostream>
#include <cmath>
#include "Logik/Spielfeld.h"
                                              // hier kommen dann die anderen Klassen hin
using namespace std; 


int main(){
Spielfeld spielfeld;

  int eingabeHöhe; 
  int eingabeBreite;
  int eingabeRadius;

  cout << "Geben sie den Radius ihres Spielfeldes an: \n";
  // cin >> eingabeHöhe;
  // cin >> eingabeBreite;
  cin >> eingabeRadius;

  // spielfeld.setHöhe(eingabeHöhe);
  // spielfeld.setBreite(eingabeBreite);
  spielfeld.setRadius(eingabeRadius);

  // spielfeld.bauSpielfeld(spielfeld.getHöhe(), spielfeld.setBreite());
  cout << "\nHier ist dein Donut:\n\n";
  spielfeld.bauDonutSpielfeld(eingabeRadius);
  return 0;
}
