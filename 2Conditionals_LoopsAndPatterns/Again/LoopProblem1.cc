// find sum of all even numbers till the n.
// HomeWork Problem
#include <iostream>
using namespace std;

int main()
{    
    int number;
    cout<<"Enter the number:";
    cin>>number;
    int i = 1;
    int sum = 0;
    while (i<=number)
    {
        if(i%2==0){
            sum += i;
        }
        i++;
    }
    cout<<"Sum of even numbers till "<<number<<" is "<<sum;
    
    return 0;
}