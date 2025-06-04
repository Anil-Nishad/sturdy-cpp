#include <iostream>

using namespace std;
// Encapsulation: The process of wrapping data and methods that operate on that data within a single unit (class).
// It restricts direct access to some components and can prevent the accidental modification of data.
// Encapsulation is achieved using access specifiers: public, private, and protected.
// 1. Public: Members declared as public are accessible from outside the class.
// 2. Private: Members declared as private are accessible only within the class itself.
// 3. Protected: Members declared as protected are accessible within the class and by derived classes.
class BankAccount {
    private:
        string accountNumber;
        double balance;

    public:
        BankAccount(string accNum, double initialBalance) {
            accountNumber = accNum;
            balance = initialBalance;
        }

        //Getter for account number
        string getAccountNumber() const{
            return accountNumber;
        }

        //Getter for balance
        double getBalance() {
            return balance;
        }

        //Method to deposit money
        void deposit(double amount) {
            if (amount > 0) {
                balance += amount;
                cout << "Deposited: " << amount << endl;
            } else {
                cout << "Invalid deposit amount." << endl;
            }
        }

        //Method to withdraw money
        void withdraw(double amount) {
            if (amount > 0 && amount <= balance) {
                balance -= amount;
                cout << "Withdrawn: " << amount << endl;
            } else {
                cout << "Invalid withdrawal amount." << endl;
            }
        }
};

int main() {
    // Create a BankAccount object
    BankAccount myAccount("123456789", 1000.0);

    // Accessing public methods
    cout << "Account Number: " << myAccount.getAccountNumber() << endl;
    cout << "Initial Balance: " << myAccount.getBalance() << endl;

    // Deposit money
    myAccount.deposit(500.0);
    cout << "New Balance: " << myAccount.getBalance() << endl;

    // Withdraw money
    myAccount.withdraw(200.0);
    cout << "New Balance: " << myAccount.getBalance() << endl;

    return 0;
}