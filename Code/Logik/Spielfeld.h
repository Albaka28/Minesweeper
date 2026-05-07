#ifndef SPIELFELD_H
#define SPIELFELD_H

class Spielfeld {
private:
    int hoehe = 0;
    int breite = 0;
    int radius = 0;
    int anzahlBomben = 0;

    char** feld = nullptr;

public:
    ~Spielfeld();

    void setHoehe(int h);
    void setBreite(int b);
    void setRadius(int r);
    int getHoehe();
    int getBreite();
    int getRadius();

    char** getFeld();
    void inFeld(int h, int b);

    void bauSpielfeld(int hoehe, int breite);
    void bauDonutSpielfeld(int radius);
    void initialisierungSpielfeld(int h, int b);
};

#endif
