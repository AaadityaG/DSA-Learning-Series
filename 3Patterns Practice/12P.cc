#include <iostream>
using namespace std;

int main()
{    
    int i = 1, num; 
    cin>>num;
    while (i<=num)
    {
        int j = 1;
        while (j<=num)
        {
            char chars = 'A' + j - 1;
            cout<<chars;
            j++;
        }
        cout<<endl;
        i++;
    }
    
    return 0;
}

/*
input - 
num = 3

output - 
A B C
A B C
A B C
*/