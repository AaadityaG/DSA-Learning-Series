#include <iostream>
using namespace std;

int main()
{    
    int i = 0, num, count = 1;
    cout<<"Enter the num:";
    cin>>num;

    while (i<num)
    {
        int j = 0;
        while (j<=i)
        {
            cout<<count<<" ";
            count++;
            j++;
        }
        cout<<endl;
        i++;
    }
    
    return 0;
}

/*
input:
num = 4

output:
1
23
456
78910
*/