#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
    fstream myfile;
    myfile.open("test1.txt", ios::out | ios::app); 
    char a='B';
    myfile << a;
    myfile.close();  
    myfile.open("test1.txt", ios::in);
    string line;
    while(getline(myfile, line))
    cout << line << endl;
    myfile.close(); 
}