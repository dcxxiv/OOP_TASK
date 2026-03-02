// Task 5: Object Composition
#include <iostream>
using namespace std;
class Engine {
public:
    Engine() {
        cout << "Engine Constructor called the Address: " << this << endl;
    }

    ~Engine() {
        cout << "Engine Destructor called Address: " << this << endl;
    }
};
class Car {
private:
    Engine engine; 
public:
    Car() {
        cout << "Car Constructor called to Address: " << this << endl;
    }
    ~Car() {
        cout << "Car Destructor called.. Address: " << this << endl;}
};int main() {
    Car myCar;
    return 0;
}