#include <iostream>
using namespace std;

int main()
{    
    int a[50], sum = 0;
    cout<<"Enter the size of array : "<<endl;
    int user_size;
    cin>>user_size;
    cout<<"Enter the array elements : "<<endl;
    for (int i = 0; i < user_size; i++)
    {
        cin>>a[i];
        sum += a[i]; 
    }
    cout<<"Sum of Array Elements : "<<sum<<endl;
    return 0;
}