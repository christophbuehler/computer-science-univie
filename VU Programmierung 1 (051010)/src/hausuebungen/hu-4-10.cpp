/**
 * Aufgabenstellung
 * Schreiben Sie eine Funktion, die eine natürliche Zahl als Parameter enthält und
 * einen String retourniert, der zunächst alle Ziffern der Zahl von rechts nach links
 * gelesen und jeweils durch ein Leerzeichen voneinander getrennt enthält, dann einen
 * Stern und alle Ziffern der Eingangszahl von links nach rechts gelesen und jeweils
 * durch ein Leerzeichen getrennt. Z.B.:
 * Parameterwert: 12345
 * Returnwert: "5 4 3 2 1 * 1 2 3 4 5"
 * */

#include <iostream>
#include <string>

using namespace std;

string transformNumber(unsigned int input);

int main() {
  unsigned int input;
  string transformed;

  cout << "Geben Sie Ihre Zahl ein:\n";
  cin >> input;

  transformed = transformNumber(input);

  cout << transformed << endl;

  return 0;
}

string transformNumber(unsigned int input) {
  string digit;
  string outputAsc{""}, outputDesc{""};
  do {
    digit = to_string(input % 10);
    outputAsc = digit + (outputAsc == "" ? "" : " ") + outputAsc;
    outputDesc = outputDesc + (outputDesc == "" ? "" : " ") + digit;
    input /= 10;
  } while (input);
  return outputDesc + " * " + outputAsc;
}
