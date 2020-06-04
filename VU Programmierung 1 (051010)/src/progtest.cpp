#include <iostream>
#include <vector>

using namespace std;

class MyClass {
    private:
        int n;

    public:
        MyClass(int n = 0): n {n} { }
        ostream& Print(ostream &o) const;
        bool operator==(const MyClass &rop) const;
};

ostream& MyClass::Print(ostream &o) const {
    o << n;
    return o;
}

bool MyClass::operator==(const MyClass &rop) const {
    return n == rop.n;
}

ostream& operator<<(ostream& o, const MyClass& myClass) {
    return myClass.Print(o);
}

enum A { REAL };

int main() {
    A b = REAL;
    cout << b;

    vector<double> a = {1,2,3};

    cout << a.size() << endl;
    for (double i : a) {
        cout << " " << i;
    }
    cout << endl;

    a.erase(a.begin() + 2);

    cout << a.size() << endl;
    for (double i : a) {
        cout << " " << i;
    }
    cout << endl;

    // size_t s = a.size()-1;
    // s--;
    // cout << s;

    // 4 3 2 1
    for (size_t i=4; i>0; i--) {
        cout << i;
    }

    // Infinite loop, probably because size_t is
    // signed and 0-- for the final comparison
    // gets the largest signed value)
    // for (size_t i=4; i>=0; i--) {
    //     cout << i;
    // }

    // So if you want to count down to 0, use int.
    // 4 3 2 1 0
    for (int i=4; i>=0; i--) {
        cout << i;
    }

    // MyClass x{4}, y{7};
    // cout << x << (x == y) << "a" << a.size();
    return 0;
}