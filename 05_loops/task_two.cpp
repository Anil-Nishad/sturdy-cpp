#include  <iostream>
#include  <string>
using namespace std;
int main() {
    string response;

    do{
        cout <<  "Do you want more tea (yes/no): ";
        getline(cin, response);

    }
    while(response == "yes" || response == "y");
    cout <<  "Thank you for your order." << endl;
    
    return 0;
}