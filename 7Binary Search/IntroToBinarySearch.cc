#include <iostream>
#include <vector>
#include "myheader.h"
#include <algorithm>
using namespace std;

int BinarySearch(vector<int> arr, int key){
    sort(arr.begin(), arr.end());   // to sort the unsorted 
    // printVec(arr);             // printing vector function from myheader.h
    int start = 0;
    int end = arr.size()-1;
    // int mid = (start + end)/2;   
    int mid = start + (end-start)/2;        // [TRICKY] for range (-2^31, 2^32 - 1)

    while (start<=end)
    {
        if(arr[mid]==key){
            return mid;
        }
        
        if(key>arr[mid]){
            start = mid + 1;    
        }                        
        else{
            end = mid-1;
        }
        mid = start + (end-start)/2;
    }  
    return -1;
}

int main()
{    
    // vector<int> arr = {6, 2, 3, 8, 4, 1};       // unsorted 
    vector<int> arr = {1, 2, 3, 4, 5, 6, 7, 8};   // sorted

    printVec(arr);

    int k = 5;
    int ans = BinarySearch(arr, k);
    if(ans!=-1)
        cout<<"Index of "<<k<<" : "<<ans;
    else
        cout<<"Key not found!";

    return 0;
}