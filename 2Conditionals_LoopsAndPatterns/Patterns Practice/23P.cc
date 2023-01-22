#include <iostream>
using namespace std;

int main()
{    
    int i = 1, n;
    cin>>n;
    while (i<=n)
    {
        int space = n - 1;
        while (space>=i)
        {
            cout<<" ";
            space--;
        }
        int j = 1;
        while (j<=i)
        {
            cout<<i;
            j++;
        }
        cout<<endl;
        i++;
    }
    
    return 0;
}

/*

input : 4
output:
   1
  22
 333
4444

*/