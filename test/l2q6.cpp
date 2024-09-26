#include <iostream>
#include <time.h>
using namespace std;


void display(int m[][100], int r, int c) {
    int best = 0;
    if (r != c) {
        if (r > c)
            cout << "It has more rows than columns: " << r << endl;
        else
            cout << "It has more columns than rows: " << c << endl;
    }
    else {
        for (int i = 0; i < r; i++)
            if (m[i][i] > best)
                best = m[i][i];
        cout << "It is a square matrix" << endl;
        cout << "The largest diagonal element is " << best << endl;
    }
}


int main() {
    int r, c;
    struct tm* ptr;
    time_t t;
    t = time(NULL);
    ptr = localtime(&t);
    cout << asctime(ptr);
   
    cout << "Enter row value: ";
    cin >> r;
    cout << "Enter column value: ";
    cin >> c;
   
    int m[100][100];
    cout << "Enter the elements:" << endl;
   
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++)
            cin >> m[i][j];
    }
   
    display(m, r, c);
   
    return 0;
}