#include <iostream>
#include<ctime>
using namespace std;
class student
{
public:
string s;
int roll;
void name(string t,int x)
{
s=t;
roll=x;
}
};
class exam
{
public:
int s1;
int s2;
int s3;
void marks(int x, int y, int z)
{
s1=x;
s2=y;
s3=z;
}
};
class result : public student, public exam
{
public :
void outcome()
{
if(s1 >= 40)
cout << "PASS in subject 1" << endl;
else
cout << "FAIL in subject 1" << endl;
if(s2 >= 40)
cout << "PASS in subject 2" << endl;
else
cout << "FAIL in subject 2" << endl;
if(s3 >= 40)
cout << "PASS in subject 3" << endl;
else
cout << "FAIL in subject 3" << endl;
}
};
int main()
{
string t;
int a,x,y,z;
time_t now = time(0);
char* dt = ctime(&now);
cout << "The local date and time is : " << dt << endl;
result stu;
cout << "Enter name of the student " << endl;
cin >> t;
cout << "Enter roll number of the student " << endl;
cin >> a;
stu.name(t,a);
cout << "Enter marks in subject 1 " << endl;
cin >> x;
cout << "Enter marks in subject 2 " << endl;
cin >> y;
cout << "Enter marks in subject 3 " << endl;
cin >> z;
stu.marks(x,y,z);
cout << "Name of the student " << stu.s << endl;
cout << "Roll Number of the student " << stu.roll << endl;
cout << "Result of the student " << endl;
stu.outcome();
}
