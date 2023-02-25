// Problem statement - 
// n is given(32 bit), reverse it, but if numbers is 
// out of range(-2^31, 2^31-1) then return 0. 

// Answer is correct at leet code👇🏽👇🏽-

#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int a;
    cin>>a;
    int ans = 0, b = a;
    int i = 0;
    while (a != 0)
    {
        int digit = a % 10;
        ans = (ans * 10 + digit);
        a = a / 10; 
        i++;
    }
    if(ans > (INT32_MAX/10) || ans < (INT32_MIN/10)){
        ans = 0;
    }
    
    // cout << "Your Entered Number:" << b << endl;
    cout << "Your Reverse Number:" << ans << endl;

    return 0;
}