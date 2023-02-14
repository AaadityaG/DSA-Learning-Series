#include <iostream>
#include <list>
using namespace std;

int main()
{    
    list<int> l;
    l.push_back(1);
    l.push_front(2);
    for (int i : l)
    {
        cout<<" "<<i;
    }
    cout<<endl;
    l.pop_back();
    for (int i : l)
    {
        cout<<" "<<i;
    }

    list<int> newlist(l);

    list<int> l1(5, 2);   // intialized with 2, 2, 2, 2, 2
    return 0;
}