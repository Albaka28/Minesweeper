#include <random>
#include <MinenGeneration.h>

using namespace std;

void placeMinen(int größe_x, int größe_y, int schwierigkeit){

    // Zufallszeug NICHT ANFASSEN!
    random_device rd;
    mt19937 gen(rd());
    uniform_int_distribution<> dist(1,100);

    int feld[größe_x][größe_y];
    int counter = 0;

    // Füllt 2D-Array mit Zahlen 1-100
    for (int i = 0; i < größe_x; i++){
        for (int j = 0; j < größe_y; j++){
            feld[i][j] = dist(gen);
        }
    }
    //Platziert Minen je nach Schwierigkeit
    for (int i = 0; i < größe_x; i++){
        for (int j = 0; j < größe_y; j++){
            if (feld[i][j] >= schwierigkeit){
                BogdanHatKeinSpielfeldGemacht[i][j] = 'M';
                counter++;
            }
        }
    }
    int anzahlFelder = größe_x * größe_y;
    int fehlerToleranz = 1;
    //if ()
}
