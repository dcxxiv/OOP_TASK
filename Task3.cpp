// Copy Constructor Analysis
#include <iostream>
using namespace std;
class Book {
private:
    string title;
public:
    Book() {
        title = "Unknown";
        cout << "Default Constructor called Address: " << this << endl;
    }
    Book(string t) {
        title = t;
        cout << "Parameterized Constructor called to Address: " << this << endl;}
    Book(const Book &b) {
        title = b.title;
        cout << "Copy Constructor called.. Address: " << this << endl;
    }
    ~Book() {
        cout << "Destructor called. Address: " << this << endl;
    }
};int main() {
    Book b1;
    Book b2("C++ Programming");
    Book b3 = b1;
    Book b4(b2);
    return 0;
}