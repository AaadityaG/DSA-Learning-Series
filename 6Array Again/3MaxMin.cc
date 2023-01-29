#include <iostream>
using namespace std;

int getMax(int num[], int n){

    int max = INT32_MIN;
    
    for (int i = 0; i < n; i++)
    {
        
        // if(num[i]>max){
        //     max = num[i];
        // }
    }
    return max;
}

int getMin(int num[], int n){
    int min = INT32_MAX;
    
    for (int i = 0; i < n; i++)
    {
        if(num[i]<min){
            min = num[i];
        }
    }
    return min;
}

int main()
{    
    int size;
    cout<<"Enter the size: "<<endl;
    cin>>size;
    int arr[100];
    cout<<"Enter the values:"<<endl;
    for (int i = 0; i < size; i++)
    {
        cin>>arr[i];
    }
    // for (int i = 0; i < size; i++)
    // {
    //     cout<<arr[i]<<" ";
    // }
    cout<<"Maximum value : "<<getMax(arr, size)<<endl;
    cout<<"Minimum value : "<<getMin(arr, size)<<endl;
    
    return 0;
}