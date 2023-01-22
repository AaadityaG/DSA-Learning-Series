#include <iostream>
using namespace std;

int main()
{    
    int in;
    cin>>in;
    int i = 1;
    while (i<=in)
    {
        int j = 1;
        while (j<=in)
        {
            cout<<j;   
            // cout<<in-j+1;   // reverse
            j++;
        }
        i++;
        cout<<endl;
    }
    
    return 0;
}