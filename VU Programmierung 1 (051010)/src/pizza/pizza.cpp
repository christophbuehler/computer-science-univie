#include <iostream>
#include <string>
#include <vector>

#include "topping.h"
#include "pizza.h"

using namespace std;

Pizza::Pizza(vector<Topping> want, vector<Topping> dontWant) {

    // remove unwanted toppings
    for (Topping &dw : dontWant) {
        for (int h=toppings.size()-1; h>=0; h--) {
            if (!(dw == toppings.at(h))) continue;
            toppings.erase(toppings.begin() + h);
            break;
        }
    }

    // add wanted toppings
    for (Topping &w : want) {
        bool found = false;
        for (size_t h=0; h<toppings.size(); h++) {
            if (toppings.at(h) == w) {
                found = true;
            }
        }
        if (found) break;
        toppings.push_back(w);
    }

    if (toppings.size() == 0) throw runtime_error("Pizza is empty.");
};

double Pizza::Price() const {
    double p = 7;
    
    // pizza has too many toppings
    if (toppings.size() > 4) {
        p += toppings.size() - 4;
    }

    // zuschlag
    for (Topping t : toppings) {
        if (t.is_specialty()) {
            p += .5;
        }
    }

    return p;
}

ostream& Pizza::Print(ostream &o) const {
    o << "[{";

    // print toppings
    for (size_t i=0; i<toppings.size(); i++) {
        toppings[i].Print(o);
        if (i == toppings.size()-1)break;
        o << " ,";
    }
    o << "}, " << Price();
    o << " Euro]";
    return o;
}
