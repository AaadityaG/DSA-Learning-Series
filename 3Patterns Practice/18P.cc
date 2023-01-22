#include <iostream>
using namespace std;

int main()
{    
    int i = 1, n;
    cin>>n;
    while (i<=n)
    {
        int j = 1;
        char c = 'A' + n - i;
        while (j<=i)
        {
            cout<<c;
            j++;
            c++;
        }
        i++;
        cout<<endl;
    }
    
    return 0;
}

/*
input - 4
output -
D
C D
B C D
A B C D 
*/