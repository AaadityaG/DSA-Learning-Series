/*

is Stable = Yes
is Adaptive = Yes
Time Complexity = O(n^2)
    Best Time Complexity = O(n)
    Worst Time Complexity = O(n^2)
Space Complexity = O(1)

*/
#include <iostream>
#include <vector>
using namespace std;

void BubbleSort(vector<int> arr){
    int n = arr.size();
    for (int i = 1; i < n; i++)
    {
        for (int j = 0; j < n-i; j++)
        {
            if(arr[j]>arr[j+1]){
                swap(arr[j], arr[j+1]);
            }
        }
    }

    for (int i = 0; i < n; i++)
    {
        cout<<" "<<arr[i];
    }
}

void AdaptiveBubbleSort(vector<int> arr){
    int n = arr.size();
    bool isSwapped = false;
    for (int i = 1; i < n; i++)
    {
        for (int j = 0; j < n-i; j++)
        {
            if(arr[j]>arr[j+1]){
                swap(arr[j], arr[j+1]);
                isSwapped = true;
            }
        }
        if(isSwapped==false){
            break;
        }
    }

    for (int i = 0; i < n; i++)
    {
        cout<<" "<<arr[i];
    }
}

int main()
{    
    vector<int> v1 = {1, 4, 32, 6, 8, 0};
    cout<<"Before: "<<endl;
    for (int i = 0; i < v1.size(); i++)
    {
        cout<<" "<<v1[i];
    }
    cout<<endl<<"After: "<<endl;
    BubbleSort(v1);
    // AdaptiveBubbleSort(v1);
    return 0;
}