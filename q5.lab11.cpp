#include <iostream>
#include <exception>

using namespace std;


class InsufficientFundsException : public exception {
private:
    double deficit; 

public:
    InsufficientFundsException(double deficitAmount) : deficit(deficitAmount) {}

    const char* what() const noexcept override {
        return "Insufficient funds for this withdrawal!";
    }

    double getDeficit() const {
        return deficit;
    }
};

template <typename T>
class BankAccount {
private:
    T balance;

public:
    BankAccount(T initialBalance) : balance(initialBalance) {}

    T getBalance() const {
        return balance;
    }

    void deposit(T amount) {
        balance += amount;
    }

    void withdraw(T amount) {
        if (amount > balance) {
            double deficit = static_cast<double>(amount) - static_cast<double>(balance);
            throw InsufficientFundsException(deficit);
        }
        balance -= amount;
    }
};


void printCurrency(double amount) {
    cout << "$" << (amount < 0 ? "-" : "") << (int)amount; 
    cout << ".";
    int cents = (amount - (int)amount) * 100;  
    if (cents < 10) cout << "0";  
    cout << cents;  
}


int main() {
    BankAccount<double> account(500.00);  

    cout << "Balance: ";
    printCurrency(account.getBalance());
    cout << endl;

    try {
        double withdrawalAmount = 600.00;
        cout << "\nWithdraw $";
        printCurrency(withdrawalAmount);
        cout << ": ";
        account.withdraw(withdrawalAmount);
    } catch (const InsufficientFundsException& e) {
        cout << e.what() << endl;
        cout << "Deficit: $";
        printCurrency(e.getDeficit());
        cout << endl;
    }

    return 0;
}
