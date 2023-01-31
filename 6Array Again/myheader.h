#include <vector>
#include <iostream>
using namespace std;

void printArr(int arr[], int size){
    for (int i = 0; i < size; i++)
    {
        cout<<arr[i]<<" ";
    } 
}

void printVec(vector<int> vec){
    int size = vec.size();
    for (int i = 0; i < size; i++)
    {
        cout<<vec[i]<<" ";
    } 
}

void printMultiArr(vector<vector<int>> arr){
    for (int i = 0; i < arr.size(); i++)
    {
        for (int j = 0; j < arr[i].size(); j++)
        {
            cout<<arr[i][j]<<" ";
        }
        
    }
}

