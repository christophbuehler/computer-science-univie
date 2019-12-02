/**
 * Exercise 5.16 
 * (*) Schreiben Sie eine Funktion, die als Parameter einen String (Datentyp string)
 * erhält und alle möglichen Permutationen der im String enthaltenen Zeichen ausgibt.
 * (Sie können davon ausgehen, dass jedes Zeichen nur einmal auftritt.)  
 * Z.B.:
 * Parameter: abc
 * Ausgabe: abc acb bac bca cab cba
 * */

#include <iostream>
#include <vector>
#include <string>

using namespace std;

string original = "abcd";

void swap(string str, int from) {
  cout << str << endl;

  // transform string
  int to = (from + 1) % str.length();
  char temp = str[from];
  str[from] = str[to];
  str[to] = temp;

  if (str == original) return;

  swap(str, to);
}


int main() {
  swap(original, 0);

  return 0;
}
