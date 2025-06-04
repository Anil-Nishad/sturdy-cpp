#include <iostream>
using namespace std;

int main() {
    int chaiSales[6][7] = {
        {10, 20, 30, 40, 50, 60, 70}, // Week 1 sales of Shop 1
        {15, 25, 35, 45, 55, 65, 75}, // Week 1 sales of Shop 2
        {20, 30, 40, 50, 60, 70, 80}, // Week 1 sales of Shop 3
        {25, 35, 45, 55, 65, 75, 85}, // Week 1 sales of Shop 4
        {30, 40, 50, 60, 70, 80, 90}, // Week 1 sales of Shop 5
        {35, 45, 55, 65, 75, 85, 95}, // Week 1 sales of Shop 6                          
    };

    for(int i = 0 ; i < 7 ; i++){
        cout << "Sales for Shop " << i + 1 << ": \n";
        // Display sales for each shop
        for(int j = 0 ; j < 7 ; j++){
            cout << chaiSales[i][j] << " Cups of Day " << j + 1 << " \n";
        }
        cout << endl;
    }
    return 0;
}