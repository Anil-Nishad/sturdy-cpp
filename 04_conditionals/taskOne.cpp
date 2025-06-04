#include  <iostream>
#include  <string>
using namespace std;
int main() {
    string teaOrder;
    cout << "Please enter your tea order: ";
    getline(cin, teaOrder); // Read the entire line including spaces
    if(teaOrder == "green tea") {
        cout << "Your order is green tea." << endl;
    } else if (teaOrder == "black tea") {
        cout << "Your order is black tea." << endl;
    } else if (teaOrder == "herbal tea") {
        cout << "Your order is herbal tea." << endl;
    } else {
        cout << "Sorry, we don't have that type of tea." << endl;
    }
}