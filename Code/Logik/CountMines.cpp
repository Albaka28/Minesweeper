#include "Spielfeld.h"
#include "CountMines.h"

void placeNumbers(int größe_x, int größe_y, Spielfeld& spielfeld){

    countMinesCenter(größe_x, größe_y, spielfeld);
    countMinesNorth(größe_x, größe_y, spielfeld);
    countMinesEast(größe_x, größe_y, spielfeld);
    countMinesSouth(größe_x, größe_y, spielfeld);
    countMinesWest(größe_x, größe_y, spielfeld);
    countMinesCorner(größe_x, größe_y, spielfeld);
}


int countMinesAroundTarget(int posX, int posY, Spielfeld& spielfeld){
    int amountOfMines = 0;
    char** meinSpielfeld = spielfeld.getFeld();
    for(int i = posX - 1; i < posX + 2; i++){
        for(int j = posY - 1; j < posY + 2; j++){
            if(isMine(i,j,spielfeld)){
                amountOfMines++;
            }
        }
    }
    return amountOfMines;
}

int countMinesAroundTargetNorth(int posX, int posY, Spielfeld& spielfeld){
    int amountOfMines = 0;
    char** meinSpielfeld = spielfeld.getFeld();
    for(int i = posX - 1; i < posX + 2; i++){
        for(int j = posY; j < posY + 2; j++){
            if(isMine(i,j,spielfeld)){
                amountOfMines++;
            }
        }
    }
    return amountOfMines;
}

int countMinesAroundTargetEast(int posX, int posY, Spielfeld& spielfeld){
    int amountOfMines = 0;
    char** meinSpielfeld = spielfeld.getFeld();
    for(int i = posX - 1; i < posX + 1; i++){
        for(int j = posY - 1; j < posY + 2; j++){
            if(isMine(i,j, spielfeld)){
                amountOfMines++;
            }
        }
    }
    return amountOfMines;
}

int countMinesAroundTargetSouth(int posX, int posY, Spielfeld& spielfeld){
    int amountOfMines = 0;
    char** meinSpielfeld = spielfeld.getFeld();
    for(int i = posX - 1; i < posX + 2; i++){
        for(int j = posY - 1; j < posY + 1; j++){
            if(isMine(i,j,spielfeld)){
                amountOfMines++;
            }
        }
    }
    return amountOfMines;
}

int countMinesAroundTargetWest(int posX, int posY, Spielfeld& spielfeld){
    int amountOfMines = 0;
    char** meinSpielfeld = spielfeld.getFeld();
    for(int i = posX; i < posX + 2; i++){
        for(int j = posY - 1; j < posY + 2; j++){
            if(isMine(i,j,spielfeld)){
                amountOfMines++;
            }
        }
    }
    return amountOfMines;
}

int countMinesAroundTargetCornerLT(int posX, int posY, Spielfeld& spielfeld){
    int amountOfMines = 0;
    char** meinSpielfeld = spielfeld.getFeld();
    for(int i = posX; i < posX + 2; i++){
        for(int j = posY; j < posY + 2; j++){
            if(isMine(i,j,spielfeld)){
                amountOfMines++;
            }
        }
    }
    return amountOfMines;
}

int countMinesAroundTargetCornerLB(int posX, int posY, Spielfeld& spielfeld){
    int amountOfMines = 0;
    char** meinSpielfeld = spielfeld.getFeld();
    for(int i = posX; i < posX + 2; i++){
        for(int j = posY - 1; j < posY + 1; j++){
            if(isMine(i,j,spielfeld)){
                amountOfMines++;
            }
        }
    }
    return amountOfMines;
}

int countMinesAroundTargetCornerRT(int posX, int posY, Spielfeld& spielfeld){
    int amountOfMines = 0;
    char** meinSpielfeld = spielfeld.getFeld();
    for(int i = posX - 1; i < posX + 1; i++){
        for(int j = posY; j < posY + 2; j++){
            if(isMine(i,j,spielfeld)){
                amountOfMines++;
            }
        }
    }
    return amountOfMines;
}

int countMinesAroundTargetCornerRB(int posX, int posY, Spielfeld& spielfeld){
    int amountOfMines = 0;
    char** meinSpielfeld = spielfeld.getFeld();
    for(int i = posX - 1; i < posX + 1; i++){
        for(int j = posY - 1; j < posY + 1; j++){
            if(isMine(i,j,spielfeld)){
                amountOfMines++;
            }
        }
    }
    return amountOfMines;
}

void countMinesCenter(int größe_x, int größe_y, Spielfeld& spielfeld){
    char** meinSpielfeld = spielfeld.getFeld();
    for(int i = 1; i < größe_x - 1; i++){
        for(int j = 1; j < größe_y - 1; j++){
            if(!isMine(i,j,spielfeld)){
                meinSpielfeld[i][j] = countMinesAroundTarget(i,j, spielfeld) + '0';
            }
        }
    }
}

void countMinesNorth(int größe_x, int größe_y, Spielfeld& spielfeld){
    char** meinSpielfeld = spielfeld.getFeld();
    for(int i = 1; i < größe_x - 1; i++){
        if(!isMine(i,0,spielfeld)){
            meinSpielfeld[i][0] = countMinesAroundTargetNorth(i,0, spielfeld) + '0';
        }
    }
}

void countMinesEast(int größe_x, int größe_y, Spielfeld& spielfeld){
    char** meinSpielfeld = spielfeld.getFeld();
    for(int i = 1; i < größe_y - 1; i++){
        if(!isMine(größe_x-1,i,spielfeld)){
            meinSpielfeld[größe_x-1][i] = countMinesAroundTargetEast(größe_x-1,i, spielfeld) + '0';
        }
    }
}

void countMinesSouth(int größe_x, int größe_y, Spielfeld& spielfeld){
    char** meinSpielfeld = spielfeld.getFeld();
    for(int i = 1; i < größe_x - 1; i++){ 
        if(!isMine(i,größe_y-1,spielfeld)){
            meinSpielfeld[i][größe_y-1] = countMinesAroundTargetSouth(i,größe_y-1, spielfeld) + '0';
        }
    }
}

void countMinesWest(int größe_x, int größe_y, Spielfeld& spielfeld){
    char** meinSpielfeld = spielfeld.getFeld();
    for(int i = 1; i < größe_y - 1; i++){
        if(!isMine(0,i,spielfeld)){
            meinSpielfeld[0][i] = countMinesAroundTargetWest(0,i, spielfeld) + '0';
        }
    }
}

void countMinesCorner(int größe_x, int größe_y, Spielfeld& spielfeld){
    char** meinSpielfeld = spielfeld.getFeld();
    if(!isMine(0,0,spielfeld)){
        meinSpielfeld[0][0] = countMinesAroundTargetCornerLT(0,0, spielfeld);
    }
    if(!isMine(0,größe_y-1,spielfeld)){
        meinSpielfeld[0][größe_y-1] = countMinesAroundTargetCornerLB(0,größe_y-1, spielfeld);
    }
    if(!isMine(größe_x-1,0,spielfeld)){
        meinSpielfeld[größe_x-1][0] = countMinesAroundTargetCornerRT(größe_x-1,0, spielfeld);
    }
    if(!isMine(größe_x-1,größe_y-1,spielfeld)){
        meinSpielfeld[größe_x-1][größe_y-1] = countMinesAroundTargetCornerRT(größe_x-1,größe_y-1, spielfeld);
    }
}

bool isMine(int posX, int posY, Spielfeld& spielfeld){
    char** meinSpielfeld = spielfeld.getFeld();
    return meinSpielfeld[posX][posY] == 'M';
}
