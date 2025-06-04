#include <iostream>
#include <vector>

using namespace std;

class chai{
    public :
    string teaName;
    int servings;
    vector<string> ingredients;
    chai() {
        teaName = "Masala Chai";
        servings = 2;
        ingredients = {"tea leaves", "milk", "sugar", "spices"};
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

class pointerInConstructor{
    public :
    string* teaName;
    int servings;
    vector<string> ingredients;
    
    pointerInConstructor(string name, int s, vector<string> ing) {
            teaName = new string(name);
            servings = s;
            ingredients = ing;
            cout << "Parameterized constructor called" << endl;
    }

    ~pointerInConstructor() {
            delete teaName;
            cout << "Destructor called" << endl;
    }

    void desiplayChaiDetails() {
        cout << "Tea Name: " << *teaName << endl;
        cout << "Servings: " << servings << endl;
        cout << "Ingredients: ";
        for (const auto& ingredient : ingredients) {
            cout << ingredient << " ";
        }
        cout << endl;
    }
};

int main() {
    // Default constructor
    chai c1;
    // Parameterized constructor
    chai c2("Lemon Tea", 10, {"tea leaves", "lemon", "sugar"});
    //copy the object
    cout << "Copy object called" << endl;
    chai c2_copy = c2;
     cout << "c2_copy called" << endl;
    c2_copy.desiplayChaiDetails();

    pointerInConstructor c2_pointer("Lemon Tea", 10, {"tea leaves", "lemon", "sugar"});
    c2_pointer.desiplayChaiDetails();

    pointerInConstructor c2_pointer_copy = c2_pointer;
    c2_pointer_copy.desiplayChaiDetails();

    // Copy constructor
    cout << "Copy constructor called" << endl;
    chai c3(c2);
    // Move constructor
    cout << "Move constructor called" << endl;
    chai c4(std::move(c3));

    //c1.desiplayChaiDetails();
    //c2.desiplayChaiDetails();
    //c3.desiplayChaiDetails();
    //c4.desiplayChaiDetails();
    
    // Default destructor
    return 0;
}