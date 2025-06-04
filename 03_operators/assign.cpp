#include <iostream>

using namespace std;

int main(){
    int teaBags;

    cout << "Enter the number of tea bags you have: ";
    cin >> teaBags; // Read the number of tea bags from user input
    if (teaBags > 10) {
       teaBags += 5;
    }

    cout << "You have " << teaBags << " tea bags." << endl;

}