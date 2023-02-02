#include <iostream>
#include <vector>
using namespace std;
class Solution {
public:
    int pivotIndex(vector<int>& arr) {
        int i = 0;
        int size = arr.size();
        while(i<size){                  
            int j = 0;
            int sumRight = 0, sumLeft = 0;
            while(j<size){         
                if(j<i)
                    sumLeft=sumLeft+arr[j];
                else if(j>i)
                    sumRight=sumRight+arr[j];
                j++;
            }
            if(sumLeft==sumRight){
                return i;
            }
            i++;
        }
        return -1;
    }
};

int main(){
    Solution s = Solution();
    vector<int> arr = {1,7,3,6,5,6};
    int ans = s.pivotIndex(arr);
    cout<<"The pivot index = "<<ans<<endl;
}