#include <iostream>
using namespace std;

/*

int 2d_arr[rows][columns];
int 1d_arr[elements];

IMP - if we want to pass 2d array to a function without any const global variable we
      need to give atleast the size of columns of 2d array.
      eg. void print2dArray(int arr[][4]) - will be 100% valid.

*/

// imp if we want to pass the 2d array to function...
const int i = 3;
const int j = 4;

// void print2dArray(int *arr, int i, int j){  // another way 
void print2dArray(int arr[i][j]){
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}

bool searchElement(int arr[i][j], int e){
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            if(arr[i][j]==e){
                return true;
            }
        }
    }
    return false;
}

int main()
{    
    // creating 2d array 
    // int arr[3][4];

    // intializing 2D array - (3*4 = 12 elements)
    int arr[3][4] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12};

    // cout<<"Enter the array elements for above array: "<<endl;

    // // input for 2d array  (ROW wise input )
    // for (int i = 0; i < 3; i++)
    // {
    //     for (int j = 0; j < 4; j++)
    //     {
    //         cin>>arr[i][j];
    //     }
    // }

    // // input for 2d array  (COLUMN wise input )
    // for (int i = 0; i < 4; i++)
    // {
    //     for (int j = 0; j < 3; j++)
    //     {
    //         cin>>arr[j][i];
    //     }
    // }

    // print 2d array function... 
    print2dArray(arr);

    cout<<"Enter the element to search the element: "<<endl;
    int target;
    cin>>target;

    if(searchElement(arr, target)){
        cout<<"Yes, element is found!";
    }
    else{
        cout<<"No, element is not found!";
    }


    
    return 0;
}