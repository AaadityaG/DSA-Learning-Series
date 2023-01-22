#include <iostream>
using namespace std;

int main()
{    
    int i = 1,  n;
    cin>>n;

    while (i<=n)
    {
        int p1 = n, p1_val = 1;
        
        while (p1>=i)
        {
            cout<<p1_val;
            p1--;
            p1_val++;
        }

        int stars = i-1;
        while (stars)
        {
            cout<<"**";
            stars--;
        }
        
        // int j = n;
        // while (j>=i)
        // {
        //     cout<<j;
        //     j--;
        // }

        int k = n - i + 1;
        while (k)
        {
            cout << k;
            k = k - 1;
        }

        cout<<endl;
        i++;
    }
    
    return 0;
}

/*
input : 5
output :
1 2 3 4 5 5 4 3 2 1
1 2 3 4 * * 4 3 2 1
1 2 3 * * * * 3 2 1
1 2 * * * * * * 2 1
1 * * * * * * * * 1
*/