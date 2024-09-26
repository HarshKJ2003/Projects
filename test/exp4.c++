#include <iostream>
#include <ctime>
using namespace std;
class bank
{
    static int count;

public:
    bank()
    {
        count++;
    }
    static void account()
    {
        cout << "Number of Accounts: " << count << endl;
    }
};
int bank::count = 0;
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
    bank a, b, c, d;
    a.account();
}
