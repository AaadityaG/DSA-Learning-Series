#include <iostream>
using namespace std;

int main()
{    
    int i = 1, num, count = 1;

    cout<<"Enter the number:"<<endl;
    cin>>num;

    while (i<=num)
    {
        int j = 1;
        while (j<=i)
        {
            cout<<i;
            j++;
        }
        i++;
        cout<<endl;
    }

    return 0;
}

/*
input:
num = 4

Ouput:
1
22
333
4444
*/