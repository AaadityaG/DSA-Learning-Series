#include <iostream>
#include <vector>
using namespace std;

vector<int> Rotate(vector<int> nums, int k){
    vector<int> temp(nums.size());
    for (int i = 0; i < nums.size(); i++)
    {
        temp[(i+k)%nums.size()] = nums[i];
    }
    nums = temp;
    return nums;
}

void printArr(vector<int> a){
    for (int i = 0; i < a.size(); i++)
    {
        cout<<" "<<a[i];
    }
    cout<<endl;
}

int main()
{    
    int k = 3;
    vector<int> nums = {1, 2, 3, 4, 5, 6, 7};
    cout<<"Before : "<<endl;
    printArr(nums);
    vector<int> ans = Rotate(nums, k);
    cout<<"After : "<<endl;
    printArr(ans);
    return 0;
}