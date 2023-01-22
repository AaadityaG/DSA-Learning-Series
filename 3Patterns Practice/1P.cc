#include <iostream>
using namespace std;

int main()
{    
    cout<<"Enter the input:";
    int input;
    cin>>input;
    for (int i = 0; i < input; i++)
    {
        for (int j = 0; j < input; j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }    
    return 0;
}