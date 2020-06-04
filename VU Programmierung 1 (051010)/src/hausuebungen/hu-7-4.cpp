/**
 * Exercise 7.4
 * Schreiben Sie eine Funktion, welche die Fakultät einer gegebenen Zahl n berechnet,
 * ohne dass Sie eine ''if''-Anweisung, eine ''switch''-Anweisung oder eine
 * Schleife verwenden. 
 * */

#include <iostream>

using namespace std;

int fakultaet(int num) {
  return num <= 0
    ? 1
    : fakultaet(num - 1) * num;
}

int main() {
  int num{0};
  cout << "Geben Sie eine Zahl ein:" << endl;
  cin >> num;
  cout << num << "! entspricht:" << endl;
  cout << fakultaet(num);
  return 0;
}
