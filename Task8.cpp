// Task 8: Pointer Reassignment & Memory Leak 
#include <iostream>
using namespace std;

class Object {
public:
    Object() { cout << "Constructor called:\n"; }
    ~Object() { cout << "Destructor called\n"; }
};

int main() {
    Object* a = new Object();
    Object* b = new Object();

    delete a;
    a = b;

    delete a;

    return 0;
}