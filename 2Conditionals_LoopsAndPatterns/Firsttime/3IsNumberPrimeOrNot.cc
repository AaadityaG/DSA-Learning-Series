#include <iostream>
using namespace std;

bool isPrime(int n)
{
    // Corner case
    if (n <= 1)
        return false;
 
    // Check from 2 to n-1
    for (int i = 2; i < n; i++)
        if (n % i == 0)
            return false;
 
    return true;
}

int main()
{    
    int n, i = 2;
    cout<<"Enter the number:";
    cin>>n;
    while (i<n)
    {
        if(n%i==0){
            cout<<"It is not Prime"<<endl;
            break;
        }
        else{
            cout<<"It is Prime"<<endl;
            break;
        }
        i++;
    }
    
    return 0;
}