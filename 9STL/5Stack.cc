#include <iostream>
#include <stack>
using namespace std;

void printStack(stack<string> s){
    for(int i = 0; i<s.size(); i++){
        // string temp = s.top();
        cout<<" "<<s.top();
        s.top();
    }
    cout<<endl;
}

int main()
{    
    stack<string> s;
    s.push("Aditya");
    s.push("Arun");
    s.push("Gaikwad");

    // printStack(s);

    cout<<"Top of stack s is : "<<s.top()<<endl;

    s.pop();
    cout<<"After popping top of stack s is : "<<s.top()<<endl;

    cout<<"Size of stack : "<<s.size()<<endl;

    cout<<"is stack empty : "<<s.empty()<<endl;


    return 0;
}