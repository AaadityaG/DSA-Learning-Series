#include <iostream>
#include <Algorithm>
#include <vector>
using namespace std;

int main()
{    
    vector<int> arr = {1, 2, 6, 3, 4, 5, 6};
    sort(arr.begin(), arr.end());
    int dupli = 0;
    int i = 0;
    while(i<arr.size())
    {
        if (arr[i] == arr[i+1])
        {
            dupli = arr[i];
            break;
        }
        i++;
    }
    cout<<"Duplicate number is : "<<dupli;
    
    return 0;
}