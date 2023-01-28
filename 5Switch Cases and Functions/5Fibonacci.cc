// sum of nth fib series number

#include <iostream>
using namespace std;

int fibNum(int n){
    // int a, b;
    int a = 0, b = 1, i = 0, fib = 0, sum = 0;
    // cout<<a<<' '<<b<<" ";    // no needed
    while (i<=n)
    {
        fib = a + b;
        // cout<<fib<<" ";   // no need
        a = b;
        b = fib;
        i++;
    }
    return b;  // as simple as that
}

int main()
{    
    int a;
    cout<<"Enter the nth number:"<<endl;
    cin>>a;
    cout<<"Sum of "<<a<<"th fib Number is : "<<fibNum(a);
    return 0;
}