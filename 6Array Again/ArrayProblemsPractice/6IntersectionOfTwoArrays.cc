#include <iostream>
#include <vector>
#include "myheader.h"
using namespace std;

int main()
{    
    // vector<int> arr1 = {1, 2, 3, 5, 5};     // only for this vector we need to fill the arr2[j] 
    vector<int> arr1 = {1, 2, 3, 5};  
    vector<int> arr2 = {3, 4, 5};
    int arr1size = arr1.size();
    int arr2size = arr2.size();
    vector<int> ans;
    for (int i = 0; i < arr1size; i++)
    {
        int j = 0;
        while (j<arr2size)
        {
            if(arr1[i]==arr2[j]){
                ans.push_back(arr1[i]);
                arr2[j] = -1;
                break;
            }
            j++;
        }
    }
    
    printVec(ans);


    return 0;
}   