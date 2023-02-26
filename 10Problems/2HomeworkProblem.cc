/* 
problem - Rversse the array but if m is given and reverse arrya from m .

eg. array = {1, 2, 3, 4}
    m = 1
->  Reversed array = {1, 4, 3, 2}

*/
#include <iostream>
#include <vector>
using namespace std;

vector<int> reverse(vector<int> a, int m){   // returning the vector is most important.
    int s = m + 1, e = a.size()-1;
    while(s<=e){
        int temp = a[s];
        a[s] = a[e];
        a[e] = temp;
        s++;
        e--;
    }
    return a;
}

void printArr(vector<int> v){
    for (int i = 0; i < v.size(); i++)
    {
        cout<<" "<<v[i];
    }
    cout<<endl;
}

int main()
{    
    int m = 2;
    vector<int> a = {1, 2, 3, 4, 6, 7};
    cout<<"Before : "<<endl;
    printArr(a);
    vector<int> ans = reverse(a, m);
    cout<<"After : "<<endl;
    printArr(ans);

    return 0;
}