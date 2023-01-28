#include <iostream>
using namespace std;

int main()
{    
    int a;   
    cout<<"Enter the number:"<<endl;
    cin>>a;
    switch(a){     // parameter could be int or char
        case 1:
            cout<<"This is first Case."<<endl;
            break;              // We can only use break not continue
            // continue;       // continue is only valid in loops. 
        case 2:
            cout<<"This is Second Case."<<endl;
            break;
        default:
            cout<<"This is Default Case."<<endl;
    }
    return 0;
}