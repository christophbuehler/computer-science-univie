/**
 * Aufgabenstellung
 * Lesen Sie die Länge und die Breite eines Rechtecks ein und
 * berechnen Sie daraus den Umfang und die Fläche des Rechtecks.
 * */

#include <iostream>

using namespace std;

int main() {
    int length,
        width,
        circumference,
        area;

    cout << "Laenge: ";
    cin >> length;
    
    cout << "Breite: ";
    cin >> width;

    circumference = length * 2 + width * 2;
    area = length * width;

    cout << "Umfang: " << circumference << " Flaeche: " << area << endl;
}