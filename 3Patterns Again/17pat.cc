/*
input - 4
output - 
for ABCD        Suppose for 1 2 3 4
D            |  4
C D          |  3 4
B C D        |  2 3 4 
A B C D      |  1 2 3 4
*/

#include <iostream>
using namespace std;

int main()
{    
    int n;
    cin>>n;
    int row = 1;
    while (row<=n)
    {
        int col = 1;
        char start = 'A' + n - row;  // VVIMP
        while (col<=row)
        {
            cout<<start<<" ";
            start++;
            col++;
        }
        cout<<endl;
        row++;
    }
    
    return 0;
}