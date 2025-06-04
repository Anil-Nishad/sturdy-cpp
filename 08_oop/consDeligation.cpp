#include <iostream>
#include <string>
#include <vector>

#include <memory>
using namespace std;

class chai {
    public:
    string teaName;
    int servings;
    vector<string> ingredients;

    //delegation constructor
    chai(string name) : chai(name, 1, {"tea leaves", "milk", "sugar"}) {
        // This constructor delegates to the parameterized constructor
        cout << "Delegation constructor called" << endl;
    }
    chai() {
        teaName = "Simple Chai";
        servings = 1;
        ingredients = {"tea leaves", "milk", "sugar"};
        cout << "Default constructor called" << endl;
    }

    chai(string name, int s, vector<string> ing) {
        teaName = name;
        servings = s;
        ingredients = ing;
        cout << "Parameterized constructor called" << endl;
    }

    void desiplayChaiDetails() {
        cout << "Tea Name: " << teaName << endl;
        cout << "Servings: " << servings << endl;
        cout << "Ingredients: ";
        for (const auto& ingredient : ingredients) {
            cout << ingredient << " ";
        }
        cout << endl;
    }

    ~chai() {
        cout << "Destructor called" << endl;
    }
};
int main() {
    // Creating an object of the chai class using the default constructor
    chai quickChai;
    quickChai.desiplayChaiDetails();
    
    return 0;
}