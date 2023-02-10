// corect and right...


#include <iostream>
#include <vector>
using namespace std;

bool isPossible(vector<int> arr, int student, int arrSize, int mid){
    int Size = 1;
    int studs = 0;

    for (int i = 0; i < arrSize; i++)
    {
        if(studs + arr[i] <= mid){
            studs += arr[i];
        }
        else{
            Size++;
            if(Size > student || arr[i]>mid){
                return false;
            }
            studs = arr[i];
        }
    }
    return true;
}
int Painters(vector<int> arr, int stu, int arrSize)
{
    int s = 0;
    int sum = 0;
    int ans = 0;
    int student = student;
    for (int i = 0; i < arrSize; i++)
    {
        sum+=arr[i];
    }
    int e = sum;
    int mid = s + (e-s)/2;
    while(s<=e){
        if(isPossible(arr, stu, arrSize, mid)){
            ans = mid;
            e = mid - 1; 
        }
        else{
            s = mid + 1;
        }
        mid = s + (e-s)/2;
    }
    return ans;
}

int main()
{    
    // vector <int>array = {5, 5, 5, 5};
    vector <int>array = {10, 20, 30, 40};
    cout<<Painters(array, 2, 4);
    return 0;
}
