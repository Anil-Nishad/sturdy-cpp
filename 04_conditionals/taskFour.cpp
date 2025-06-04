#include  <iostream>
#include  <string>
using namespace std;
int main() {
    int choice;
    double price;
    cout << "Select your tea\n";
    cout << "1. Green Tea\n";
    cout << "2. Black Tea\n";
    cout << "3. Herbal Tea\n";
    cout << "4. Oolong Tea\n";
    cout << "5. White Tea\n";
    
    cin >> choice; 
    
    switch(choice){
     case 1:
        price = 3.0;
        cout << "You selected Green Tea. Price: $" << price << endl;
        break;
     case 2:
        price = 2.5;
        cout << "You selected Black Tea. Price: $" << price << endl;
        break;
     case 3:
        price = 4.0;
        cout << "You selected Herbal Tea. Price: $" << price << endl;
        break;
     case 4:
        price = 3.5;
        cout << "You selected Oolong Tea. Price: $" << price << endl;
        break;
     case 5:
        price = 5.0;
        cout << "You selected White Tea. Price: $" << price << endl;
        break; 
     default:
        cout << "Invalid selection. Please select a valid tea option." << endl;
        break;
    }// Read the user's choice
}