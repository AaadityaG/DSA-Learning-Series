#include <iostream>
using namespace std;

int main()
{    
    int a = 2;
    int b = 3;
    
    int c1 = b&a;   // Bitwise 'And' Operator    

    int c2 = b|a;   // Bitwise 'Or' Operator    

    int c3 = ~a;    // Bitwise 'Not' Operator    

    cout<<"After Bitwise 'And(&)' Operator c1 = "<<c1<<endl;
    cout<<"After Bitwise 'Or(|)' Operator c2 = "<<c2<<endl;
    cout<<"After Bitwise 'Not(~)' Operator c3 = "<<c3<<endl;
    return 0;
}

/*
Above here 
2 - in binary - 0 0 1 0
3 - in binary - 0 0 1 1 
  
  - after &   - 0 0 1 0  (which is 2 in decimal)

  - after |   - 0 0 1 1  (which is 3 in decimal)

  - after ~2  - 1 1 0 1  (which is 3 in decimal)

*/