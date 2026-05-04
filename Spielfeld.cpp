#include <iostream>
using namespace std;

class Spielfeld{
  public:
  int höhe = 0;
  int breite = 0;
  int anzahlBomben = 0;                         // weiß nicht wie es im game sein wird (Maxi)

  void setHöhe(int höhe){
    cin << höhe;
  }
  void setBreite(int breite){
    cin << breite;
  }
  
  void bauSpielfeld(int höhe, int breite){


   for(int i = 0; i < höhe; i++){
    cout << "[] ";
      for(int j = 0; j < breite; j++){
        cout << "[] ";
      }
      cout << "\n";
  }
  cout << "\n";
  




  }
};

int main(){

}
