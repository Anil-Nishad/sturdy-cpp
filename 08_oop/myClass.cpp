#include <iostream>
#include <vector>

using namespace std;

class Chai{
    // data members (attributes)
    string teaName; // name of the tea
    string teaType; // type of tea (e.g., black, green, herbal)
    int sevings; // number of servings
    string teaOrigin; // origin of the tea (e.g., India, China, Sri Lanka)
    vector<string> ingredients; // list of ingredients (e.g., tea leaves, spices, herbs)
    string brewingMethod; // method of brewing (e.g., steeping, boiling)

    // member functions (methods)
    public:
        // constructor
        Chai(string name, string type, int servings, string origin, vector<string> ing, string method) {
            teaName = name;
            teaType = type;
            sevings = servings;
            teaOrigin = origin;
            ingredients = ing;
            brewingMethod = method;
        }

        // member function to display tea details
        void displayChaiDetails() {
            cout << "Tea Name: " << teaName << endl;
            cout << "Tea Type: " << teaType << endl;
            cout << "Servings: " << sevings << endl;
            cout << "Origin: " << teaOrigin << endl;
            cout << "Ingredients: ";
            for (const auto& ingredient : ingredients) {
                cout << ingredient << " ";
            }
            /*
            for (string ingredient : ingredients) {
                cout << ingredient << " ";
            }
            */
            cout << endl;
            cout << "Brewing Method: " << brewingMethod << endl;
        }

};

class Tea{
    public:
        // data members (attributes)
        string teaName; // name of the tea
        string teaType; // type of tea (e.g., black, green, herbal)
        int sevings; // number of servings
        string teaOrigin; // origin of the tea (e.g., India, China, Sri Lanka)
        vector<string> ingredients; // list of ingredients (e.g., tea leaves, spices, herbs)
        string brewingMethod; // method of brewing (e.g., steeping, boiling)

        // member function to display tea details
        void displayTeaDetails() {
            cout << "Tea Name: " << teaName << endl;
            cout << "Tea Type: " << teaType << endl;
            cout << "Servings: " << sevings << endl;
            cout << "Origin: " << teaOrigin << endl;
            cout << "Ingredients: ";
            for (string ingredient : ingredients) {
                cout << ingredient << " ";
            }
            cout << endl;
            cout << "Brewing Method: " << brewingMethod << endl;
        }

};

int main(){
    Chai chai("Masala Chai", "Black", 2, "India", {"Tea leaves", "Spices", "Milk"}, "Boiling");
    chai.displayChaiDetails();

    Tea tea;
    tea.teaName = "Green Tea";
    tea.teaType = "Green";
    tea.sevings = 1;
    tea.teaOrigin = "China";
    tea.ingredients = {"Tea leaves", "Water"};
    tea.brewingMethod = "Steeping";
    tea.displayTeaDetails();

}