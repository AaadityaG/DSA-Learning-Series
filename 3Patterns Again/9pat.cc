/*
input - 3
output -
A A A
B B B
C C C
*/
#include <iostream>
using namespace std;

int main()
{    
    int n;
    cin>>n;
    int i = 1;
    int chars = 'A'; 
    while (i<=n)
    {
        int j = 1;
        while(j<=n){
            char c = 'A';
            cout<<c<<" ";
            j++;
        }
        cout<<endl;
        chars++;
        i++;
    }
    
    return 0;
}