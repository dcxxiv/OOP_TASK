#include <iostream>
using namespace std;
class BankAccount {
private:
    string name;
    int accountNumber;
    double balance;
public:
    BankAccount() {
        name = "Unknown";
        accountNumber = 10000;
        balance = 0;
    }
    BankAccount(string n, int accNum, double bal) {
        name = "Unknown";
        accountNumber = 10000;
        balance = 0;
     
        setName(n);
        setAccountNumber(accNum);
        setBalance(bal);
 }
    BankAccount(const BankAccount &b) {
        name = b.name;
        accountNumber = b.accountNumber;
        balance = b.balance;
    }
    void setName(string n) {
        if (n == "")
            cout << "Invalid Name" << endl;
        else
            name = n;
    }
      void setAccountNumber(int accNum) {
        if (accNum < 10000 || accNum > 99999)
            cout << "Invalid Account Number" << endl;
        else
            accountNumber = accNum;
        }
    void setBalance(double bal) {
        if (bal < 0)
            cout << "Invalid Balance" << endl;
        else
            balance = bal;
    }
    string getName() {
         return name; }
    int getAccountNumber() {
         return accountNumber; }
    double getBalance() {
         return balance; }
    void displayAccountInfo() {
        cout << "Account Holder Name: " << name << endl;
        cout << "Account Number:       " << accountNumber << endl;
        cout << "Balance:              " << balance << endl;
    }
};
int main() {
    BankAccount acc1("Ali", 12345, 5000);
    acc1.displayAccountInfo();
    cout << endl;
    BankAccount acc2 = acc1;
    acc2.displayAccountInfo();
    cout << endl;
    BankAccount acc3("", 999, -100);
    acc3.displayAccountInfo();
    return 0;
}