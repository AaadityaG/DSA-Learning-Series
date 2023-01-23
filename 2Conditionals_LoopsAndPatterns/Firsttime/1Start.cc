#include <iostream>
#include <string>
using namespace std;

int main()
{
    // conditional statements 
    int a = 10, b = 20;
    // if(a>b){ 
    //     cout<<"a is greater than b"<<endl;
    // }
    // else{
    //     cout<<"b is greater than a"<<endl;
    // }

    // short hand c++ conditionals - also called ternary operator
    // cout<<"Enter a:";
    // cin>>a;
    // cout<<"Enter b:";
    // cin>>b;
    // string s1 =  (a>b) ? "a is greater than b" : "b is greater than a"; 
    // cout<<s1<<endl;

    // another way for inputs to x and y - (TRICKY...)
    int x, y;
    cout<<"Enter x:";
    x = cin.get();  // so cin.get() function takes all inputs as a string or char...

    // string c = (x>y) ? "x is greater than y" : "y is greater than x"; 
    // cout<<c;
    cout<<x;

    
    return 0;
}