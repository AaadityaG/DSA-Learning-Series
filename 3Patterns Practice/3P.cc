// cin>>4;
// cout<< 
//     1111
//     2222
//     3333
//     4444

#include <iostream>
using namespace std;

int main()
{    
    int in;
    cout<<"Enter the input:";
    cin>>in;
    for (int i = 1; i <= in; i++)
    {
        for (int j = 1; j <= in; j++)
        {
            cout<<i;  
            // cout<<in-i+1;  // reverse
        }
        cout<<endl;
    }
    
    return 0;
}