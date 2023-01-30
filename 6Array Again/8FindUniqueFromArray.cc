#include <iostream>
using namespace std;

int PrintArr(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<' ';
    }
    cout<<endl;
}

int GetUnique(int arr[], int n){
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        ans = arr[i]^ans;
    }
    return ans;
}

int main()
{    
    int arr[7] = {1, 2, 3, 4, 3, 2, 1};
    cout<<"Your unique number is:"<<GetUnique(arr, 7);
    return 0;   
}