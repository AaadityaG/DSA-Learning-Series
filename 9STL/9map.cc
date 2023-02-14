/*
map - 
    -> all data stored in the form of key:value paired. e.eg. Aditya:Gaikwad
    -> Aditya : Gaikwad, Aniket : Gaikwad - Possible 
    -> Aditya : Gaikwad, Aditya : Ratale - Not Possible 
    -> insert, find, erase, count functions has time complexity of O(logN)

*/

#include <iostream>
#include <map>
using namespace std;

void PrintMap(map<int, string> m){
    cout<<"Your map keys:values are : "<<endl;
    for(auto i : m){
        cout<<" "<<i.first<<" : "<<i.second<<endl;
    }
    cout<<endl;
}

int main()
{    
    map<int, string> m;   // example - 1 : Aditya 
    m[1] = "Aditya"; 
    m[2] = "Kiran"; 
    m[3] = "Karan"; 
    m[4] = "Karn"; 

    PrintMap(m);

    cout<<"is there 3 in map : "<<m.count(3)<<endl<<endl;
    cout<<"**Before erase of 3 : "<<endl;
    PrintMap(m);
    m.erase(3); 
    cout<<"**After erase of 3 : "<<endl;
    PrintMap(m); 
    return 0;
}