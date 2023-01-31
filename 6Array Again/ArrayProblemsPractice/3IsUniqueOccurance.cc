#include <iostream>
#include <Algorithm>
#include <vector>
#include "myheader.h"
using namespace std;

int GetOcc(vector<int> arr){
    vector<int> Occ;
    int size = arr.size(), i = 0;
    sort(arr.begin(), arr.end());
    while (i < size)
    {
        int count = 1;
        for (int j = i + 1; j < size; j++)
        {
            if (arr[i] == arr[j])
            {
                count++;
            }
            else
            {
                break;
            }
        }
        Occ.push_back(count);
        i = i + count;
    }
    sort(Occ.begin(), Occ.end());
    size = Occ.size();
    for (int i = 0; i < size - 1; i++)
    {
        if (Occ[i] == Occ[i + 1])
        {
            return false;
        }
    }
    return true;
}

int main()
{
    vector<int> arr = {1, 2, 2, 3, 3, 3, 3};
    cout<<GetOcc(arr);
    
    return 0;
}