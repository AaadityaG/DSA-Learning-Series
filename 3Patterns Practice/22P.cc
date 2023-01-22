#include <iostream>
using namespace std;

int main()
{    
    int i = 1, n;
    cin>>n;
    while (i<=n)
    {
        int space = i - 1;
        while (space)
        {
            cout<<" ";
            space--;
        }
         
        int j = n;
        while (j>=i)
        {
            cout<<i;
            j--;
        }
        cout<<endl;
        i++;
    }
    
    return 0;
}

/*
input : 4
output : 
1111
 222
  33
   4
*/