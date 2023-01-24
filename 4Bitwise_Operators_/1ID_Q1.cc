#include <iostream>
using namespace std;
// output ?
int main()
{    
    int a, b = 1;
    a = 10;
    if(a++){
        cout<<b;
    }
    else{
        cout<< ++b;
    }
    return 0;
}