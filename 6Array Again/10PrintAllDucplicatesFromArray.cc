#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

// correct but run time error at leetcode...

vector<int> findDuplicates(vector<int>& nums) {
    vector<int> ans;
    sort(nums.begin(), nums.end());
    int i = 0, count = 0, size = nums.size();
    while (i<size)
    {
        int myans = 0;
        for(int j = 0; j<size; j++){
            if(nums[i] == nums[i+1]){
                myans = nums[i];
                count++;
            }
            else{
                break;
            }
        }
        if(myans!=0)
            ans.push_back(myans);
        i = i + 1;
    }
    return ans;
}

void print(vector<int> nums){
    for (int i = 0; i < nums.size(); i++)
    {
        cout<<nums[i]<<" ";
    }
}

int main(){
    vector<int> a1 = {4,3,2,7,8,2,3,1};
    vector<int> a2 = findDuplicates(a1);
    print(a2);
}