#include<iostream>
using namespace std;

class fun {
public:
    void test(int i) {
        int sum = 0;
        for (int l = 1; l < i; l++) {
            if (i % l == 0) {
                sum += l;
            }
        }
        if (sum == i) {
            cout << "The Number " << i << " is a Perfect number." << endl;
        }
        else {
            cout << "The Number " << i << " is Not a Perfect number." << endl;
        }
    }

    void test(double i) {
        int k = (int)i;
        double j = i - k;
        cout << "The Integer Part Of the Given Number " << i << " is " << k << endl;
        cout << "The Decimal part of Given Number " << i << " is " << j << endl;
    }

    void test(char i) {
        cout << "The Ascii Value Of the Given Character " << i << " is " << (int)i << endl;
    }
};

int main() {
    cout << "\t\tHarsh Kumar Jhariya" << endl;
    cout << "\t\tBT22CSE134" << endl;
    cout << endl;

    fun obj1;
    obj1.test(6);
    obj1.test(6.253);
    obj1.test('A');

    cout << endl;
    return 0;
}
