/*
set properties : 
1. Unchangable (immutable)
2. Gives a sorted way of elements.
3. insert, find, erase, count functions has time complexity O(logN)
4. Size, begin, end, empty has time complexity O(1)
*/

#include <iostream>
#include <set>
using namespace std;

void printSET(set<int> s){
    for(int i : s){
        cout<<" "<<i;  // will give in a sorted order 
    }
    cout<<endl;
}

int main()
{    
    set<int> s;
    s.insert(5);
    s.insert(3);
    s.insert(4);
    s.insert(1);

    printSET(s);
    s.erase(s.begin());  // top of the sorted elements will get erase(delete)
    printSET(s);


    set<int>::iterator it = s.begin();   // created iterator for set.
    it++; // ++
    s.erase(it);
    printSET(s);

    cout<<"is there 5 in set s : "<<s.count(5)<<endl;

    set<int>::iterator itr = s.find(1);       // find the value with function find .
    for(auto it = itr; it!=s.end(); it++){   // to iterat through the whole set.
        cout<<*it<<" ";
    }
    cout<<endl;
    return 0;
}