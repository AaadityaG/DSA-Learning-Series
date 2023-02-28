#include <iostream>
using namespace std;

bool isStringPalindrom(char arr[], int n){
    int s = 0;
    int e = n-1;
    while (s<=e)
    {
        if(arr[s]!=arr[e]){
            return false;
        }
        s++;
        e--;
    }
    return true;
}

int main()
{    
    char arr[4] = {'N', 'N', 'O', 'N'};     // NO 
    // char arr[4] = {'N', 'N', 'N', 'N'};   // yes 
    if(isStringPalindrom(arr, 4)){
        cout<<"Yes it is!";
    }
    else{
        cout<<"No it is not!";
    }
    return 0;
}