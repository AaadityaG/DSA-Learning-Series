#include <iostream>
using namespace std;

int getPivot(int arr[], int n){
    int s = 0;
    int e = n-1;
    int mid = s + (e-s)/2;
    while(s<e){
        if(arr[mid] >= arr[0]){
        // if(arr[mid] > arr[mid-1]){   // if want to use this 
            // s = s + 1;               // then also use this one too!.
            s = mid + 1;
        }
        else{
            e = mid;
        }
        mid = s + (e-s)/2;
    }
    return s;
}

int main()
{    
    int arr[] = {4, 8, 10, 1, 2, 3};
    int n = 6;
    // int ans = getPivot(arr, n);
    cout<<getPivot(arr, n);
    return 0;
}