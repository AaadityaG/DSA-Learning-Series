#include <iostream>
#include <math.h>
using namespace std;

// incorect and incomplete...

int one_s(int ans)
{
    int Ones = 0;
    while(ans!=0)
    {
        int bit = ans&1;
        if(bit == 1)
        {

        }
    }
}

int main()
{    
    int n = -6;
    // cin>>n;
    int n1 = abs(n);
    // cout<<n1;

    int i = 0;
    float ans = 0;
    while(n1!=0){
        int bit = n1&1;
        ans = (bit*pow(10, i) + ans);
        n1 = n1>>1;
        i++;
    }
    // cout<<ans<<endl;
    

    return 0;
}