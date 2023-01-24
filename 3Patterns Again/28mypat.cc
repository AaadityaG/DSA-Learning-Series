/*
in - 4
out - 
4 3 2 1
3 2 1
2 1
1
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
        int count = n-i+1; 
        while(j<=(n-i+1)){
            cout<<count;
            count--;
            j++;
        }
        cout<<endl;
        i++;
    }
    
    return 0;
}