#include "Spielfeld.h"
#include "CountMines.h"

void placeNumbers(int größe_x, int größe_y, Spielfeld& spielfeld){
    
    char** meinSpielfeld = spielfeld.getFeld();

    countMinesCenter(größe_x, größe_y);
    countMinesNorth(größe_x, größe_y);
    countMinesEast(größe_x, größe_y);
    countMinesSouth(größe_x, größe_y);
    countMinesWest(größe_x, größe_y);
    countMinesCorner(größe_x, größe_y);
}


int countMinesAroundTarget(int posX, int posY){
    int amountOfMines = 0;
    for(int i = posX - 1; i < posX + 2; i++){
        for(int j = posY - 1; j < posY + 2; i++){
            if(isMine(i,j)){
                amountOfMines++;
            }
        }
    }
    return amountOfMines;
}

int countMinesAroundTargetNorth(int posX, int posY){
    int amountOfMines = 0;
    for(int i = posX - 1; i < posX + 2; i++){
        for(int j = posY; j < posY + 2; i++){
            if(isMine(i,j)){
                amountOfMines++;
            }
        }
    }
    return amountOfMines;
}

int countMinesAroundTargetEast(int posX, int posY){
    int amountOfMines = 0;
    for(int i = posX - 1; i < posX + 1; i++){
        for(int j = posY - 1; j < posY + 2; i++){
            if(isMine(i,j)){
                amountOfMines++;
            }
        }
    }
    return amountOfMines;
}

int countMinesAroundTargetSouth(int posX, int posY){
    int amountOfMines = 0;
    for(int i = posX - 1; i < posX + 2; i++){
        for(int j = posY - 1; j < posY + 1; i++){
            if(isMine(i,j)){
                amountOfMines++;
            }
        }
    }
    return amountOfMines;
}

int countMinesAroundTargetWest(int posX, int posY){
    int amountOfMines = 0;
    for(int i = posX; i < posX + 2; i++){
        for(int j = posY - 1; j < posY + 2; i++){
            if(isMine(i,j)){
                amountOfMines++;
            }
        }
    }
    return amountOfMines;
}

int countMinesAroundTargetCornerLT(int posX, int posY){
    int amountOfMines = 0;
    for(int i = posX; i < posX + 2; i++){
        for(int j = posY; j < posY + 2; i++){
            if(isMine(i,j)){
                amountOfMines++;
            }
        }
    }
    return amountOfMines;
}

int countMinesAroundTargetCornerLB(int posX, int posY){
    int amountOfMines = 0;
    for(int i = posX; i < posX + 2; i++){
        for(int j = posY - 1; j < posY + 1; i++){
            if(isMine(i,j)){
                amountOfMines++;
            }
        }
    }
    return amountOfMines;
}

int countMinesAroundTargetCornerRT(int posX, int posY){
    int amountOfMines = 0;
    for(int i = posX - 1; i < posX + 1; i++){
        for(int j = posY; j < posY + 2; i++){
            if(isMine(i,j)){
                amountOfMines++;
            }
        }
    }
    return amountOfMines;
}

int countMinesAroundTargetCornerRB(int posX, int posY){
    int amountOfMines = 0;
    for(int i = posX - 1; i < posX + 1; i++){
        for(int j = posY - 1; j < posY + 1; i++){
            if(isMine(i,j)){
                amountOfMines++;
            }
        }
    }
    return amountOfMines;
}

void countMinesCenter(int größe_x, int größe_y){
    for(int i = 1; i < größe_x - 1; i++){
        for(int j = 1; j < größe_y - 1; j++){
            if(!isMine(i,j)){
                meinSpielfeld[i][j] = countMinesAroundTarget(i,j);
            }
        }
    }
}

void countMinesNorth(int größe_x, int größe_y){
    for(int i = 1; i < größe_x - 1; i++){
        if(!isMine(i,0)){
            meinSpielfeld[i][0] = countMinesAroundTargetNorth(i,0);
        }
    }
}

void countMinesEast(int größe_x, int größe_y){
    for(int i = 1; i < größe_y - 1; i++){
        if(!isMine(größe_x-1,i)){
            meinSpielfeld[größe_x-1][i] = countMinesAroundTargetEast(größe_x-1,i);
        }
    }
}

void countMinesSouth(int größe_x, int größe_y){
    for(int i = 1; i < größe_x - 1; i++){ 
        if(!isMine(i,größe_y-1)){
            meinSpielfeld[i][größe_y-1] = countMinesAroundTargetSouth(i,größe_y-1);
        }
    }
}

void countMinesWest(int größe_x, int größe_y){
    for(int i = 1; i < größe_y - 1; i++){
        if(!isMine(0,i)){
            meinSpielfeld[0][i] = countMinesAroundTargetWest(0,i);
        }
    }
}

void countMinesCorner(int größe_x, int größe_y){
    if(!isMine(0,0)){
        meinSpielfeld[0][0] = countMinesAroundTargetCornerLT(0,0);
    }
    if(!isMine(0,größe_y-1)){
        meinSpielfeld[0][größe_y-1] = countMinesAroundTargetCornerLB(0,größe_y-1);
    }
    if(!isMine(größe_x-1,0)){
        meinSpielfeld[größe_x-1][0] = countMinesAroundTargetCornerRT(größe_x-1,0);
    }
    if(!isMine(größe_x-1,größe_y-1)){
        meinSpielfeld[größe_x-1][größe_y-1] = countMinesAroundTargetCornerRT(größe_x-1,größe_y-1);
    }
}

bool isMine(int posX, int posY){
    return meinSpielfeld[posX][posY] == 'M';
}
