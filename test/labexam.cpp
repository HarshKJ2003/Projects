#include <iostream>
using namespace std;

class mark {
public:
    void getresult();
    void setresult(int marks);

private:
    int marks;
};

class teacher : public mark {
public:
    static int roll;
    void exam();
    int rolldisplay();

protected: 
    int rollnumberlist[10];
};

class student : public teacher {
public:
    int password;
    void registration();
};

int teacher::roll = 0;

void mark::getresult() {
    cout << "Marks: " << marks << endl;
}

void mark::setresult(int marks) {
    this->marks = marks;
}

void student::registration() {
    cout << "Enter roll number:";
    cin >> rollnumberlist[roll];
    roll++;
    cout << "\nEnter password:";
    cin >> password;
}

void teacher::exam() {
    int marks = 0;
    int answer;

    cout << "\nIs Delhi the capital of India? (0 for yes, 1 for no): ";
    cin >> answer;
    if (answer == 0) {
        marks++;
    }

    cout << "\nIs Mumbai the capital of Maharashtra? (0 for yes, 1 for no): ";
    cin >> answer;
    if (answer == 0) {
        marks++;
    }

    setresult(marks);
}

int teacher::rolldisplay() { 
    return rollnumberlist[0];
}

int main() {
    student hkj;
    hkj.registration();
    hkj.exam();
    hkj.getresult();
    cout << "\nNow for testing, displaying roll number array index 0 using public function of teacher class: " << hkj.rolldisplay();

    return 0;
}
