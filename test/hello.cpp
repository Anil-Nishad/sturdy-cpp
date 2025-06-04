#include <iostream> -- Preprocessor directive to include the iostream library

using namespace std;
/*
using std::cout; // Using the cout object from the std namespace
using std::endl; // Using the endl manipulator from the std namespace
*/

namespace myChai{
    void hello() { // Function definition in the myChai namespace
        cout << "Hello, World!" << endl; // Output to console
    }
}


int main() {
    myChai::hello(); // Call the hello function from the myChai namespace
    cout << "Hello, World! from Anil" ;
    //std::cout << "Hello, World! from Anil" << std::endl; // directly using std namespace
}


string firstFunction() { // Function definition for firstFunction
    return "Hello from firstFunction"; // Return a string
}
int secondFunction() { // Function definition for secondFunction
    return 0; // Return an integer
}