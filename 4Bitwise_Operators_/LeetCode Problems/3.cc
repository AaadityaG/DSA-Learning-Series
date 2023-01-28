// Given number is_poweroftwo?
// take an input
// make a (loop <= 30) - 
//      ans = pow(2, i);
//      if(ans == input) - return true
//      else return false

#include <iostream>
#include <math.h>
using namespace std;

int func(int n)
{
    int i = 1;
    ;
    while (i<=n)
    {
        int ans = pow(2, i);
        if(ans==n)
        {
            return true;
        }
        i++;
    }
    return false;
}

int main()
{    
    int n;
    cin>>n;
    cout<<"Answer is : "<<func(n);
    return 0;
}