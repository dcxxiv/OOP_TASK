// Task 1: LIFO Behavior on Stack

// Q1: Write the exact constructor and destructor execution order.
#include <iostream>
using namespace std;

class Tracer{
public:
    Tracer(){
        cout<<"constructor called"<<endl;
}
    ~Tracer(){
        cout<<"destructor called for objcet at adress " << this <<endl;
}
};
void test(){
    Tracer t3;
}
int main(){
    Tracer t1;
    {
        Tracer t2;
    }
    test();
    return 0;
}