#include <iostream>
using namespace std;
class Shape {
public:
    virtual float area() = 0;
};
class Circle : public Shape {
private:
    float radius;

public:
    Circle(float r) : radius(r) {}
    float area() {
        return 3.14 * radius * radius;
    }
};
class Rectangle : public Shape {
private:
    float length;
    float width;

public:
    Rectangle(float l, float w) : length(l), width(w) {}
    float area() {
        return length * width;
    }
};
int main() {
    Circle circle(5.0);
    Rectangle rectangle(4.0, 6.0);
    cout << "Area of Circle: " << circle.area() << endl;
    cout << "Area of Rectangle: " << rectangle.area() << endl;

    return 0;
}