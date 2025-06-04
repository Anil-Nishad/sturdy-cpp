#include  <iostream>

using namespace std;
int main() {
    int cups;

    double pricePerCup = 2.5, totalPrice, discount;

    cout << "Please enter the number of cups of tea you want to order: ";
    cin >> cups;

    totalPrice = cups * pricePerCup;

    if(cups > 20) {
        discount = totalPrice * 0.1; // 10% discount
        totalPrice -= discount;
        cout << "You have received a 10% discount!" << endl;
        cout << "Total price after discount: $" << totalPrice << endl;
    } else if (cups > 10) {
        discount = totalPrice * 0.05; // 5% discount
        totalPrice -= discount;
        cout << "You have received a 5% discount!" << endl;
        cout << "Total price after discount: $" << totalPrice << endl;
    } else {
        cout << "No discount applied." << endl;
        cout << "Total price: $" << totalPrice << endl;
    }
    return 0;
}