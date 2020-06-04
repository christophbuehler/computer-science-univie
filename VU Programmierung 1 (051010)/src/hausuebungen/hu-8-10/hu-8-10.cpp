/**
 * Exercise 8.10
 * Die Klasse N0 dient zur Darstellung von natürlichen Zahlen mit bis zu 70 Stellen
 * (Interne Darstellung als String mit maximal 70 Zeichen). Zusätzlich zum Wert enthält
 * jedes Objekt der Klasse N0 auch einen Status, der festlegt ob der im char Array
 * dargestellte Wert gültig ist, oder nicht. Implementieren und testen Sie zumindest die
 * folgenden Methoden:
 * 
 * N0::N0() // mit 0 initialisieren
 * N0::N0(int)
 * N0 N0::operator+(N0)
 * N0 N0::operator-(N0)
 * N0 N0::operator*(N0)
 * N0 N0::operator/(N0)
 * void N0::print()
 * 
 * Falls bei den arithmetischen Operationen (+ - * /) Überläufe entstehen, so wird ein
 * Objekt mit dem Status ungültig retourniert. Bei der Ausgabe wird für ungültige Objekte
 * der String "ungültig" ausgegeben.
 * */

#include<iostream>

using namespace std;

int main() {
    cout << "this is a test";
    return 0;
}
