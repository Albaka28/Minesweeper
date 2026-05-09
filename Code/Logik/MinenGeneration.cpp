#include <random>
#include "MinenGeneration.h"
#include "Spielfeld.h"

using namespace std;


void placeMinen(int größe_x, int größe_y, int schwierigkeit, Spielfeld& spielfeld){

    int MinenListe[100];

    for (int i = 0; i < 100; i++){
        MinenListe[i] = 0;
    }

    // Zufallszeug NICHT ANFASSEN!
    random_device rd;
    mt19937 gen(rd());
    uniform_int_distribution<> dist(1,100);

    char** meinSpielfeld = spielfeld.getFeld();           // Funktion von Obj. anfragen UwU

    int feld[größe_x][größe_y];
    int counter = 0;
    int tmp = 0;

    // Füllt 2D-Array mit Zahlen 1-100
    for (int i = 0; i < größe_x; i++){
        for (int j = 0; j < größe_y; j++){
            tmp = dist(gen);
            feld[i][j] = tmp;
            MinenListe[tmp-1]++;
        }
    }
    int anzahlFelder = größe_x * größe_y;
    
    //Platziert Minen je nach Schwierigkeit
    for (int i = 0; i < größe_x; i++){
        for (int j = 0; j < größe_y; j++){
            if (feld[i][j] >= schwierigkeit){
                meinSpielfeld[i][j] = 'M';                // was muss das muss sein (Maximillian) no More Bogdanblah bla 
                counter++;
            }
        }
    }
    //int fehlerToleranz = 1;
    //if ()
}
