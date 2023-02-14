#include <iostream>
#include <array>
using namespace std;

// array is static datastructure.

void printArr(array<int, 4> arr){
    int size = arr.size();
    for (int i = 0; i < 4; i++)
    {
        cout<<" "<<arr[i];
    }
    cout<<endl;
}

int main()
{    
    int basic[] = {1, 2, 3};  // basic array.

    array<int, 4> a = {1, 2, 3, 4}; 

    int size = a.size();
    cout<<"Your array is :"<<endl;
    printArr(a);
    cout<<"Element at array index 2 = "<<a.at(2)<<endl;
    
    cout<<"Is your array empty : "<<a.empty()<<" means false(not empty)"<<endl;

    cout<<"First element of array is : "<<a.front()<<endl;
    cout<<"Last element of array is : "<<a.back()<<endl;
    return 0;
}