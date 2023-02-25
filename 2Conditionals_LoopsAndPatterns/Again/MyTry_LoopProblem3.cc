// find the all prime numbers till number 'n' which 
// was given by an user.


// // wrong and incomplete -
// #include <iostream>
// using namespace std;

// int main()
// {    
//     int n;
//     cin>>n;
//     int i = 2;
//     cout<<"Your Prime numbers till "<<n<<" are:"<<endl;
//     while (i<n)
//     {
//         int j = 2;
//         int p = 0;
//         while (j<=i)
//         {
//             if(n%j!=0){
//                 p = j;
//             }   
//             j++;
//         }
//         cout<<p<<" ";
//         i++;
//     }
    
//     return 0;
// }


#include <iostream>
using namespace std;

bool isPrime(int x){
    int i = 2;
    while (i<x)
    {
        if(x%i==0){
            return false;
        }
        i++;
    }
    return true;
}

int main()
{    
    int n;
    cin>>n;  // for 15 input...output is = 2 3 5 7 11 13 
    for (int i = 2; i <= n; i++)
    {
        if(isPrime(i)){
            cout<<" "<<i;
        }
    }
    return 0;
}