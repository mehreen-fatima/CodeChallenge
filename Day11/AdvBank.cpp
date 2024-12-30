#include <iostream>
#include <vector>
#include <memory>
#include <string>
#include <limits>
#include <algorithm>
#include <cmath> // For interest calculation
using namespace std;

// Base Class: BankAccount
class BankAccount {
private:
    int accountNumber;
    string ownerName;
    double balance;
    string password;

protected:
    void setBalance(double newBalance) { balance = newBalance; }

public:
    BankAccount(int accNum, string name, double initialBalance, string pass)
        : accountNumber(accNum), ownerName(name), balance(initialBalance), password(pass) {}

    int getAccountNumber() const { return accountNumber; }
    string getOwnerName() const { return ownerName; }
    double getBalance() const { return balance; }

    bool authenticate(string pass) const {
        return password == pass;
    }

    virtual void deposit(double amount) {
        if (amount > 0) {
            balance += amount;
            cout << "Deposited: $" << amount << endl;
        } else {
            cout << "Invalid deposit amount!" << endl;
        }
    }

    virtual void withdraw(double amount) {
        if (amount > 0 && amount <= balance) {
            balance -= amount;
            cout << "Withdrew: $" << amount << endl;
        } else {
            cout << "Invalid withdrawal amount or insufficient balance!" << endl;
        }
    }

    virtual ~BankAccount() = default;
};

// Derived Class: SavingsAccount
class SavingsAccount : public BankAccount {
private:
    double interestRate; // Annual interest rate as a percentage

public:
    SavingsAccount(int accNum, string name, double initialBalance, string pass, double rate)
        : BankAccount(accNum, name, initialBalance, pass), interestRate(rate) {}

    void calculateInterest(int years) const {
        double futureBalance = getBalance() * pow(1 + interestRate / 100, years);
        cout << "Balance after " << years << " years with " << interestRate
             << "% interest rate: $" << futureBalance << endl;
    }
};

// Derived Class: TransactionHistoryAccount
class TransactionHistoryAccount : public SavingsAccount {
private:
    struct Transaction {
        string type;
        double amount;

        Transaction(string t, double a) : type(t), amount(a) {}
    };

    vector<unique_ptr<Transaction>> history;

public:
    TransactionHistoryAccount(int accNum, string name, double initialBalance, string pass, double rate)
        : SavingsAccount(accNum, name, initialBalance, pass, rate) {}

    // Move Constructor
    TransactionHistoryAccount(TransactionHistoryAccount&& other) noexcept
        : SavingsAccount(std::move(other)) {
        history = std::move(other.history);
    }

    // Move Assignment Operator
    TransactionHistoryAccount& operator=(TransactionHistoryAccount&& other) noexcept {
        if (this != &other) {
            SavingsAccount::operator=(std::move(other));
            history = std::move(other.history);
        }
        return *this;
    }

    // Deleted Copy Constructor and Copy Assignment Operator
    TransactionHistoryAccount(const TransactionHistoryAccount&) = delete;
    TransactionHistoryAccount& operator=(const TransactionHistoryAccount&) = delete;

    void deposit(double amount) override {
        BankAccount::deposit(amount);
        history.push_back(make_unique<Transaction>("Deposit", amount));
    }

    void withdraw(double amount) override {
        if (amount <= getBalance()) {
            BankAccount::withdraw(amount);
            history.push_back(make_unique<Transaction>("Withdrawal", amount));
        }
    }

    void transfer(TransactionHistoryAccount& toAccount, double amount) {
        if (amount > 0 && amount <= getBalance()) {
            withdraw(amount);
            toAccount.deposit(amount);
            history.push_back(make_unique<Transaction>("Transfer Out", amount));
            cout << "Transferred $" << amount << " to Account " << toAccount.getAccountNumber() << endl;
        } else {
            cout << "Transfer failed: Insufficient balance or invalid amount.\n";
        }
    }

    void displayHistory() const {
        if (history.empty()) {
            cout << "No transactions available.\n";
            return;
        }
        cout << "\nTransaction History:\n";
        for (const auto& transaction : history) {
            cout << transaction->type << ": $" << transaction->amount << endl;
        }
    }
};


void displayMenu() {
    cout << "\n==== BANK MENU ====\n";
    cout << "1. Deposit\n";
    cout << "2. Withdraw\n";
    cout << "3. View Balance\n";
    cout << "4. View Transaction History\n";
    cout << "5. Transfer Funds\n";
    cout << "6. Calculate Interest\n";
    cout << "7. Exit\n";
    cout << "Enter your choice: ";
}

int main() {
    vector<TransactionHistoryAccount> accounts;

    // Create some example accounts
    accounts.emplace_back(101, "John Doe", 1000.0, "pass123", 5.0);
    accounts.emplace_back(102, "Jane Smith", 1500.0, "secure456", 4.0);  
    int currentAccountIndex = -1;
    string enteredPassword;

    // Login
    cout << "Enter Account Number: ";
    int accNum;
    cin >> accNum;

    for (size_t i = 0; i < accounts.size(); ++i) {
        if (accounts[i].getAccountNumber() == accNum) {
            cout << "Enter Password: ";
            cin >> enteredPassword;

            if (accounts[i].authenticate(enteredPassword)) {
                currentAccountIndex = i;
                cout << "Login successful! Welcome, " << accounts[i].getOwnerName() << endl;
            } else {
                cout << "Incorrect password.\n";
                return 0;
            }
        }
    }

    if (currentAccountIndex == -1) {
        cout << "Account not found.\n";
        return 0;
    }

    int choice;
    do {
        displayMenu();

        if (!(cin >> choice)) {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << "Invalid input. Please enter a number.\n";
            continue;
        }

        auto& currentAccount = accounts[currentAccountIndex];

        switch (choice) {
        case 1: {
            double amount;
            cout << "Enter amount to deposit: ";
            cin >> amount;
            currentAccount.deposit(amount);
            break;
        }
        case 2: {
            double amount;
            cout << "Enter amount to withdraw: ";
            cin >> amount;
            currentAccount.withdraw(amount);
            break;
        }
        case 3:
            cout << "Current Balance: $" << currentAccount.getBalance() << endl;
            break;
        case 4:
            currentAccount.displayHistory();
            break;
        case 5: {
            int toAccNum;
            double amount;
            cout << "Enter Account Number to transfer to: ";
            cin >> toAccNum;

            auto it = find_if(accounts.begin(), accounts.end(),
                              [toAccNum](const TransactionHistoryAccount& acc) {
                                  return acc.getAccountNumber() == toAccNum;
                              });

            if (it != accounts.end()) {
                cout << "Enter amount to transfer: ";
                cin >> amount;
                currentAccount.transfer(*it, amount);
            } else {
                cout << "Target account not found.\n";
            }
            break;
        }
        case 6: {
            int years;
            cout << "Enter number of years for interest calculation: ";
            cin >> years;
            currentAccount.calculateInterest(years);
            break;
        }
        case 7:
            cout << "Thank you for using the bank system. Goodbye!\n";
            break;
        default:
            cout << "Invalid choice. Please try again.\n";
            break;
        }
    } while (choice != 7);

    return 0;
}
