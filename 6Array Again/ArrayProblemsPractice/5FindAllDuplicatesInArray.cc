#include <iostream>
#include <vector>
#include <Algorithm>
#include "myheader.h"
using namespace std;

class Solution 
{
public:
    vector<int> findDuplicates(vector<int>& nums) 
    {
        vector<int> ans;         // vector
        int size = nums.size();    // size
        sort(nums.begin(), nums.end());   // sorted
        for(int i = 0; i<size; i++)
        {
            if(nums[i]==nums[i+1])
            {
                ans.push_back(nums[i]);
                i++;
            }
        }

        for (auto element : ans)
        {
            cout << element << " ";
        }
    }
};


int main()
{    
    // vector<int> arr = {4,3,2,7,8,2,3,1};
    vector<int> arr = {1,1,2};
    // int size = arr.size();
    // vector<int> ans;
    // sort(arr.begin(), arr.end());  // {1 2 2 3 3 6}
    // for (int i = 0; i < size; i++)
    // {
    //     if(arr[i] == arr[i+1]){
    //         ans.push_back(arr[i]);
    //         i++;
    //     }
    // }
    // printVec(ans);
    Solution s = Solution();
    s.findDuplicates(arr);

    return 0;
}