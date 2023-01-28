/*
Proble statement -                  Dry Run  
- n is given                      5 (101)
- Get the its 1s complement         010
- Return the answer                 2

Logic - 
cin>>n
m = n
while(n!=0)
    mask = (n<<1) | 1;
    m = m >> 1
int ans = (~n) & n;
*/

#include <iostream>
using namespace std;

int main()
{    
    int n;
    cin>>n;
    int m = n;
    int mask = 0;
    while (m!=0)
    {
        mask = (mask<<1) | 1;
        m = m >> 1;
    }
    int ans = (~n) & mask;

    cout<<"Answer = "<<ans;
    
    return 0; 
}