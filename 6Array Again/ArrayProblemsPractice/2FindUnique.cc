#include <iostream>
#include "myheader.h"
#include <vector>
using namespace std;

int main()
{    
    int arr[9] = {2, 3, 4, 3, 2, 5, 4, 5, 0};
    int size = 9, ans = 0;
    vector<int> v1;
    for (int i = 0; i < size; i++)
    {
        ans = ans ^ arr[i];
        // if(ans)               // also using this we can get duplicates too! 
        //     v1.push_back(arr[i]);
    }
    cout<<"Unique number = "<<ans<<endl;

    // cout<<"Duplicate numbers = "<<endl;
    // printVec(v1, v1.size());
    
    return 0;
}