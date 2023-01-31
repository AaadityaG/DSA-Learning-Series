#include <iostream>
#include "myheader.h"
using namespace std;

int main()
{    
    int arr[6] = {1, 2, 3, 4, 5, 6};
    int size = 6;
    // int arr[6] = {1, 2, 4, 5, 6};
    // int size = 5;
    for (int i = 0; i < size; i = i + 2)
    {
        if(i+1 < size){
            // swap(arr[i], arr[i+1]);
            int temp = arr[i];
            arr[i] = arr[i + 1];
            arr[i+1] = temp;
        }
        // else{        // no need
        //     break;
        // }
    }

    printArr(arr, size);
    
    return 0;   
}