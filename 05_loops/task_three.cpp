#include  <iostream>
#include  <string>
using namespace std;
int main() {
    int teaCups;
    for(int i = 1; i <= teaCups; i++) {
        cout << "Please enter the number of teacups to serve: ";
        cin >> teaCups;
        while(teaCups > 0) {
            teaCups--;
            cout << "Serving a teacup. Remaining teacups: " << teaCups << endl; 
            cout << "Do you like tea? (yes/no): ";
            string response;
            cin >> response;
            if(response == "no" || response == "No" || response == "NO" || response == "n" || response == "N") {
                cout << "You don't like tea. Stopping the serving process." << endl;
                break;
            }
        }
        cout << "All teacups have been served." << endl;
    }

    cout << "Thank you for your time!" << endl;
    cout << "Goodbye!" << endl;
    return 0;
}