//code updated
#include <iostream>
using namespace std;
class Base {
public:
    virtual void display() {
        cout << "This is the Base class." << endl;
    }
};
class Derived : public Base {
public:
    void display() override {
        cout << "This is the Derived class." << endl;
    }
};
int main() {
    Base baseObj;
    Derived derivedObj;
    Base* ptr = &baseObj;
    ptr->display();  
    ptr = &derivedObj;
    ptr->display();  
    return 0;
}