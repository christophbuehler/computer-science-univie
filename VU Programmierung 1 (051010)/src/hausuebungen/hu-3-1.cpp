/**
 * Aufgabenstellung
 * Sortieren Sie 3 eingelesene double Zahlen ohne Verwendung von logischen Operatoren. 
 * */

#include <algorithm> 
#include <iostream>

using namespace std;

int main() {
    double nums[3];

    cout << "Geben Sie drei Zahlen ein:" << endl;

    for (int i=0; i<3; i++)
        cin >> nums[i];
    
    sort(nums, nums + 3); 

    cout << "Aufsteigend sortierte Zahlen:" << endl;

    for (int i=0; i<3; i++)
        cout << nums[i] << endl;

    return 0;
}