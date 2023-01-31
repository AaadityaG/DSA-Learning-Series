/*
Problem :
    Given array : {1, 0, 0, 0, 1, 1}
    Sort them : {0, 0, 0}, {1, 1, 1}
*/

// Correct...😉

#include <iostream>
#include <vector>
#include <algorithm>
#include "myheader.h"
using namespace std;


int main()
{    
    vector<int> arr = {1, 0, 0, 0, 0, 1, 1};
    vector<vector <int>> ans;
    vector<int> zeros;
    vector<int> ones;
    sort(arr.begin(), arr.end());
    for (int i = 0; i < arr.size(); i++)
    {
        if(arr[i]==0){
            zeros.push_back(0);
            // cout<<"add";
        }
        if(arr[i]==1){
            ones.push_back(1);
        }
    }
    ans.push_back(zeros);
    ans.push_back(ones);

    printMultiArr(ans);

    return 0;
}