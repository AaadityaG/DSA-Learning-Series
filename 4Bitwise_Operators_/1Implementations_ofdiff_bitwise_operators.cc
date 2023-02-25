#include <iostream>
using namespace std;

int main()
{    
    int a = 4;              // 100 in binary
    int b = 6;              // 110 in binary

    cout<<"Above after a = "<<a<<" b = "<<b<<endl;

    // And operator (&) -
    int c = a&b;            // 00...100 in binary(by operator)
    cout<<"After AND operator: "<<c<<endl;          // 4 in decimal

    // Or operator (|) -
    int d = a|b;            // 00...110 in binary(by operator)
    cout<<"After OR operator: "<<d<<endl;          // 6 in decimal

    // Not operator (~) -
    int e = ~a;             // 11...011 in binary(by operator), (while printing)00...100 in 1's comp., 00...101 in 2's comp., and binary starting with 1 so '-'sign.  
    cout<<"After NOT operator: "<<e<<endl;          // -5 in decimal

    // Xor operator (^) -
    int f = a^b;            // 010 in binary
    cout<<"After XOR operator: "<<f<<endl;          // 2 in decimal

    cout<<"Shift operators:"<<endl;
    // Right shift -
    cout<<"5 right shifted by 1: "<<(5>>1)<<endl;    // 00...101 in binary, 00...010 after right shift by 1 -> (2)
    cout<<"5 right shifted by 2: "<<(5>>2)<<endl;    // 00...101 in binary, 00...001 after right shift by 2 -> (1)

    // left shift -
    cout<<"5 left shifted by 1: "<<(5<<1)<<endl;   // 00...101 in binary, 00...1010 after left shift by 1 -> (10)
    cout<<"5 left shifted by 2: "<<(5<<2)<<endl;   // 00...101 in binary, 00...10100 after left shift by 2 -> (20)

    return 0;
}