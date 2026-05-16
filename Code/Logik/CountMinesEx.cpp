#include "Spielfeld.h"
#include "CountMinesEx.h"
#include <stdexcept>

int countMinesAroundTarget(int posX, int posY, Spielfeld& spielfeld){
    int amountOfMines = 0;
    char** meinSpielfeld = spielfeld.getFeld();
    try{
        for(int i = posX - 1; i < posX + 2; i++){
            for(int j = posY - 1; j < posY + 2; j++){
                if(isMine(i,j,spielfeld)){
                    amountOfMines++;
                }
            }
        }
    }
    catch(...){}
    return amountOfMines;
}

void countMines(int größe_x, int größe_y, Spielfeld& spielfeld){
    char** meinSpielfeld = spielfeld.getFeld();
    for(int i = 1; i < größe_x - 1; i++){
        for(int j = 1; j < größe_y - 1; j++){
            if(!isMine(i,j,spielfeld)){
                meinSpielfeld[i][j] = countMinesAroundTarget(i,j, spielfeld) + '0';
            }
        }
    }
}

bool isMine(int posX, int posY, Spielfeld& spielfeld){
    char** meinSpielfeld = spielfeld.getFeld();
    return meinSpielfeld[posX][posY] == 'M';
}
