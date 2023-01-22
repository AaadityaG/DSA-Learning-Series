#include <iostream>
using namespace std;

int main()
{    
    // My logic -->
    // int in, loop;
    // cin>>in;

    // loop = in * in;
    
    // int i = 1;
    // while (i<=loop)
    // {
    //     cout<<i;
    //     if(i%in==0){
    //         cout<<endl;
    //     }
    //     i++;
    // }

    // alternative logic -->

    int i = 0, count = 1, n;
    
    cout<<"Enter value for n:";
    cin>>n;

    while (i<n)
    {
        int j = 0;
        while (j<n)
        {
            cout<<count;
            count++;
            j++;
        }
        i++;
        cout<<endl;
    }
    
    return 0;
}

// for n = 3:
// output:
// 1 2 3
// 4 5 6
// 7 8 9 