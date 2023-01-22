#include <iostream>
using namespace std;

int main()
{    
    int i = 1, n;
    cin>>n;
    char c = 'A';

    while (i<=n)
    {
        int j = 0;
        while (j<n)
        {
            char chars = c;
            cout<<chars;
            c++;
            j++;
        }
        cout<<endl;
        i++;
    }
    
    return 0;
}

/*
Input - 
n = 3

Output - 
A B C
D E F
G H I
*/