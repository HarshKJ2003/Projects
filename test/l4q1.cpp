# include<iostream>
using namespace std;
class casher{
public:
void withdraw(int acc){
cout<<"enter amount to withdraw"<<endl;
int n;
cin>>n;
acc =acc- n;
}
void deposit(int acc){
cout<<"enter amount to deposit"<<endl;
int n;
cin>>n;
acc =acc + n;
}
};
class loan_manager : public casher{
public:
void loan_approv(int acc){
if(acc >= 100000){
cout<<"loan can be approve"<<endl;
}
else{
cout<<"loan cannot be approved"<<endl;
}
}
};
class manager : public loan_manager{
public:

};
int main(){
casher c1;
loan_manager l1;
manager m1;
cout<<"enter account balance"<<endl;
int acc;
cin>>acc;
m1.withdraw(acc);
m1.deposit(acc);
m1.loan_approv(acc);
}
