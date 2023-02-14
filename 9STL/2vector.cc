/*
Working of vector: 
    It is Dyanmic data structure.
    At first when their is no element in vector. Its size is 0 also capacity is 0.
    As we add the elements in it the size of is gets increased by 1. 
    And capacity of vector gets increased multiply by 2. 
*/


#include <iostream>
#include <vector>
using namespace std;

void printVector(vector<int> a){
    for (int i = 0; i < a.size(); i++)
    {
        cout<<" "<<a[i];
    }
    cout<<endl;
}

void DiffLoopToPrintVec(vector<int> a){
    for(int i: a){
        cout<<" "<<a[i];
    }
    cout<<endl;
}

int main()
{    
    vector<int> v;
    cout<<"Capacity of vector v = "<<v.capacity()<<endl;

    v.push_back(1);
    cout<<"Capacity of vector v = "<<v.capacity()<<endl;

    v.push_back(2);
    cout<<"Capacity of vector v = "<<v.capacity()<<endl;

    v.push_back(3);
    cout<<"Capacity of vector v = "<<v.capacity()<<endl;

    v.push_back(4);
    v.push_back(5);  // after pushing 5 in vector the size of vector is used size and capacity of vector is incresed by mltiply of 2
    cout<<"Capacity of vector v = "<<v.capacity()<<endl;
    cout<<"Size of vector v = "<<v.size()<<endl<<endl;

    cout<<"Vector before pop_back : "<<endl;
    printVector(v);

    v.pop_back();

    cout<<"Vector after pop_back : "<<endl;
    printVector(v);
    cout<<endl;

    cout<<"First element of vector: "<<v.front()<<endl;
    cout<<"Back element of vector: "<<v.back()<<endl<<endl;

    // initializing vector with certain value -
    vector<int> v1(5, 3);
    cout<<"After initializing vector v1 "<< endl 
    <<" The size = "<<v1.size() << endl 
    <<" The capacity "<<v1.capacity() << endl 
    <<" The array elements : " << endl ;
    printVector(v1);
    cout<<endl<<endl;

    cout<<" Copying vector v1 into v2 then v2 contains : "<<endl;
    vector<int>v2(v1);
    DiffLoopToPrintVec(v2);
    cout<<endl<<endl;

    cout<<"Before clearing vector v1 : "<<endl;
    DiffLoopToPrintVec(v1);

    v1.clear();

    cout<<"After clearing vector v1 : "<<endl;
    DiffLoopToPrintVec(v1);

    
    return 0;
}