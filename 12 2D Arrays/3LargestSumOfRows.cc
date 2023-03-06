#include <iostream>
using namespace std;

void LargestRowSum(int arr[][3], int row, int col){
    int max = INT32_MIN;
    for (int i = 0; i < row; i++)
    {
        int sum = 0;
        for (int j = 0; j < col; j++)
        {
            sum += arr[i][j]; 
        }
        if(sum>max){
            max = sum;
        }
    }
    cout<<"Maximum sum row is = "<<max<<endl;
}

void PrintRowSum(int arr[][3], int row, int col){
    for (int i = 0; i < row; i++)
    {
        int sum = 0;
        for (int j = 0; j < col; j++)
        {
            sum += arr[i][j];
        }
        cout<<sum<<endl; 
    }
    cout<<endl;
}

void print2dArrayRowise(int arr[][3], int row, int col){
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
}

int main()
{    
    int arr[3][3] = {{3 ,4, 11}, {2, 12, 11}, {7, 8, 7}};
    cout<<"Given array : "<<endl;
    print2dArrayRowise(arr, 3, 3);
    cout<<"Sum of rows : "<<endl;
    PrintRowSum(arr, 3, 3);
    LargestRowSum(arr, 3, 3);
    return 0;
}