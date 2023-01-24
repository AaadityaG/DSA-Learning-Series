/*
input - 3
output - 
A B C
B C D
C D E
*/
#include <iostream>
using namespace std;

int main()
{    
    int n;
    cin>>n;
    int i = 1;
    while (i<=n)
    {
        int count = i;
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