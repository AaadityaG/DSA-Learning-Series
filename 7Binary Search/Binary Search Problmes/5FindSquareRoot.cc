#include <iostream>
#include <vector>
using namespace std;

long long int sqrtInt(int x)
{
    int s = 0;
    long long int ans = -1;
    int e = x;
    long long int mid = s + (e - s) / 2;
    while (s <= e)
    {
        long long int sq = mid * mid;
        if (sq == x)
        {
            ans = mid;
        }
        if (sq > x)
        {
            e = mid - 1;
        }
        else
        {
            ans = mid;
            s = mid + 1;
        }
        mid = s + (e - s) / 2;
    }
    return ans;
}

double Presize_sqrt(int n, int precision, int tempSol)
{
    double factor = 1;
    double ans = tempSol;
    for (int i = 0; i < precision; i++)
    {
        factor = factor / 10;
        for (double j = ans; j * j < n; j = j + factor)
        {
            // j = j+factor;
            ans = j;
        }
    }
    return ans;
}

int main()
{
    int m;
    cout << "Enter the number:" << endl;
    cin >> m;

    int tempSol = sqrtInt(m);
    cout << "The ans in int : " << tempSol << endl;
    cout << "The more precise answer is : " << Presize_sqrt(m, 3, tempSol);
    return 0;
}