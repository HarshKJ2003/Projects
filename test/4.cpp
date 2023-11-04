#include <iostream>
using namespace std;

class base1 {
public:
    virtual void fun(int unused) {
        cout << "base1" << endl;
    }
};

class base2 {
public:
    virtual void fun() {
        cout << "base2" << endl;
    }
};

class derived : public base1, public base2 {
public:
    void fun() {
        cout << "Derived" << endl;
    }
};

int main() {
    derived d1;
    d1.fun();     
    d1.fun(12);
    return 0;
} 