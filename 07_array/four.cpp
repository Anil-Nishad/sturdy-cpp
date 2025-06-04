#include <iostream>
using namespace std;

int* prepareChaiOrders(int cups) {
    
    int* chaiOrders = new int[cups]; // Dynamically allocate memory for chai orders
    for (int i = 0; i < cups; i++) {
        chaiOrders[i] = i + 1; // Assign order numbers to each cup
    }
    return chaiOrders; // Return the pointer to the array
}

int main() {
    
int cups = 5; // Number of chai cups to prepare
    int* chaiOrders = prepareChaiOrders(cups); // Call the function to prepare chai orders
    for(int i = 0; i < cups; i++) {
        cout << "Chai Order Number: " << chaiOrders[i] << endl; // Display each order number
    }
    delete[] chaiOrders; // Free the dynamically allocated memory
    return 0;
}