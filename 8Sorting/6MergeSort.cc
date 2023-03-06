/*
As name sugests
Merge sort - likewise Merging two sorting arrays(not individually two separate arrays but 
separating one array in two parts from low to mid and from mid to high) into same array...
*/

#include <iostream>
using namespace std;

void printArray(int A[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << " " << A[i];
    }
    cout << endl;
}

void Merge(int A[], int mid, int low, int high)
{ 
    int i, j, k, Bsize;
    int B[100];  // imp 
    // int B[Bsize];  // needs to find more optimised...
    
    i = low;
    j = mid + 1;
    k = low;
    while (i <= mid && j <= high)
    {
        if (A[i] < A[j])
        {
            B[k] = A[i];
            k++;
            i++;
        }
        else
        {
            B[k] = A[j];
            k++;
            j++;
        }
    }
    while (i <= mid)
    {
        B[k] = A[i];
        k++;
        i++;
    }
    while (j <= high)
    {
        B[k] = A[j];
        k++;
        j++;
    }
    for (int i = low; i <= high; i++)
    {
        A[i] = B[i];
    }
}

void MergeSort(int A[], int low, int high)
{
    int mid;
    // Most IMP 
    if(low<high){
        mid = (low + high)/2;
        MergeSort(A, low, mid);
        MergeSort(A, mid+1, high);
        Merge(A, mid, low, high);
    }
}

int main()
{
    int A[] = {9, 1, 4, 14, 4, 15, 6};
    int n = 7;

    cout<<"Before : "<<endl;
    printArray(A, n);

    MergeSort(A, 0, 6); 

    cout<<"After : "<<endl;
    printArray(A, n);
    return 0;
}
