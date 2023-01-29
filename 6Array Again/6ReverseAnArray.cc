#include <iostream>
using namespace std;

int reversedArr(int arr[], int n)
{
    int i = 0;
    int start = i;                        // start iterater
    int end = n-1;                        // end iterater
    while(start<=end){
        // swap(arr[start], arr[end]);    // Inbuilt swap function...
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
}

int printArr(int arr[], int n){
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int main()
{    
    int arr[6] = {1, 2, 3, 4, 5, 6};
    cout<<"Odd number of element array."<<endl<<endl;
    cout<<"Before : "<<endl;
    printArr(arr, 6);
    reversedArr(arr, 6);
    cout<<"After : "<<endl;
    printArr(arr, 6);
    cout<<endl;

    int brr[5] = {1, 2, 4, 5, 6};
    cout<<"Even number of element array."<<endl<<endl;
    cout<<"Before : "<<endl;
    printArr(brr, 5);
    reversedArr(brr, 5);
    cout<<"After : "<<endl;
    printArr(brr, 5);

    return 0;
}