#include <iostream>
#include <cmath>
#include "Spielfeld.h"

using namespace std;

void Spielfeld::setHoehe(int h) { höhe = h; }
void Spielfeld::setBreite(int b) { breite = b; }
void Spielfeld::setRadius(int r) { radius = r; }

int Spielfeld::getHoehe() { return höhe; }
int Spielfeld::getBreite() { return breite; }
int Spielfeld::getRadius() { return radius; }

  void Spielfeld::bauSpielfeld(int höhe, int breite){

   for(int i = 0; i < höhe; i++){
    cout << " [_] ";
      for(int j = 1; j < breite; j++){
        cout << " [_] ";
      }
      cout << " \n \n";
  }
  cout << "\n";
  }

  void Spielfeld::bauDonutSpielfeld(int radius) {

        for (int i = -radius; i <= radius; i++) {
            for (int j = -radius; j <= radius; j++) {
                float distanz = sqrt(i * i + j * j);

                if (distanz >= radius / 3.0 && distanz < radius - 0.5 ) {
                    cout << "[_] ";
                } else {
                  cout << "    ";                   // Wenn es im Loch oder außerhalb des Donuts ist, drucken wir Leerzeichen
                }
            }
            cout << "\n\n";
        }
    }


