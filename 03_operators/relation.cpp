#include <iostream>
using namespace std;
int main(){
    int cups;
    cout << "Enter number of cups you have: ";
    cin >> cups;
    if (cups >20){
        cout << "You will get a GOLD badge!" << endl;
    } else if (cups >= 10 && cups <= 20){
        cout << "You will get a SILVER badge!" << endl;
    } else {
        cout << "You need to buy more cups." << endl;
    }
    return 0;
}