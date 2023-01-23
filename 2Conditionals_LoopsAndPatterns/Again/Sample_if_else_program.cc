#include <iostream>
using namespace std;

int main()
{    
    int a, b;
    cout<<"Enter a and b"<<endl;
    cin>>a>>b;
    if(a<b){
        cout<<"Yes, "<<a<<" is less than "<<b<<endl;
        cout<<"It means "<<b<<" is greater than "<<a<<endl;
    }
    else{
        cout<<"NO, "<<b<<" is not greater than "<<a<<endl;
        cout<<"It means "<<a<<" is grater than "<<b<<endl;
    }
    return 0;
}