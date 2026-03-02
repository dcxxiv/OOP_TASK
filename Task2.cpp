// Task 2: Stack vs Heap Comparison
#include <iostream>
using namespace std;
class MemoryCheck {
public:
    MemoryCheck() {
        cout << "Constructor calledthe Address: " << this << endl;
    }
    ~MemoryCheck() {
        cout << "Destructor called Address: " << this << endl;
    }
    void printAddress() {
        cout << "Object addrss using by this pointer: " << this << endl;
    }
};
int main() {
    MemoryCheck obj1;
    obj1.printAddress();
    MemoryCheck* obj2 = new MemoryCheck();
    MemoryCheck* obj3 = new MemoryCheck();

    obj2->printAddress();
    obj3->printAddress();

    delete obj2;
    delete obj3;
    return 0;
}