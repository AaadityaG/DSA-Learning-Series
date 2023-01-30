/*
problem :
    1. given arr1 = {1, 2, 3}
    2. given arr2 = {3, 4}
    cout<< - {3}

Logic : 
    comparing eact of arr1 with  arr2 
*/

#include <iostream>
#include <vector>
using namespace std;

void print(vector<int> nums){
    for (int i = 0; i < nums.size(); i++)
    {
        cout<<nums[i]<<" ";
    }
}

int main()
{   
    vector<int> ans, arr1, arr2;
    arr1 = {1, 2, 3};
    arr2 = {3, 4, 2};
    int i = 0;
    while (i < arr1.size())
    {
        int myans = 0;
        for (int j = 0; j < arr2.size(); j++)
        {
            if(arr1[i] == arr2[j]){
                myans = arr1[i];
            }
            j++;
        }
        if(myans!=0)
            ans.push_back(myans);
        i++;
    }

    print(ans);


    return 0;
}