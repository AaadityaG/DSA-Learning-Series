/*

in - 4
out - 
      1
    1 2 1
  1 2 3 2 1
1 2 3 4 3 2 1

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
        int space = n - i;
        while (space)
        {
            cout<<" ";
            space--;
        }

        int j = 1;
        while (j<=i)
        {
            cout<<j;
            j++;
        }

        // My implementation - 
        // int k = 1, count = i-1 ;
        // while (k<=(i-1))
        // {
        //     cout<<count;
        //     count--;
        //     k++;
        // }

        // love bhaiyya
        int count = i-1 ;
        while (count)
        {
            cout<<count;
            count--;
        }
        cout<<endl;
        i++;
    }
    
    return 0;
}