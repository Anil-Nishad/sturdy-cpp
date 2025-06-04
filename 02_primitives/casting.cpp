#include <iostream>

using namespace std;
int main(){
    float smallTeaPack = 100.99; // 100 grams
    int roundedTeaPack = (int)smallTeaPack; // 100 grams

    int teaQuantity = 10;
    double totalPrice = teaQuantity * smallTeaPack; // 1000.99 grams
    cout << "The total price of " << teaQuantity << " tea packs is: " << totalPrice << " grams." << endl;
    cout << "The size of a small tea pack is: " << smallTeaPack << " grams." << endl;
    cout << "The size of a rounded tea pack is: " << roundedTeaPack << " grams." << endl;

    return 0;
}