#include<iostream>
using namespace std;
class fun
{
int h;
public :
fun()
{
cout<<"Enter the Value Of the h : ";
cin>>h;
cout<<endl;
}
void show()
{
cout<<"The Value of The object : "<<h<<endl;
}
};
int main()
{
cout<<endl;
cout<<endl;
cout<<"\t\tHarsh Kumar Jhariya"<<endl;
cout<<"\t\tBT22CSE134"<<endl;
cout<<endl;
cout<<endl;
fun obj1;
fun obj2=obj1;
cout<<"\n";
obj2.show();
cout<<endl;
cout<<endl;
return 0;
}
