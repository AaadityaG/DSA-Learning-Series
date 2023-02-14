#include <iostream>
#include <deque>
using namespace std;

void PrintDeque(deque<int> d){
    cout<<"Your deque is : "<<endl;
    for(int i : d){
        cout<<" "<<i;
    }
    cout<<endl;
}

int main()
{    
    deque<int> d1;
    d1.push_back(2);
    d1.push_front(1);
    PrintDeque(d1);
    cout<<endl<<endl;

    cout<<"First element : "<<d1.front()<<endl;
    cout<<"Last element : "<<d1.back()<<endl<<endl;

    cout<<"is our deque d1 empty = "<<d1.empty()<<endl;

    cout<<"After pop_back :"<<endl;
    d1.pop_back();
    PrintDeque(d1);
    cout<<endl<<endl;

    deque<int> d2 = {1, 2, 3, 4, 5, 6};
    cout<<"Before erase : "<<endl;
    PrintDeque(d2);
    d2.erase(d2.begin(), d2.end());
    cout<<"After erase : "<<endl; 
    PrintDeque(d2);

    return 0;   
}