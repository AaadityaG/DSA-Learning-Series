#include <iostream>
#include <queue>
using namespace std;

int main()
{    
    // max heap
    priority_queue<int> max;

    // min heap
    priority_queue<int, vector<int>, greater<int>> min;  // imp

    max.push(1);
    max.push(2);
    max.push(3);
    max.push(4);

    min.push(1);
    min.push(2);
    min.push(3);
    min.push(4);

    int n1 = max.size();           // imp 👇🏽
    for (int i = 0; i < n1; i++)   // here if we took i < max.size() will not work properly because we are popping top in loop.
    {
        cout<<" "<<max.top();
        max.pop();
    }

    cout<<endl;

    int n2 = min.size();
    for (int i = 0; i < n2; i++)   
    {
        cout<<" "<<min.top();
        min.pop();
    }
    cout<<endl;
    
    cout<<"Khali ho kya bhai max bhai? "<<max.empty()<<endl;
    cout<<"Khali ho kya bhai min bhai? "<<min.empty()<<endl;
    cout<<"Ha kyo ki ke through elements ko print karane ke liye pop kiya queue ko."<<endl;

    return 0;
}