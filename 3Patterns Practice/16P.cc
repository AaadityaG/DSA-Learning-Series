#include <iostream>
using namespace std;

int main()
{    
    int i = 1, n;
    cin>>n;
    char c = 'A';
    while (i<=n)
    {
        int j = 1;
        while (j<=i)
        {
            cout<<c<<" ";
            j++;
            c++;
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
D E F
G H I J
*/