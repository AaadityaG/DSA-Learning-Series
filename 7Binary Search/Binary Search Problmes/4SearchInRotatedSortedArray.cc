#include <iostream>
#include <vector>
using namespace std;

int getPivot(vector<int> arr){
    int start = 0;
    int end = arr.size()-1;
    int mid = start + (end-start)/2;
    while (start<end)
    {
        if(arr[mid]>=arr[0]){
            start = mid+1;
        }
        else{
            end = mid;
        }
        mid = start + (end-start)/2;
    }
    return start;
}

int BinarySearch(vector<int> arr, int k,  int s, int e){
    int start = s;
    int end = e;
    int mid = start + (end - start)/2;
    while(start<=end){
        if(arr[mid]==k){
            return mid;
        }
        if(arr[mid]>k){
            start = mid + 1;
        }
        else{
            end = mid - 1;
        }
    }
    return -1;
}

int main()
{    
    vector<int> a = {4, 8, 10, 1, 2, 3}; 
    int k = 8, n = (a.size()-1);
    int Pivot = getPivot(a);
    cout<<"Pivot index = "<<Pivot<<endl;
    if(k>a[Pivot] && a[n-1]){
        cout<<"The index of key "<<k<<" is : "<<BinarySearch(a, k, 0, Pivot-1)<<endl;
    }
    else{
        cout<<"The index of key "<<k<<" is : "<<BinarySearch(a, k, Pivot, n-1)<<endl;
    }
    return 0;
}