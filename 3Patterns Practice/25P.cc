#include <iostream>
using namespace std;

int main()
{    
    int i = 1, n;
    cin>>n;
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

        int start = i - 1;
        while (start)
        {
            cout<<start;
            start--;
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
    1 2 1 
  1 2 3 2 1 
1 2 3 4 3 2 1 

*/