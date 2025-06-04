#include <iostream>
using namespace std;
int main(){
    bool isStudent;
    cout << "Are you a student? (1 for yes, 0 for no): ";
    cin >> isStudent;
    int cups;
    cout << "Enter number of cups you have: ";
    cin >> cups;
    if (cups > 15 || isStudent){
        cout << "You are eligible for discount!" << endl;
    } else {
        cout << "You are not eligible for discount!" << endl;
    }
    return 0;
}