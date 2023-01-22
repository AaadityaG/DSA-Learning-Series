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
            cout<<"*";
            j--;
        }

        
        i++;
        cout<<endl;
    }
    
    
    return 0;
}

/*
input - 4
output - 
****
 ***
  **
   *

*/