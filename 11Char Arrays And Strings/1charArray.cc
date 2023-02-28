#include <iostream>
using namespace std;

int getStringLength(char arr[]){
    int l = 0;
    for (int i = 0; arr[i] != '\0'; i++)
    {
        l++;
    }
    cout<<"Length = "<<l<<endl;
}

int main()
{    
    char name[20];
    cout<<"Enter your name : ";
    cin>>name;
    name[2] = '\0';

    cout<<"Your name is "<<name<<endl;

    getStringLength(name);
    return 0;
}