#include <iostream>
#include <ctime>
using namespace std;
class Emplyoee
{
    long long int id;
    string name;
    long long int basicsalary;
    long long int ta;

public:
    void setdata()
    {
        cout << "Enter the employee ID" << endl;
        cin >> id;
        cout << "\nEnter Name of Employee" << endl;
        getline(cin, name);
        getline(cin, name);
        cout << "\nEnter Basic Salary " << endl;
        cin >> basicsalary;
        cout << "\nEnter TA " << endl;
        cin >> ta;
    }
    void showdata()
    {
        int totalsalary;
        totalsalary = basicsalary + ta;
        cout << "Total Salary: " << totalsalary << endl;
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
    Emplyoee e1;
    e1.setdata();
    e1.showdata();
}