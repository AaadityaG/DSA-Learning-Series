/*

input - 4
output -
1 2 3 4
  2 3 4 
    3 4 
      4

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
        int space = i - 1;
        while (space)
        {
            cout<<"  ";
            space--;
        }

        int j = 1, count = i;
        while (j<=(n-i+1))
        {
            cout<<count<<" ";
            j++;
            count++;
        }
        cout<<endl;
        i++;
    }
    
    return 0;
}