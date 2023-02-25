/*
Problem : 
    Array is given of size n
    Each numbers till n-1 is present in array atleast 1 time.
    and any of them could be duplicate and filling nth size.

Solution : 
    1. XOR - ing each array element with 0 = ans
    2. ans ^ i = ans

*/ 

#include <iostream>
using namespace std;

int main()
{    
    int arr[5] = {1, 2, 3, 4, 3};
    int ans = 0;
    int size = 5;
    for (int i = 0; i < size; i++)
    {
        ans = ans ^ arr[i];             // xoring with each element which comes to ans = 0 at the end.
    }
    for (int i = 1; i < size; i++)
    {
        ans = ans ^ i;        // xoring with each count 
    }
    cout<<ans;
    
    return 0;
}