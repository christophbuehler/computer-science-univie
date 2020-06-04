/**
 * Aufgabenstellung
 * Lesen Sie Artikelpreis, Anzahl und Mehrwertsteuersatz ein
 * und geben Sie den Gesamtpreis aus.
 * */

#include <iostream>

using namespace std;

int main() {
    int count;
    double price, vat, total;

    cout << "Preis: ";
    cin >> price;
    
    cout << "Anzahl: ";
    cin >> count;

    cout << "Mehrwertsteuersatz in %: ";
    cin >> vat;

    total = price * (1 + vat / 100) * count;

    cout << "Der Totalpreis beträgt: " << total << endl;
}