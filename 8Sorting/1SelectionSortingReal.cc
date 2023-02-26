#include <iostream>
using namespace std;

void printArr(int arr[], int size){
    for (int i = 0; i < size; i++)
    {
        cout<<" "<<arr[i];
    }
    cout<<endl;
}

void SelectionSort(int arr[], int size){
    // int indexOfMin;
    for (int i = 0; i < size-1; i++)
    {
        int indexOfMin = i;
        for (int j = i+1; j < size; j++)
        {
            if(arr[indexOfMin] > arr[j]){
                indexOfMin = j;
            }
        }
        swap(arr[indexOfMin], arr[i]);
    }        
}

int main()
{    
    int arr[] = {3, 5, 2, 13, 12, 0, 66, 4};
    int size = 8;
    cout<<"Before selection sort : "<<endl;
    printArr(arr, size);
    SelectionSort(arr, size);
    cout<<"After selection sort : "<<endl;
    printArr(arr, size);
    return 0;
}