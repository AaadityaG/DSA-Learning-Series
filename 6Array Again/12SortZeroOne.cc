/*
Problem :
    Given array : {1, 0, 0, 0, 1, 1}
    Sort them : {0, 0, 0}, {1, 1, 1}
*/

// Not Correct...

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void print(vector<vector <int>> a){
    for (int i = 0; i < a.size(); i++)
    {
        for (int j = 0; j < a[j].size(); j++)
        {
            cout<<a[i][j]<<' ';
        }
    }   
    cout<<endl;
}

int main()
{    
    vector<int> arr = {1, 0, 0, 0, 1, 1};
    vector<vector <int>> ans;
    sort(arr.begin(), arr.end());  // {0, 0, 0, 1, 1, 1}

    for (int i = 0; i < arr.size(); i++)
    {
        vector<int> temp;
        if(arr[i]==0){
            temp.push_back(0);
        }
        ans.push_back(temp);
        if(arr[i]==1){
            temp.push_back(1);
        }
        ans.push_back(temp);
    }
    
    print(ans);

    return 0;
}