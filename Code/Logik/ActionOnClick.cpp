#include "Spielfeld.h"
#include "ActionOnClick.h"


void FillEmptySpace(int PosX, int PosY, Spielfeld& spielfeld, Spielfeld& invisibleField){
    char** meinSpielfeld = spielfeld.getFeld();
    invisibleField.setSichtbar(PosX,PosY);
    if(meinSpielfeld[PosX][PosY] == '0'){
        FillEmptySpaceRecursion(PosX,PosY,spielfeld,invisibleField);
    }
}

void FillEmptySpaceRecursion(int PosX, int PosY, Spielfeld& spielfeld, Spielfeld& invisibleField){
    for(int i = -1; i < 2; i++){
        for(int j = -1; j < 2; j++){
            if(PosX+i == PosX && PosY+j == PosY){
                continue;
            }
            FillEmptySpace(PosX+i,PosY+j,spielfeld,invisibleField);
        }
    }
}
