#include<iostream>
# include <ctime>
using namespace std;
class employee{
string id;
string name;
int salary;
public :
void setdata();
void calculate_salary();
void display();
};
void employee::setdata()
{
cout<<"Enter Your Name : ";
cin>>name;
cout<<"Enter Your I'd : ";
cin>>id;
cout<<endl;
}
void employee::calculate_salary()
{ cout<<"Enter Your Basic Salary : ";
int basic_salary;
cin>>basic_salary;
cout<<endl;
cout<<"Enter Your Daily Allowances : ";
int allo;
cin>>allo;
cout<<endl;
salary=basic_salary + allo+(basic_salary
*0.20)+(basic_salary*0.50)+1000;
}
void employee::display()
{
cout<<"Name of Employee : "<<name;
cout<<endl;
cout<<"Id of employee : "<<id;
cout<<endl;
cout<<"Salary getting per-month : "<<salary;
cout<<endl;
}
int main()
{
cout<<endl;
cout<<endl;
cout<<"\t\tHarsh Kumar Jhariya"<<endl;
cout<<"\t\tBT22CSE134"<<endl;
cout<<endl;
cout<<endl;
employee m1;
m1.setdata();
m1.calculate_salary();
cout<<endl;
m1.display();
cout << "The current date and time is: " << date_time << endl;
return 0;
}