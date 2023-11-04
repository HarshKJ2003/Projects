#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
    fstream myfile;
    myfile.open("test1.txt", ios::out | ios::app); 
    myfile << "This is a string";
    myfile.close();  
    myfile.open("test1.txt", ios::in);
    string line;
    while(getline(myfile, line))
    cout << line << endl;
    myfile.close(); 
}