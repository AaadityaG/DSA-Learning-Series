// using Sieve of Eratosthenes
#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int countPrimes(int n) {
        // count for storing count of total prime numbers
        int cnt = 0;
        vector<bool> prime(n+1, true);
        prime[0] = prime[1] = false;

        for(int i = 2; i<n; i++){
            if(prime[i]){
                cnt++;

                // it is helping to unpriming the table numbers from 2 to n.
                for(int j = 2*i; j<n; j = j+i){
                    prime[j] = 0;
                }
            }
        }
        cout<<"No of prime numbers : "<<cnt;
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