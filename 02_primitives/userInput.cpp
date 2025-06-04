#include <iostream>
#include <string>


using namespace std;
int main(){
    string userTea;
    int teaQuantity;

    cout << "What would like to order in tea?";
    getline(cin, userTea);
    cout << "How many cups of "<< userTea << "tea would you like?";
    cin >> teaQuantity;
    cout << "You have ordered " << teaQuantity << " cups of " << userTea << " tea." << endl;
    return 0;
}