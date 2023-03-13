#include <iostream>
using namespace std;

bool prime(int a){
    if(a<=1){
        return false;
    }
    for (int i = 2; i < a; i++)
    {
        if(a%i==0){
            return false;
        }
    }
    return true;    
}


int main()
{    
    int a;
    cout<<"Enter the number:";
    cin>>a;
    if(prime(a)){
        cout<<"It is a prime number.";
    }
    else{
        cout<<"It is not a prime number.";
    }
    return 0;
}