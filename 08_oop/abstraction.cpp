#include <iostream>
#include <string>
#include <vector>
using namespace std;

// Abstract class: A class that cannot be instantiated and may contain pure virtual functions.
// It serves as a blueprint for derived classes.
// Abstract classes are used to define interfaces and provide a common base for derived classes.
// They can contain both pure virtual functions (which must be implemented by derived classes) and concrete methods.
// Pure virtual function: A virtual function that has no implementation in the base class and must be overridden in derived classes.
// It is declared by assigning 0 to the function declaration.
// Pure virtual functions are used to create abstract classes and define interfaces.
// They allow derived classes to provide their own implementation of the function.
// Abstract classes can also have concrete methods (non-pure virtual functions) that can be used by derived classes.
// This allows for a mix of abstract and concrete functionality in the same class.
// Abstract classes are useful for defining common behavior and enforcing a contract for derived classes.
// They allow for polymorphism, where derived classes can be treated as instances of the base class.
// This enables code reuse and flexibility in designing systems.
// Abstract classes are often used in frameworks and libraries to provide a common interface for users.
// They allow for extensibility and customization by allowing users to derive their own classes from the abstract class.
// Abstract classes are also used in design patterns, such as the Factory pattern, to create objects of derived classes.
// Abstract class

class Tea {
    public :
        // Pure virtual function
        virtual void prepare() = 0; // Abstract method
        virtual void serve() = 0;   // Abstract method
        virtual void brew() = 0;   // Abstract method

        void makeTea() {
            prepare();
            brew();
            serve();
        }

};

// Derived class
class GreenTea : public Tea {
    public :
        void prepare() override {
            cout << "Preparing Green Tea" << endl;
        }

        void serve() override {
            cout << "Serving Green Tea" << endl;
        }

        void brew() override {
            cout << "Brewing Green Tea" << endl;
        }    
};

class MasalaTea : public Tea {
    public :
        void prepare() override {
            cout << "Preparing Masala Tea" << endl;
        }

        void serve() override {
            cout << "Serving Masala Tea" << endl;
        }

        void brew() override {
            cout << "Brewing Masala Tea" << endl;
        }  
};

int main() {
    // Create an object of the derived class
    GreenTea greenTea;
    MasalaTea masalaTea;

    // Call the makeTea method
    greenTea.makeTea();
    masalaTea.makeTea();

    return 0;
}   