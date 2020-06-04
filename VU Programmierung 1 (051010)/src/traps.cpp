#include <iostream>

using namespace std;

bool between(double a, double b, double c) {
    return a < b < c;
}

int main() {
    int h = -6;

    cout << between(h-0.5, h, h+0.5);

    return 0;
}