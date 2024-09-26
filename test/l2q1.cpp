#include <iostream>
#include <cmath> 
using namespace std;

class fun {
public:
    void area(int side) {
        cout << "The area of the cube with given side " << side << " is " << pow(side, 3) << endl;
    }

    void area(int base, int height) {
        cout << "The area of the Triangle is " << 0.5 * base * height << endl;
    }

    void area(double radius) {
        cout << "The area of the circle is " << 3.14 * pow(radius, 2) << endl;
    }

    void area(double len, double bri) { 
        cout << "The area of the rectangle is " << len * bri << endl;
    }
};

int main() {
    cout << endl;
    cout << endl;
    cout << "\t\tHarsh Kumar Jhariya" << endl;
    cout << "\t\tBT22CSE134" << endl;
    cout << endl;
    cout << endl;

    fun obj1;
    obj1.area(5);
    obj1.area(3, 4);
    obj1.area(.7896);
    obj1.area(3.2, 2.0);

    return 0;
}
