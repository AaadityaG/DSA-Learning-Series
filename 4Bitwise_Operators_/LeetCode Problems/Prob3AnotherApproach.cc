#include <iostream>
#include <math.h>
using namespace std;

int func(int n)
{
    // int ans = 0;   // no needed here 
    int Bit = 0, count = 0;
    while (n!=0)
    {
        Bit = n&1;               // getting each bit
        if(Bit==1)               
        {
            count++;            // incrementing count 
        }
        // ans = (Bit * pow(10, i)) + ans;  // No need (Creating full binary number of given number)
        n = n>>1;                           // shifting n to right...
    }
    if(count==1)
    {
        return true;
    }
    return false;
}

int main()
{    
    int n;
    cout<<"Enter the number: "<<endl;
    cin>>n;
    cout<<"Answer is : "<<func(n);
    return 0;
}