#include <iostream>
using namespace std;

int main()
{    
    int a;
    cout<<"First number:";
    cin>>a;
    char c;
    cout<<"Operation:";
    cin>>c;
    int b;
    cout<<"Second number:";
    cin>>b;
    switch (c)
    {
        case '+':
            cout<<"= "<<a+b<<endl;
            break;
        case '-':
            cout<<"= "<<a-b<<endl;
            break;
        case '*':
            cout<<"= "<<a*b<<endl;
            break;
        case '/':
            cout<<"= "<<a/b<<endl;
            break;
        case '%':
            cout<<"= "<<a%b<<endl;
            break;
        default:
            cout<<"Enter valid inputs"<<endl;
            break;
    }
    return 0;   
}