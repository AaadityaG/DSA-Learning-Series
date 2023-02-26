// Reverse the array...

#include <iostream>
#include <vector>
using namespace std;

vector<int> reverse(vector<int> a){
    
    int s = 0, e = a.size()-1;
    while (s<=e)
    {
        // swap(a[s], a[e]);
        int temp = a[s];
        a[s] = a[e];
        a[e] = temp;
        s++;
        e--;
    }

    return a;
}

int main()
{    
    // vector<int> v = {11, 7, 3, 12, 4};
    vector<int> v = {1, 2, 3, 4, 5, 6};
    vector<int> ans = reverse(v);
    for (int i = 0; i < v.size(); i++)
    {
        cout<<" "<<v[i];
    }    
    cout<<endl;
    for (int i = 0; i < ans.size(); i++)
    {
        cout<<" "<<ans[i];
    }
    
    return 0;   
}