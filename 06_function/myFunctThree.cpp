#include <iostream>

using namespace std;

void pourChai(int &cups){
    cups += 5;
    cout << "Pouring " << cups << " cups of chai." << endl;
}

int main(){
    int  chaiCups = 2;

    // Call by reference
    pourChai(chaiCups);

    cout << "Total cups of chai: " << chaiCups << endl; // This will still print 7, not 2.
    return 0;
}