#include <iostream>
using namespace std;

int main()
{    
    int i = 1, n; 
    cin>>n;
    while (i<=n)
    {
        int j = 0;
        while (j<i)
        {
            char c = 'A' + i - 1;
            cout<<c;
            j++;
        }
        i++;
        cout<<endl;
    }
    
    return 0;
}

/*
input = 3;

output = 
A 
B B
C C C

*/
