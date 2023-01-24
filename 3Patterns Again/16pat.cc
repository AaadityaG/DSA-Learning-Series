/*
input - 3
output -
A
B C
C D E
D E F G
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
        int j = 1;
        int count = i;
        while(j<=i){
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