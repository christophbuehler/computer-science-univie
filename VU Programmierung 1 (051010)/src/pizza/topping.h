#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Topping {
    private:
        string name;
        string allergene;
        bool specialty;

    public:
        Topping(string name, string allergene = "", bool specialty = false): name{name}, allergene{allergene}, specialty(specialty) {
            if (name == "") throw runtime_error("name cannot be empty");
        }
        bool is_specialty() const;
        bool operator==(const Topping &rop) const;
        double price() const;
        ostream& Print(ostream &o) const;
};
