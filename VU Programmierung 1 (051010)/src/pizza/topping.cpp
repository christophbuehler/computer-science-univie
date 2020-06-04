#include <iostream>
#include <string>
#include <vector>

#include "topping.h"

using namespace std;

bool Topping::is_specialty() const { return specialty; }
ostream& Topping::Print(ostream &o) const {
    o << name;
    if (allergene != "") {
        o << " (";
        for (size_t i=0; i<allergene.length(); i++) {
            o << allergene[i];
            if (i != allergene.length() - 1) {
                o << ", ";
            }
        }
        o << ")";
    }
    return o;
}
