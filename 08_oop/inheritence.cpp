#include <iostream>
#include <string>
#include <vector>
#include <memory>
using namespace std;
// Base class
class Tea {
    protected:
        string type;
        int quantity;
    public:
        // Constructor
        // The constructor initializes the type and quantity of the tea.
        Tea(string type, int quantity) {
            this->type = type;
            this->quantity = quantity;
            cout << "Tea constructor called" << type << " " << quantity << endl;
        }
        virtual void prepare() = 0; // Abstract method
        virtual void serve() = 0;   // Abstract method
        virtual void brew() const {
            cout << "Brewing " << type << "with generic method" << endl;
        };   // Abstract method

        // Destructor
        // The destructor is declared virtual to ensure that the derived class's destructor is called when an object is deleted through a base class pointer.
        virtual ~Tea() {
            cout << "Tea destructor called" << type << " " << quantity << endl;
        }
};

class GreenTea : public Tea {
    public:
        // Constructor
        GreenTea(int quantity) : Tea("Green Tea", quantity) {
            cout << "GreenTea constructor called" << type << " " << quantity << endl;
        }
        void prepare() override {
            cout << "Preparing Green Tea" << endl;
        }
        void serve() override {
            cout << "Serving Green Tea" << endl;
        }
        void brew() const override {
            cout << "Brewing " << type << " with specific method" << endl;
        }
        // Destructor
        ~GreenTea() {
            cout << "GreenTea destructor called" << type << " " << quantity << endl;
        }
};

class MasalaTea : public Tea {
    public:
        // Constructor
        MasalaTea(int quantity) : Tea("Masala Tea", quantity) {
            cout << "MasalaTea constructor called" << type << " " << quantity << endl;
        }
        void prepare() override {
            cout << "Preparing Masala Tea" << endl;
        }
        void serve() override {
            cout << "Serving Masala Tea" << endl;
        }
        void brew() const override final{
            cout << "Brewing " << type << " with specific method" << endl;
        }
        // Destructor
        ~MasalaTea() {
            cout << "MasalaTea destructor called" << type << " " << quantity << endl;
        }
};

class SpicyMasalaTea : public MasalaTea {
    public:
        // Constructor
        SpicyMasalaTea(int quantity) : MasalaTea(quantity) {
            cout << "SpicyMasalaTea constructor called" << type << " " << quantity << endl;
        }
        void prepare() override {
            cout << "Preparing Spicy Masala Tea" << endl;
        }
        void serve() override {
            cout << "Serving Spicy Masala Tea" << endl;
        }
        // Destructor
        ~SpicyMasalaTea() {
            cout << "SpicyMasalaTea destructor called" << type << " " << quantity << endl;
        }
};

int main() {
    // Create an object of the derived class
    GreenTea greenTea(2);
    MasalaTea masalaTea(3);
    SpicyMasalaTea spicyMasalaTea = SpicyMasalaTea(4);

    // Call the makeTea method
    greenTea.prepare();
    greenTea.brew();
    greenTea.serve();

    masalaTea.prepare();
    masalaTea.brew();
    masalaTea.serve();

    spicyMasalaTea.prepare();
    spicyMasalaTea.brew();
    spicyMasalaTea.serve();

    Tea* teaPtr = new GreenTea(4);
    Tea* teaPtr2 = new MasalaTea(5);
    teaPtr->prepare();
    teaPtr->brew();
    teaPtr->serve();
    teaPtr2->prepare();
    teaPtr2->brew();
    teaPtr2->serve();

    delete teaPtr;
    delete teaPtr2;
    // The destructors will be called automatically when the objects go out of scope

    return 0;
}   