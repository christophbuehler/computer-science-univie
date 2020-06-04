/**
 * Exercise 5.2 
 * Schreiben Sie eine Funktion, die einen Vektor von ganzen Zahlen als Parameter erhält und
 * einen entsprechenden Vektor von ganzen Zahlen retourniert, in dem jeweils zwei benachbarte
 * Einträge vertauscht sind. Verwenden Sie keine Schleife in Ihrer Funktion. Z.B.: 
 * Ausgangsvektor: {1,2,3,4,5,6}    Ergebnisvektor: {2,1,4,3,6,5}
 * */

#include <iostream>
#include <vector>

using namespace std;

vector<int> switchNums(vector<int>, int);
vector<int> switchNums(vector<int>, int = 0);

int main() {
  vector<int> input = {1,2,3,4,5,6}, output;

  output = switchNums(input);
  
  for (int i=0; i<output.size(); i++)
    cout << output[i];

  return 0;
}

vector<int> switchNums(vector<int> input, int i) {
  if (i + 1 >= input.size()) return input;
  int firstVal = input[i];
  input[i] = input[i + 1];
  input[i + 1] = firstVal;
  return switchNums(input, i + 2);
}
