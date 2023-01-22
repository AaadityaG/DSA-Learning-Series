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
            char ch = 'A' + j + i - 1;
            cout<<ch<<" ";
            j++;
        }
        i++;
        cout<<endl;
    }
    
    return 0;
}

/*
input = 4

output = 
A
B C
C D E
D E F G
*/