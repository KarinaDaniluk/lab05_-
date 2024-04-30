#include <iostream>
#include <vector>
#include <string>

using namespace std;

class BankAccount {
protected:
    string surname;
    string firstName;
    string lastOperationDate;
    double depositAmount;

public:
    BankAccount(string sname, string fname, string date, double amount) 
        : surname(sname), firstName(fname), lastOperationDate(date), depositAmount(amount) {}

    void display() {
        cout << "Surname: " << surname << endl;
        cout << "First Name: " << firstName << endl;
        cout << "Last Operation Date: " << lastOperationDate << endl;
        cout << "Deposit Amount: " << depositAmount << endl;
    }

    void updateLastOperation(string date) {
        lastOperationDate = date;
    }
};

class SpecializedBankAccount : public BankAccount {
private:
    string accountType;
    double interestRate;

public:
    SpecializedBankAccount(string sname, string fname, string date, double amount, string type, double rate)
        : BankAccount(sname, fname, date, amount), accountType(type), interestRate(rate) {}

    void display() {
        BankAccount::display(); 
        cout << "Account Type: " << accountType << endl;
        cout << "Interest Rate: " << interestRate << "%" << endl;
    }
};

int main() {
    BankAccount account1("Doe", "John", "2024-04-25", 1000.0);
    account1.display();

    SpecializedBankAccount specializedAccount1("Smith", "Alice", "2024-04-26", 2000.0, "Savings", 3.5);
    specializedAccount1.display();

    return 0;
}

