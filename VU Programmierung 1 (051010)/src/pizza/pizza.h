#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Pizza{
    private:
        vector<Topping> toppings = {{"Tomato sauce"}, {"cheese", "G"}};

    public:
        Pizza(vector<Topping> want = {}, vector<Topping> dontWant = {});
        double Price() const;
        ostream& Print(ostream &o) const;
};
