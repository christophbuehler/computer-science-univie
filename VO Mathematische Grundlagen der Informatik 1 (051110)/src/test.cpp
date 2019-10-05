#include <string>
#include <iostream>
#include "person.hpp"

using namespace std;

int main() {
    string names [] = { "Peter", "Hans" };

    for (string name: names) {
        cout << "\n" << name;
    }

    // int summe = 0;
    // int n = 8;
    // while (n > 0) {
    //     summe += n;
    //     n--;
    // }
    // cout << "Summe: " << summe;
    return 0;
}
