#include <iostream>
#include <vector>
#include <string>
#include <stdexcept>

#include "mannschaft.h"

using namespace std;

Mannschaft::Mannschaft(string name, vector<Spieler> spielerliste): name{name}, spielerliste{spielerliste} {
    if (name.length() == 0) {
        throw runtime_error("name leer");
    }
    for (size_t i=0; i<spielerliste.size(); i++) {
        for (size_t h=0; h<i; h++) {
            if (!(spielerliste.at(h) == spielerliste.at(i))) continue;
            throw runtime_error("spieler doppelt aufgefuehrt");
        }
    }
}

vector<Spieler> Mannschaft::engagieren(const vector<Spieler> &neueSpieler) {
    vector<Spieler> notAdded{};
    for (Spieler neu : neueSpieler) {
        bool alreadyMember = false;
        for (Spieler &current: spielerliste) {
            if (!(current == neu)) continue;
            alreadyMember = true;
        }
        if (alreadyMember) {
            notAdded.push_back(neu);
        } else {
            spielerliste.push_back(neu);
        }
    }
    return notAdded;
}

ostream& Mannschaft::Print(ostream &o) const {
    o << "[" << name << ", {";
    int size = spielerliste.size();
    for (size_t i{0}; i<size; i++) {
        spielerliste.at(i).Print(o);
        if (i == size - 1) break;
        o << ", ";
    }
    o << "}]";
    return o;
}

