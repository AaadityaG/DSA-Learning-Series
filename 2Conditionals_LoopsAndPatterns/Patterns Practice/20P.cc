#include <iostream>
using namespace std;

int main()
{    
    int i = 1, n;
    cin>>n;
    int star = n;
    while (i<=n)
    {
        // int j = n;
        // while (j>=i)
        // {
        //     cout<<"*";
        //     j--;
        // } 

        int j = 1;
        int star = n - i + 1;
        while (j<=star)
        {
            cout<<"*";
            j++;
        }
               
        i++;
        cout<<endl;
    }
    
    return 0;
}

/*

Input : 4

output :
****
***
**
*

*/
