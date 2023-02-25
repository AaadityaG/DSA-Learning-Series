// Program to check whether you enter number or small character of capital character 

#include <iostream>
using namespace std;

int main()
{    
    int a;
    cout<<"Enter your input:"<<endl;
    a = cin.get();     // get() is used to get the character
    if(a>=48 && a<=57){
        cout<<"You entered a NUMERIC value"<<endl;
    }
    else if(a>=65 && a<=90){
        cout<<"You entered a CAPITAL character"<<endl;
    }
    else if(a>=97 && a<=122){
        cout<<"You entered a SMALL character"<<endl;
    }
    else{
        cout<<"Re-Enter the valid inputs:"<<endl;
    }
    return 0;
}