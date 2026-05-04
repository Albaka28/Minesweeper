#include <iostream>
#include <cmath>

using namespace std;

class Spielfeld{
  public:
  int höhe = 0;
  int breite = 0;
  int radius = 0;                                // das schon mies cool
  int anzahlBomben = 0;                         // weiß nicht wie es im game sein wird (Maxi)

  void setHöhe(int h){höhe = h;}
  void setBreite(int b){breite = b;}
  void setRadius(int r){radius = r;}
  int getHöhe(){return höhe;}
  int getBreite(){return breite;}
  int getRadius(){return breite;}

  void bauSpielfeld(int höhe, int breite){

   for(int i = 0; i < höhe; i++){
    cout << " [_] ";
      for(int j = 1; j < breite; j++){
        cout << " [_] ";
      }
      cout << " \n \n";
  }
  cout << "\n";
  }




  void bauDonutSpielfeld(int radius) {

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


};

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
