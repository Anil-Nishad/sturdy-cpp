#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Chai{
    private:
        string teaName;
        int servings;
        vector<string> ingredients;
    public:
    /*
    Chai(string name, int s, vector<string> ing) {
        teaName = name;
        servings = s;
        ingredients = ing;
        cout << "Parameterized constructor called" << endl;
    };
    */
    // or

    Chai(string name, int s, vector<string> ing) : teaName(name), servings(s), ingredients(ing) {
        cout << "Parameterized constructor called" << endl;
    }
    ~Chai() {
        cout << "Destructor called" << endl;
    }

    void display() const {
        cout << "Tea Name: " << teaName << endl;
        cout << "Servings: " << servings << endl;
        cout << "Ingredients: ";
        for (const auto& ingredient : ingredients) {
            cout << ingredient << " ";
        }
        cout << endl;
    }
    friend bool compareChai(const Chai &chai1, const Chai &chai2);

};


bool compareChai(const Chai &chai1, const Chai &chai2) {
    return chai1.servings < chai2.servings;
};

int main(){
    Chai masalaChai ("Masala Chai", 2, {"tea leaves", "milk", "sugar", "spices"});
    Chai greenChai ("Green Chai", 1, {"green tea leaves", "water", "honey"});
    masalaChai.display();
    greenChai.display();

    if(compareChai(masalaChai, greenChai)){
        cout << "Masala Chai has less servings than Green Chai" << endl;
    } else {
        cout << "Masala Chai has more servings than Green Chai" << endl;

    }

    return 0;
};