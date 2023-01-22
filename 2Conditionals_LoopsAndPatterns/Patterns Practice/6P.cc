#include <iostream>
using namespace std;

int main()
{    
    int i = 0;
    int n;
    cout<<"Enter the input:";
    cin>>n;
    while (i<n)
    {
        int j = 0;
        while (j<=i)
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

input: num = 4;

Output:
*
**
***
****

*/