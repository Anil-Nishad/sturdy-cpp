#include <iostream>
 using namespace std;

 int main() {

    /*
    [](){}
    */
    //lambda function
    auto myFunct = [](int a, int b) { return a + b; };
    //function pointer
    int (*myFunctPtr)(int, int) = [](int a, int b) { return a + b; };

    auto prepareChai = [](int cups){
        cout << "I have " << cups << " cups of coffee." << endl;
    };
    prepareChai(3);

    return 0;
 }