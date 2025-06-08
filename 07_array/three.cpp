#include <iostream>
using namespace std;

int totalChaiServed(int chaiServed[], int size) {
    int total = 0;
    for (int i = 0; i < size; i++) {
        total += chaiServed[i];
    }
    return total;
}

int main() {
    int chaiServed[7] = {1, 2, 3, 4, 5, 6, 7}; // Array to store chai servings
    cout << "Chai Served on Day 1: " << chaiServed[0] << " cups" << endl;
    cout << "Chai Served on Day 2: " << chaiServed[1] << " cups" << endl;

    int totalChai = totalChaiServed(chaiServed, 7);
    cout << "Total Chai Served in a Week: " << totalChai << " cups" << endl;

    return 0;

}