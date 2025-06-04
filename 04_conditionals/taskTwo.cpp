#include  <iostream>

using namespace std;
int main() {
    int hours;
    cout << "Please enter the current hour: ";
    cin >> hours; // Read the current hour
    if(hours >=8 && hours <= 18){
        cout << "The store is open." << endl;
    } else if (hours < 8 || hours > 18) {
        cout << "The store is closed." << endl;
    } else {
        cout << "Invalid hour entered." << endl;
    }
    return 0;
}