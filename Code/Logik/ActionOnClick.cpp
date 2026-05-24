#include "Spielfeld.h"
#include "ActionOnClick.h"


void FillEmptySpace(int PosX, int PosY, Spielfeld& spielfeld, Spielfeld& invisibleField){
  
    if(PosX < 0 || PosX >= spielfeld.getHoehe() || PosY < 0 || PosY >= spielfeld.getBreite()){          // Weil du Maxi kein Clean Code Produzierst muss ich hier dafür sorgen das gescheite Werte in deine Funktion kommen WOW!!
        return;
    }

    if(invisibleField.istSichtbar(PosX, PosY)){
        return;
    }

    char** meinSpielfeld = spielfeld.getFeld();

    if(meinSpielfeld[PosX][PosY] == '0'){
        FillEmptySpaceRecursion(PosX,PosY,spielfeld,invisibleField);
    }
}

void FillEmptySpaceRecursion(int PosX, int PosY, Spielfeld& spielfeld, Spielfeld& invisibleField){
    for(int i = -1; i < 2; i++){
        for(int j = -1; j < 2; j++){
            if(PosX+i == PosX && PosY+j == PosY){                                                       // kann man besser schreiben 
                continue;
            }
            FillEmptySpace(PosX+i,PosY+j,spielfeld,invisibleField);
        }
    }
}
