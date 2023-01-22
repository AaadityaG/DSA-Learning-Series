#include <iostream>
using namespace std;

int main()
{    
    int i = 1, n;
    cin>>n;
    int value = 1;
    while (i<=n)
    {
        int space = n - 1;
        while (space>=i)
        {
            cout<<" ";
            cout<<" ";
            space--;
        }
        
        int j = 1;
        while (j<=i)
        {
            cout<<value<<" ";
            j++;
            value++;
        }
        cout<<endl;
        i++;
    }
    
    return 0;
}

/*
input : 4
output :
   1
  23
 456
78910
*/