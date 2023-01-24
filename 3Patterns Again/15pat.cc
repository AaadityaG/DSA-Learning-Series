/*
input - 4
output - 
A
B C
D E F
G H I F
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