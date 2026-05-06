#ifndef SPIELFELD_H
#define SPIELFELD_H

class Spielfeld {
private:
    int höhe = 0;
    int breite = 0;
    int radius = 0;
    int anzahlBomben = 0;

public:
    void setHoehe(int h);
    void setBreite(int b);
    void setRadius(int r);
    int getHoehe();
    int getBreite();
    int getRadius();

    void bauSpielfeld(int hoehe, int breite);
    void bauDonutSpielfeld(int radius);
};

#endif
