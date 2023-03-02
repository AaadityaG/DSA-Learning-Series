#include <iostream>
#include <string>
using namespace std;

/*
Note - cin stops at three imp points 
    1. tab "\t"
    2. space " "
    3. new line "\n"
*/

int main()
{    
    // string n1;
    // cout<<"Enter your Full name : ";
    // cin>>n1;
    // cout<<"Your entered your name firstly : "<<n1;

    char s[20];
    cout<<"enter your full name : ";
    cin.getline(s, 20);     // to get the full line..
    cout<<"You entered your name : "<<s;

    return 0;
}