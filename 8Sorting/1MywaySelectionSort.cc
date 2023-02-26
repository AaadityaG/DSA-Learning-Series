/*

is Stable = NO
is Adaptive = NO
Time Complexity = O(n^2)
    Best Time Complexity = O(n^2)
    Worst Time Complexity = O(n^2)
Space Complexity = O(1)

*/


// this is not ideal way of creating selection sort.
#include <iostream>
#include <vector>
using namespace std;

void selectionSort(vector<int> arr){

    int n = arr.size();
    for (int i = 0; i < n-1; i++)
    {
        for (int j = i+1; j < n; j++)
        {
            if(arr[j]<arr[i])
                swap(arr[i], arr[j]);
        }
    }
    
    for (int i = 0; i < n; i++)
    {
        cout<<" "<<arr[i];
    }
}

int main()
{    
    // vector<int> v1 = {4, 3, 2, 1};
    // vector<int> v1 = {4, 3, 2, 1, 10, 9, 8};
    vector<int> v1 = {5, 3, 6, 9};
    cout<<"Selection Sort Array is :";
    selectionSort(v1);
    return 0;
}