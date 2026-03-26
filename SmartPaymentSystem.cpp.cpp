#include <iostream>
#include <string>
using namespace std;
class Payment {
protected:
    double amount;
    string transactionID;

public:
    Payment(double amt, string tid) {
        if (amt <= 0) {
            cout << "Invalid amount! Setting to 1\n";
            amount = 1;
        } else {
            amount = amt;
        }
        transactionID = tid;
    }
    virtual void processPayment() = 0;
    virtual void generateReceipt() = 0;
};
class CreditCard : public Payment {
public:
    CreditCard(double amt, string tid) : Payment(amt, tid) {}

    void processPayment() {
        cout << "\nProcessing Credit Card Payment...\n";
    }
    void generateReceipt() {
        cout << "Receipt (Credit Card)\n";
        cout << "Transaction ID: " << transactionID << endl;
        cout << "Amount: " << amount << endl;
    }
};
class PayPal : public Payment {
public:
    PayPal(double amt, string tid) : Payment(amt, tid) {}
    void processPayment() {
        cout << "\nProcessing PayPal Payment...\n";
    }
     void generateReceipt() {
        cout << "Receipt (PayPal)\n";
        cout << "Transaction ID: " << transactionID << endl;
        cout << "Amount: " << amount << endl;
    }
};
class BankTransfer : public Payment {
public:
    BankTransfer(double amt, string tid) : Payment(amt, tid) {}

    void processPayment() {
        cout << "\nProcessing Bank Transfer...\n";
    }

    void generateReceipt() {
        cout << "Receipt (Bank Transfer)\n";
        cout << "Transaction ID: " << transactionID << endl;
        cout << "Amount: " << amount << endl;
    }
};
string generateID(int num) {
    return "TXN" + to_string(1000 + num);
}int main() {
    Payment* p;  
    int choice;
    double amount;
    cout << "Enter amount: ";
    cin >> amount;
    cout << "\nChoose payment method:\n";
    cout << "1. Credit Card\n";
    cout << "2. PayPal\n";
    cout << "3. Bank Transfer\n";
    cout << "Enter choice: ";
    cin >> choice;
    if (choice == 1) {
        p = new CreditCard(amount, generateID(1));
    }
    else if (choice == 2) {
        p = new PayPal(amount, generateID(2));
    }
    else if (choice == 3) {
        p = new BankTransfer(amount, generateID(3));
    }
    else {
        cout << "Invalid choice!\n";
        return 0;
    }
    p->processPayment();
    p->generateReceipt();

    delete p;

    return 0;
}