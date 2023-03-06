/*

Problem - Get the rowwise sum from 2d array...
    03 | 04 | 11  --> 18
    02 | 12 | 11  --> 25
    07 | 08 | 07  --> 22

*/

#include <iostream>
using namespace std;

void PrintRowSum(int arr[][3], int row, int col){
    for (int i = 0; i < row; i++)
    {
        int sum = 0;
        for (int j = 0; j < col; j++)
        {
            sum += arr[i][j];
        }
        cout<<sum<<" "; 
    }
}
// printing rowise - 
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

// printing Columnwise - 
void print2dArrayColumnwise(int arr[][3], int row, int col){
    for (int i = 0; i < col; i++)
    {
        for (int j = 0; j < row; j++)
        {
            cout<<arr[j][i]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
}

int main()
{    
    int arr[3][3] = {{3 ,4, 11}, {2, 12, 11}, {7, 8, 7}};
    cout<<"Given array -"<<endl;
    print2dArrayRowise(arr, 3, 3);
    // print2dArrayColumnwise(arr, 3, 3);
    cout<<"Sum of Rows is -"<<endl; 
    PrintRowSum(arr, 3, 3);
    return 0;
}