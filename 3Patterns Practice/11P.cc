#include <iostream>
using namespace std;

int main()
{    
    // char a = 'z';
    // int b = a;
    // cout<<"In assci value z = "<<b<<endl;

    int num;
    cout<<"Enter the input less than 26 : ";
    cin>>num;

    if(num<=26){
        // // My solution : 
        // int i = 1;
        // int assci = 'A';
        
        // while (i<=num)
        // {
        //     int j = 1;
        //     while (j<=num)
        //     {
        //         char chars = assci;
        //         cout<<chars;
        //         j++;
        //     }
        //     i++;
        //     assci++;
        //     cout<<endl;
        // }

        // Alternative solution : 

        int i = 1;
        while (i<=num)
        {
            int j = 1;
            while (j<=num)
            {
                char chars = 'A' + i - 1;
                cout<<chars;
                j++; 
            }
            i++;
            cout<<endl;
        }
    }
    else{
        cout<<"Please enter the input in range of 1-26";
    }
    return 0;
}


/*

Logic :

A - Z 👉🏽 65 - 90   (we need this...)
a - z 👉🏽 97 - 122  (we don't need it)



input :
num = 3

output : 
    A A A
    B B B
    C C C

*/
