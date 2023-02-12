// Inplace sorting means finding the biggest number from the array 
// and placing from start to the end of the another array.
// And hence it always give the REVERSE array as the answer.

// Wrong and Incorrect.


#include <iostream>
#include <vector>
using namespace std;

void InPlaceSort(vector<int> arr){
    vector<int> ans; 
    int n = arr.size();
    for (int i = 1; i < n; i++)
    {
        for (int j = 0; j < n-i; j++)
        {
            if(arr[j]>arr[j+1]){
                swap(arr[j], arr[j+1]);
            }
        }
        ans.push_back(arr[i]);
    }
    for (int i = 0; i < n; i++)
    {
        cout<<" "<<ans[i];
    }
}

int main()
{    
    vector<int> v = {1, 5, 3, 2, 7, 9};
    cout<<"Before : "<<endl;
    for (int i = 0; i < v.size(); i++)
    {
        cout<<" "<<v[i];
    }
    cout<<"Before : "<<endl;
    InPlaceSort(v);
    return 0;
}