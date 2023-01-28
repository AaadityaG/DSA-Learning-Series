// Correct but incomplete
#include <iostream>
using namespace std;

int main()
{    
    int amount;
    cout<<"Enter the amount:";
    cin>>amount;
    char out;
    cout<<"Enter a for output:"<<endl;
    cin>>out;
    int Note100, Note50, Note20, Note1 = 0;
    int remAmt1, remAmt2, remAmt3, remAmt4 = 0;
    switch (out)
    {
        case 'a':{        
            Note100 = amount/100;
            remAmt1 = amount - (100*Note100);
            cout<<Note100<<" Notes of 100rs."<<endl;
            // break;
        }
        case 'b':{
            Note50 = remAmt1/50;
            remAmt2 = remAmt1 - (50*Note50);
            cout<<Note50<<" Notes of 50rs."<<endl;
            // break;
        }
        case 'c':{
            int Note20 = remAmt2/20;
            int remAmt3 = remAmt2 - (20*Note20);
            cout<<Note20<<" Notes of 20rs."<<endl;
            // break;
        }
        case 'd':{
            int Note1 = remAmt3;
            // int remAmt4 = remAmt3-(1*Note1);
            // if(Note1==6422476){
            //     cout<<"0 Notes of 1rs."<<endl;
            // }
            // else{
            //     cout<<Note1<<" Notes of 1rs."<<endl;
            // }
            cout<<Note1<<" Notes of 1rs."<<endl;
            // break;
        }
        default:{
            cout<<"Enter valid inputs...";
            break;
        }
    }
    return 0;
}