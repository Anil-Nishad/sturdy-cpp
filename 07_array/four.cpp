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
    cout << "Preparing " << cups << " cups of chai." << endl;
    cout << "Display the address of the first element in the array: " << chaiOrders << endl; // Display the address of the first element in the array
    cout << "Display the value of the first element in the array: " << *chaiOrders << endl; // Display the value of the first element in the array
    cout << "Address of chaiOrders: " << &chaiOrders << endl; // Display the address of the pointer itself
    cout << "Value of chaiOrders: " << *chaiOrders << endl; // Display the value of the pointer
    cout << "Address of chaiOrders[0]: " << &chaiOrders[0] << endl; // Display the address of the first element
    cout << "Value of chaiOrders[0]: " << chaiOrders[0] << endl; // Display the value of the first element
    cout << "Address of chaiOrders[1]: " << &chaiOrders[1] << endl; // Display the address of the second element
    cout << "Value of chaiOrders[1]: " << chaiOrders[1] << endl; // Display the value of the second element
    cout << "Chai Orders:" << endl;
    // Loop through the chai orders and display each order number

    for(int i = 0; i < cups; i++) {
        cout << "Chai Order Number: " << chaiOrders[i] << endl; // Display each order number
    }
    delete[] chaiOrders; // Free the dynamically allocated memory
    return 0;
}