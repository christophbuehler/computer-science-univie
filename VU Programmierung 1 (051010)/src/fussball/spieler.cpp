#include <iostream>
#include <vector>
#include <string>
#include <stdexcept>

#include "spieler.h"

using namespace std;

Spieler::Spieler(string name, int transfersumme, Position position): name{name}, transfersumme{transfersumme}, position{position} {
    if (transfersumme < 10 || transfersumme > 500) {
        throw runtime_error("transfersumme zu hoch");
    }
    if (name.length() == 0) {
        throw runtime_error("name leer");
    }
}

ostream& Spieler::Print(ostream &o) const {
    o << "[" << name << ", " << transfersumme << " Mio Euro, ";
    o << positionsnnamen.at(position);
    o << "]";
    return o;
}

bool operator==(const Spieler &a, const Spieler &b) {
  return a.name == b.name;
}
