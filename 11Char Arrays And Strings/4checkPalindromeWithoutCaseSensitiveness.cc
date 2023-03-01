/*
Problem :
    if given : "AdA"
    output : Yes, it is palindrome

    if givem : "adA"
    output : Yes, it is palindrome.
*/


#include <iostream>
using namespace std;

char toLower(char c){
    if(c>='a' && c<='z'){
        return c;
    }
    else{
        char temp = c - 'A' + 'a';
        return temp;
    }
}

bool isPalindrome(char arr[], int n){
    int s = 0;
    int e = n-1;    

    while (s<=e)
    {
        if(toLower(arr[s])!=toLower(arr[e])){
            return false;
        }
        s++;
        e--;
    }
    return true;
}

int main()
{    
    char arr[4] = {'N', 'O', 'o', 'o'};

    if(isPalindrome(arr, 4)){
        cout<<"Yes it is!";
    }
    else{
        cout<<"No it is not!";
    }

    return 0;
}