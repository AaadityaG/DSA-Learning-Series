/*

in - 4
out - 
1 2 3 4 4 3 2 1 
1 2 3 * * 3 2 1 
1 2 * * * * 2 1 
1 * * * * * * 1

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
        int i1 = 1;
        while (i1<=(n-i+1))
        {
            cout<<i1<<' ';
            i1++;
        }

        int s1 = i - 1;
        while (s1)
        {
            cout<<"* * ";
            s1--;
        }

        // int s2 = i - 1;   // no need
        // while(s2){
        //     cout<<"*";
        //     s2--;
        // }

        int i2 = n-i+1;
        while (i2)
        {
            cout<<i2<<' ';
            i2--;
        }
        
        cout<<endl;
        i++;
    }
    
    return 0;
}