#include <iostream>
using namespace std;
// inputs in c++...
int main()
{    
    int a;
    cout<<"Enter the value : "<<endl;
    // cin>>a; // used for taking inputs
    a = cin.get();   // used for directly any symbol, operator, char and other but here we are stoing it in integer so it is giving us the ascii value of that input.
    cout<<"The ASCII value of a : "<<a<<endl;
    return 0;
}