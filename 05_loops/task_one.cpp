#include  <iostream>
#include  <string>
using namespace std;
int main() {
    int teacups;
    cout << "Please enter the number of teacups to server: ";
    cin >> teacups;
    while(teacups > 0) {
        teacups--;
        cout << "Serving a teacup. Remaining teacups: " << teacups << endl; 
    }
    cout << "All teacups have been served." << endl;
    return 0;
}