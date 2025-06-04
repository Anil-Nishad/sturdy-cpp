#include <iostream>
using namespace std;

int main() {
    int chaiTemperature[5] = {80, 85, 90, 95, 100}; // Array to store chai temperatures
    cout << "Chai Temperatures: ";
    for (int i = 0; i < 5; i++) {
        cout << chaiTemperature[i] << " degrees Celsius \n";
    }
    cout << endl;

    int chaiVolume[5] = {200, 250, 300, 350, 400}; // Array to store chai volumes
    return 0;
}