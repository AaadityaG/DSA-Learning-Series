#include <iostream>
using namespace std;

int main()
{    
    int in, r = 1;
    cin>>in;
    while (r<=in)
    {
        int c = 1;
        while (c<=r)
        {
            cout<<r-c+1<<" ";
            c++;
        }
        r++;
        cout<<endl;
    }

    return 0;
}
/*
input :
num = 4
output :
1
2 1
3 2 1
4 3 2 1 
*/