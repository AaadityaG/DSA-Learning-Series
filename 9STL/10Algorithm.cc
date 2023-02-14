#include <iostream>
#include <vector>
#include <Algorithm>
using namespace std;

int main()
{    
    vector<int> v;
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    v.push_back(4);

    // binary search algorithm 
    cout<<"Is there 3 in vector? : "<<binary_search(v.begin(), v.end(), 3)<<endl<<endl;

    // lower bound 
    cout<<"Lower bound -> "<<lower_bound(v.begin(), v.end(), 2) - v.begin()<<endl;
    cout<<"Upper bound -> "<<upper_bound(v.begin(), v.end(), 3) - v.begin()<<endl<<endl;

    // swap 
    int a = 5, b = 6;
    cout<<"Before swap : a = "<<a<<" b = "<<b<<endl;
    swap(a, b);
    cout<<"After swap : a = "<<a<<" b = "<<b<<endl;

    // sort - made by introsort(Quick sort + heap sort + insertion sort).



    // rotate -

    return 0;
}