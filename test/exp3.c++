#include <iostream>
#include <ctime>
using namespace std;
const int size = 5;
class Student
{
    string name;
    int id;
    int sem;
    string branch;
    int marks[5];
    int total;
    string grade;
    int passfail;

public:
    Student()
    {
        cout << "Enter ID: ";
        cin >> id;
        cout << "\nEnter Name: ";
        getline(cin, name);
        getline(cin, name);
        cout << "\nEnter Semester: ";
        cin >> sem;
        int k;
        cout << "Select branch : \n1)CSE \t2)ECE\t ";
        cin >> k;
        if (k == 1)
        {
            branch = "CSE";
        }
        else
        {
            branch = "ECE";
        }
        passfail = 1;
    }
    void markis()
    {
        for (int i = 0; i < 5; i++)
        {
            cout << "\nEnter Marks of subject " << i + 1 << " : ";
            cin >> marks[i];
            if (marks[i] < 40)
            {
                passfail = 0;
            }
        }
    }
    void Agg()
    {
        total = marks[4] + marks[3] + marks[2] + marks[1] + marks[0];
        if (passfail)
        {
            int t = total / 5;

            if (90 <= t && t <= 100)
            {
                grade = 'A';
            }
            else if (80 < t && t >= 76.5)
            {
                grade = 'B';
            }
            else if (76.5 > t && t >= 70)
            {
                grade = 'C';
            }
            else
            {
                grade = 'D';
            }
        }
        else
        {
            grade = "Fail";
        }
    }
    void getdata()
    {
        cout << endl;
        cout << "ID:" << id << endl;
        cout << "Name:" << name << endl;
        cout << "Semester:" << sem << endl;
        cout << "Branch:" << branch << endl;
        cout << "Total:" << total << endl;
        cout << "Grade:" << grade << endl;
    }
};
void name()
{
    cout << "BT22CSE134";
    std::time_t t = std::time(0);   
    std::tm* now = std::localtime(&t);
    std::cout << (now->tm_year + 1900) << '-' 
         << (now->tm_mon + 1) << '-'
         <<  now->tm_mday
         << "\n";
}
int main()
{
    name();
    Student s1;
    s1.markis();
    s1.Agg();
    s1.getdata();
}