#include <iostream>
using namespace std;

int swapAlters(int arr[], int n){
    int i = 0;
    while (i<n)
    {
        if(i+1 < n){
            // swap(arr[i], arr[i+1]);
            int temp = arr[i];
            arr[i] = arr[i+1];
            arr[i+1] = temp;
        }
        i = i + 2;        
    }
}

int PrintArr(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<' ';
    }
    cout<<endl;
}

int main()
{    
    
    int a[6] = {1, 2, 3, 4, 5, 6};
    PrintArr(a, 6);
    swapAlters(a, 6);
    PrintArr(a, 6);

    // int b[6] = {1, 2, 3, 4, 5};
    // PrintArr(b, 5);
    // swapAlters(b, 5);
    // PrintArr(b, 5);

    return 0;
}