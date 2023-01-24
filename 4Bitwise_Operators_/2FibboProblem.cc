#include <iostream>
using namespace std;

int main()
{    
    int n;
    cin>>n;
    int a = 0, b = 1, fib = 0;
    cout<<"fibonacci series could be : "<<endl;
    cout<<a<<" "<<b<<" ";
    for (int i = 0; i <= n; i++)
    {
        fib = a + b;
        cout<<fib<<' ';
        a = b;
        b = fib; 
    }
    // cout<<"Fibbonacci number until "<<n<<" is "<<fib;
    
    return 0;
}