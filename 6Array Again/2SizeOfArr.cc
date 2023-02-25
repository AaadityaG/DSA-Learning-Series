#include <iostream>
using namespace std;
int main()
{    
    int a[10];
    // int asize = sizeof(a);   // will print (size of int) * (size of array)
    int asize = sizeof(a)/sizeof(int);   // for only printing size of array. 
    cout<<"Size of array a : "<<asize<<endl;
    return 0;
}