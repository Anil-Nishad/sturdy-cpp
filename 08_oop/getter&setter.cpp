#include <iostream>
#include <vector>

using namespace std;

class chai{
    private :
    string teaName;
    int servings;
    vector<string> ingredients;
    public:
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

    // getter
    string getTeaName() {
        return teaName;
    }

    // setter
    void setTeaName(string name) {
        if (name.empty()) {
            cout << "Invalid tea name" << endl;
            return;
        }
        teaName = name;
    }

    int getServings() {
        return servings;
    }
    void setServings(int s) {
        if (s <= 0) {
            cout << "Invalid servings" << endl;
            return;
        }
        servings = s;
    }

    vector<string> getIngredients() {
        return ingredients;
    }

    void setIngredients(vector<string> ing) {
        if (ing.empty()) {
            cout << "Invalid ingredients" << endl;
            return;
        }
        ingredients = ing;
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
    chai chai1;
    chai1.setTeaName("Green Tea");
    chai1.setServings(3);
    chai1.setIngredients({"green tea leaves", "water", "honey"});
    chai1.desiplayChaiDetails();
    cout << chai1.getTeaName() << endl;
    cout << chai1.getServings() << endl;
    cout << chai1.getIngredients().size() << endl;
    return 0;
}