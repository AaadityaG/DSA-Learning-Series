

#include <iostream>
using namespace std;

int main()
{    
    int num;
    cout<<"Enter the number: ";
    cin>>num;

    int i = 2;
    while (i<num)
    {
        if(num%i==0){
            cout<<"Not Prime!";
            return 0;
        }
        i++;
    }
    cout<<"Prime";



    return 0;
}