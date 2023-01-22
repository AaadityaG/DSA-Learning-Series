#include <iostream>
using namespace std;

int main()
{    
    // increment 
    int i = 4;
    // int a = i++;   // pre - increment 
    int a = ++i;  

    cout<<"After Post-increment:"<<endl;
    cout<<i<<endl;
    cout<<a<<endl;
    
    
    // pre increment 
    int j = 4;
    int b = --j;

    cout<<"After Post-increment:"<<endl;
    cout<<j<<endl;
    cout<<b<<endl;

    return 0;
}

