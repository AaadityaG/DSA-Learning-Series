/*
input - 3
output - 
A B C 
D E F 
G I J
*/

#include <iostream>
using namespace std;

int main()
{    
    int n;
    cin>>n;
    int i = 1;
    int count = 1;
    while (i<=n)
    {
        int j = 1;
        while (j<=n)
        {
            char c = 'A'+count-1;
            cout<<c<<" ";
            count++;
            j++;
        }
        cout<<endl;
        i++;
    }
    
    return 0;
}