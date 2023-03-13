#include <iostream>
#include <vector>
using namespace std;

class Solution {

    vector<int> v1;
    bool isPrime(int n){
        if(n<=1){
            return false;
        }
        for(int i = 2; i<n; i++){
            if(n%i==0){
                return false;
            }
        }
        return true;
    }
public:

    int countPrimes(int n) {
        int cnt = 0;
        for(int i = 2; i<n; i++){
            if(isPrime(i))
                cnt++;
        }
        v1.push_back(cnt);

        for (int i = 0; i < v1.size(); i++)
        {
            cout<<" "<<v1[i];
        }
    }
};

int main(){
    int a;
    cout<<"Enter the number:"<<endl;
    cin>>a;
    Solution s = Solution();    
    s.countPrimes(a);
    return 0;
}