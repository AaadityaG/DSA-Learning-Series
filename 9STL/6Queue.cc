#include <iostream>
#include <queue>
using namespace std;

int main()
{    
    queue<string> q;
    q.push("Aditya");
    q.push("Arun");
    q.push("Gaikwad");

    cout<<"Front of Queue q : "<<endl;
    cout<<q.front()<<endl;
    cout<<"Back of Queue q : "<<endl;
    cout<<q.back()<<endl;

    q.pop();
    cout<<"Front of Queue q after pop : "<<endl;
    cout<<q.front()<<endl;
    return 0;
}