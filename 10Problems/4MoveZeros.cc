/*
Problem - 
if given array is - 1, 0, 3, 2, 0, 0, 0
Ouput must be - 1, 3, 2, 0, 0, 0, 0
*/

#include <iostream>
using namespace std;


void MoveZeros(int arr[], int n){
    int nonZerosIndex = 0;
    for (int j = 0; j < n; j++)
    {
        if(arr[j] != 0){
            int temp = arr[nonZerosIndex];
            arr[nonZerosIndex] = arr[j];
            arr[j] = temp;
            nonZerosIndex++;
        }
    }    
}

void printArr(int arr[], int n){
    for (int i = 0; i < n; i++)
    {
        cout<<" "<<arr[i];
    }
    cout<<endl;
}

int main()
{    
    int arr[] = {1, 0, 3, 2, 0, 0, 0};
    cout<<"Before : "<<endl;
    printArr(arr, 7);
    MoveZeros(arr, 7);
    cout<<"After : "<<endl;
    printArr(arr, 7);
    return 0;
}