// incorrect and incomplete

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
    return 0;
}