/*

Print the 2d array in wave form -
Wave form means for odd number of columns print from bottom to top 
and for even number of columns print from top to bottom

*/


// incomplete and wrong output
#include <iostream>
#include <vector>
using namespace std;

void WavePrint(int arr[][3], int row, int col){
    for (int i = 0; i < 3; i++)
    {
        if (i&1)
        {
            // odd index - Bottom to Top
            for (int j = row-1; j >= 0; j--)
            {
                cout<<arr[i][j]<<" ";
            }    
        }
        else{
            // 0 or even index - Top to Bottom
            for (int j = 0; j < i; j++)
            {
                cout<<arr[i][j]<<" ";
            }   
        }   
    }    
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
    // print2dArrayRowise(arr, 3, 3);
    WavePrint(arr, 3, 3);
    return 0;
}