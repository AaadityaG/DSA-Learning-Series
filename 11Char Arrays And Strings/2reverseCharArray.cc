#include <iostream>
using namespace std;

void reverse(char name[], int n){
    int s = 0;
    int e = n-1;
    while (s<e)
    {
        swap(name[s++], name[e--]);
    }
}

int main()
{    
    char charArray[10];
    cout<<"Enter your name: ";
    cin>>charArray;
    cout<<"You Entered your name: ";
    cout<<charArray<<endl;
    cout<<"Your reversed name: ";
    reverse(charArray, 6);
    cout<<charArray;
    return 0;
}