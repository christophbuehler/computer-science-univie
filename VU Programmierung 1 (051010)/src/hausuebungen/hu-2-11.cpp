/**
 * Aufgabenstellung
 * Lesen Sie eine double Zahl ein und bestimmen Sie, ob der Benutzer eine
 * ganze Zahl eingegeben hat oder nicht. 
 * */

#include <iostream>

using namespace std;

int main() {
    double num;

    cout << "Geben Sie eine Zahl ein: ";
    cin >> num;

    if (num == int(num)) {
        cout << "Sie haben eine Ganzzahl eingegeben!";
    } else {
        cout << "Sie haben keine Ganzzahl eingegeben!";
    }

    return 0;
}