// fill_n command - 

#include <iostream>
using namespace std;

int main()
{    
    int a[100];

    // Initializing array with 1 at each index - 
    fill_n(a, 100, 1);

    // for (int i = 0; i <= 100; i++)
    // {
    //     cout<<a[i]<<" at index "<<i<<endl;
    // }

    // Initializing array with 1 at each index - 
    int b[3] = {1, 3, 5};
    cout<<b[0]<<endl;
    cout<<b[1]<<endl;
    cout<<b[2]<<endl;
    
    return 0;
}