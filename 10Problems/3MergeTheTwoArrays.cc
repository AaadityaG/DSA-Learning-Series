/*
Problem = 
    arr1[5] = {1, 3, 5, 7, 9};
    arr2[3] = {2, 4, 6};
->  arr3[8] = {1, 2, 3,  4, 5, 6, 7, 9};

*/

#include <iostream>
#include <vector>
using namespace std;


void printArr(int arr[], int n){
    for (int i = 0; i < n; i++)
    {
        cout<<" "<<arr[i];
    }
    cout<<endl;
}

void MergeArrays(int arr1[], int a1, int arr2[], int a2, int arr3[])
{
    int i = 0, j = 0, k = 0;
    while (i<a1 && j<a2)
    {
        if(arr1[i]<arr2[j]){
            arr3[k] = arr1[i];
            k++;
            i++;
        }
        else{
            arr3[k] = arr2[j];
            k++;
            j++;
        }
    }

    while(i<a1){
        arr3[k] = arr1[i];
        k++;
        i++;
    }

    while (j<a2)
    {
        arr3[k] = arr2[j];
        k++;
        j++;
    }    
}

int main()
{    
    int arr1[5] = {1, 3, 5, 7, 9};
    int arr2[3] = {2, 4, 6};
    int arr3[8] = {0};
    // cout<<"Before : "<<endl;
    // printArr(arr3, 8);
    MergeArrays(arr1, 5, arr2, 3, arr3);
    cout<<"After : "<<endl;
    printArr(arr3, 8);
    
    return 0;   
}