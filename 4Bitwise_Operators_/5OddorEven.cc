//  Find if given number is odd or even by using bitwise operator(And)

#include <iostream>
using namespace std;

int main()
{    
    int a;
    cin>>a;
    if(a&1 == 1){
        cout<<"Given number "<<a<<" is odd"<<endl;
    }
    else{
        cout<<"Given number "<<a<<" is even."<<endl;
    }
    return 0;
}