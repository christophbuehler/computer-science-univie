#include <iostream>
#include <vector>
#include <string>
#include <stdexcept>

#include "spieler.h"

using namespace std;

class Mannschaft {
    private:
        string name;
        vector<Spieler> spielerliste;

    public:
        Mannschaft(string name, vector<Spieler> spielerliste = {});
        vector<Spieler> engagieren(const vector<Spieler> &neueSpieler);
        ostream& Print(ostream &o) const;
};
