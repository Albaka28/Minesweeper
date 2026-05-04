#include <iostream>
using namespace std;

class Spielfeld{
  public:
  int höhe = 0;
  int breite = 0;
  int anzahlBomben = 0;                         // weiß nicht wie es im game sein wird (Maxi)

  void setHöhe(int h){höhe = h;}
  void setBreite(int b){breite = b;}
  int getHöhe(){return höhe;}
  int getBreite(){return breite;}

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
};

int main(){
  Spielfeld spielfeld;
  int eingabeHöhe, eingabeBreite;

  cout << "Geben sie die Größe ihres Spielfeldes an: \n";
  cin >> eingabeHöhe;
  cin >> eingabeBreite;

  spielfeld.setHöhe(eingabeHöhe);
  spielfeld.setBreite(eingabeBreite);

  spielfeld.bauSpielfeld(spielfeld.getHöhe(), spielfeld.setBreite());
  return 0;
}
