#include<iostream>
using namespace std;
class A
{
int y;
int x;
public:
void setdata()
{
cout<<"Enter the value Of Y : ";
cin>>y;
cout<<endl;
cout<<"Enter The Value Of the X variable : ";
cin>>x;cout<<endl;
}
friend void display(A);
};
void display(A obj1)
{
int max =obj1.x;
if(obj1.x<obj1.y)
{
max =obj1.y;
}
cout<<"The Maximum Number from the Given two Number ins : "<<max;
}
int main()
{ cout<<endl;
cout<<endl;
cout<<"\t\tHarsh Kumar Jhariya"<<endl;
cout<<"\t\tBT22CSE134"<<endl;
cout<<endl;
cout<<endl;
A obj1;
obj1.setdata();
display(obj1);
cout<<endl;
cout<<endl;
return 0;
}
