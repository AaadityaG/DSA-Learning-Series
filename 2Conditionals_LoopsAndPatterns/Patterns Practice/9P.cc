#include <iostream>
using namespace std;

int main()
{    
    // int num, i = 1, value;
    // cin>>num;
    // while (i<=num)
    // {
    //     int j = 1;
    //     value = i;
    //     while (j<=i)
    //     {
    //         cout<<value;
    //         value++;
    //         j++;
    //     }
    //     i++;        
    //     cout<<endl;
    // }  

    
    // alternate solution -
    int n;
    cin>> n;
    
    int r=1;
    while( r<=n ){
        int c = r;
        while(c < 2*r){
            cout << c << " ";
            c++;
        }
        r++;
        cout<<endl;
    }      

    return 0;
}

/*

input:
num = 4

output: - 
1
2 3
3 4 5
4 5 6 7

*/

