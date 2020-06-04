#include <iostream>
#include <cmath>

using namespace std;

int main() {
  int k = 2;

  double res;
  int n = 2;

  do {
    res = 2;
    for (int i=0; i<n; i++) {
      res = sqrt(res);
    }
    for (int i=0; i<n; i++) {
      res = pow(res, 2);
    }

    n++;
  } while(res != 1 && n < 10000);

  cout << n;

  return 0;
}
