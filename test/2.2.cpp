#include <iostream>
#include <fstream>
#include <string>
#include <cstdlib>
using namespace std;

int main()
{
    fstream myfile;
    myfile.open("test3.txt", ios::out | ios::app); 
    for(int i=0;i<25;i++){
        for(int j=0;j<25;j++){
            int a=rand()%8;
            myfile << " "+to_string(a);
        }
        myfile << endl;
    }
    string line;
    while(getline(myfile, line)){
    cout << line << endl;
    }
    myfile.close(); 
}