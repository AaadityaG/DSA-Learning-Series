/*
Problem statement - 
    given signed 32-bit int
    return reversed_int.
    if outof range(-2^31, 2^31-1) 
    then return 0
*/

/*
Logic - Pseudo code
- Two Cases will occure

- For 1st Case -
    -- While(num!=0)                            (Condition.)
        - digit = num % 10                      (taking last digit of number)
        - ans = ans * 10 + digit                (getting answer)
        - num = num / 10                        (To remove the left most from number)

- For 2nd Case 
    - What if ans = 2^31 - 0                    (Which is in range)
    - But after that we are doing ans * 10      (Which is out of the range)
    - So we have to check 
        if(INT_MIN < ans > INT_MAX)                 (Which is correct until ans*10)
        if(INT_MIN/10 < ans > INT_MAX/10)           (Which is MORE correct even for ans*10)
*/

#include <iostream>
using namespace std;

int main()
{    
    int num;
    cin>>num;
    int a = num;                        // this won't work if num = a;  
    int ans = 0;
    while (num!=0)
    {
        int digit = num % 10;
        ans = (ans * 10) + digit;
        num = num / 10;
        if((INT32_MAX/10)<ans || (INT32_MIN/10)>ans){   // IMP - This is correct at online compiler
            ans = 0;
        }
    }
    cout<<"You Entered:"<<a<<endl;
    cout<<"Your answer:"<<ans<<endl;
    return 0;
}