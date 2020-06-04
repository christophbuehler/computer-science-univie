#include <iostream>
#include <vector>
#include <string>
#include <stdexcept>

#pragma once
enum Position { Tor, Abwehr, Mitte, Sturm };

using namespace std;

class Spieler {
    private:
        string name;
        int transfersumme;
        Position position;
        vector<string> positionsnnamen{"Tor", "Abwehr", "Mitte", "Sturm"};

    public:
        Spieler(string name, int transfersumme, Position position = Position::Tor);
        ostream& Print(ostream &o) const;
        friend bool operator==(const Spieler&, const Spieler&);
};
