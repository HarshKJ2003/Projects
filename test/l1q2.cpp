#include<iostream>
using namespace std;

class student {
private:
    string name;
    string roll_name;
    string course;
    int mttd;
    int dge;
    int mg;
    int commskill;
    int ap;
    int ds;
    string status;

public:
    void getdata();
    void display();
};

void student::getdata() {
    cout << "Enter The name of Student : ";
    cin >> name;
    cout << "\nEnter the Roll Number Of Student : ";
    cin >> roll_name;
    cout << "\nEnter Course Name: ";
    cin >> course;
    cout << "\nEnter Marks in Maths : ";
    cin >> mttd;
    cout << "\nEnter Marks in Digital-Electronics : ";
    cin >> dge;
    cout << "\nEnter Marks in Mechanics & graphics : ";
    cin >> mg;
    cout << "\nEnter Marks in Communication Skills : ";
    cin >> commskill;
    cout << "\nEnter Marks in Application programming : ";
    cin >> ap;
    cout << "\nEnter Marks in Data Structure : ";
    cin >> ds;

    if (mttd >= 30 && dge >= 25 && mg >= 40 && commskill >= 40 && ap >= 40 && ds >= 40)
        status = "Pass";
    else
        status = "Fail";
}

void student::display() {
    cout << "\n\n\n";
    for (int i = 0; i < 55; i++) {
        cout << "__";
    }
    cout << "\n\t\t\t\t\t Result of Student\n";
    for (int i = 0; i < 55; i++) {
        cout << "__";
    }
    cout << endl;
    cout << "Name = " << name << " \nRoll No. =" << roll_name << "\nCourse = " << course << endl;
    for (int i = 0; i < 55; i++) {
        cout << "..";
    }
    cout << endl;
    cout << "\nMarks In Mathematics = " << mttd << "\nMarks In Digital Electronic =" << dge << "\n";
    cout << "Marks In Machine Graphics = " << mg << "\nMarks In Communication Skill: " << commskill << "\nMarks In Application Programming :" << ap;
    cout << "\nMarks In Data Structure : " << ds << endl;
    for (int i = 0; i < 55; i++) {
        cout << "..";
    }
    cout << "\n\t\t\t\t\t Result: " << status << endl;
    for (int i = 0; i < 55; i++) {
        cout << "__";
    }
    cout << endl << endl << endl;
}

int main() {
    cout << endl;
    cout << endl;
    cout << "\t\tHarsh Kumar Jhariya" << endl;
    cout << "\t\tBT22CSE134" << endl;
    cout << endl;
    cout << endl;
    student s1;
    s1.getdata();
    s1.display();
    cout << "The current date and time is: Mon Aug 21 15:35:56 2023" << endl;
    return 0;
}
