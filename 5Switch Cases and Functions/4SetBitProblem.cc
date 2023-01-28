/*
without function the code in main becomes 
- Bulky
- Unreadable 
- Buggy 
- Complicated
*/

// total numbers of set bits in a given a and b;
int setBits(int n, int m){
    int count = 0;    
    while(n!=0)
    {
        if(n&1==1){
            count++;
        }   
        n = n>>1;
    }
    while (m!=0)
    {
        if(m&1){
            count++;
        }
        m = m>>1;
    }
    return count;
}


#include <iostream>
using namespace std;

int main()
{    
    int n1, m1;
    cout<<"Enter First number:";
    cin>>n1;
    cout<<"Enter Second number:";
    cin>>m1;
    cout<<"Total No. of Set Bits = "<<setBits(n1, m1)<<endl;
    return 0;
}