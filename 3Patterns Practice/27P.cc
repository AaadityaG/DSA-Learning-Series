#include <iostream>
using namespace std;

int main()
{    
    int i = 1, n;
    cin>>n;
    
    while (i<=n)
    {
        int val = n - i + 1;
        while (val)
        {
            cout<<val;
            val--;
        }
                       
        i++;        
        cout<<endl;
    }
    
    return 0;
}

/*
input: 4

output:
4321
321
21
1

*/