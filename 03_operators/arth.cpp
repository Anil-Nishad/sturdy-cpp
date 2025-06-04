#include <iostream>

using namespace std;

int main(){
    int cups;
    double pricePerCup, totalPrice, discountedPrice, discountRate;
    cout << "Enter the number of cups: ";// Prompt user for input
    cin >> cups; // Read the number of cups from user input 
    cout << "Enter the price per cup: ";// Prompt user for input
    cin >> pricePerCup; // Read the price per cup from user input

    totalPrice = cups * pricePerCup; // Calculate total price
    // apply 5% discount if total price is greater than 100
    if (totalPrice > 100) {
        discountRate = 0.05; // Set discount rate to 5%
    } else {
        discountRate = 0.0; // No discount
    }
    discountedPrice = totalPrice - (totalPrice * discountRate); // Calculate discounted price
    cout << "Total price: $" << totalPrice << endl; // Output total price
    cout << "Discounted price: $" << discountedPrice << endl; // Output discounted price
}