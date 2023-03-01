#include <iostream>
#include <cstring>
using namespace std;

int main()
{    
    string s = "Adi\0tya";
    char a[] = "Adi\0tya";
    cout<<"Printing char pointer array :"<<endl;
    cout<<a<<endl;
    cout<<"Printing string :"<<endl;
    cout<<s<<endl;
    
    return 0;
}