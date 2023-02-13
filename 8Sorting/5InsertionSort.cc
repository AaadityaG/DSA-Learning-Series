#include <iostream>
#include <vector>
using namespace std;

void insertionSort(vector<int> &arr)
{
    int n = arr.size();
    for (int i = 1; i < n; i++)
    {
        int temp = arr[i];
        int j = i - 1;
        while(j >= 0) 
        {

            if (arr[j] > temp)
            {
                // shift
                arr[j + 1] = arr[j];
            }
            else
            { // ruk jao
                break;
            }
            j--;
        }
        // copy temp value
        arr[j + 1] = temp;
    }
}

void printArray(vector<int> a)
{
    for (int i = 0; i < a.size(); i++)
    {
        cout << " " << a[i];
    }
    cout << endl;
}

int main()
{
    vector<int> v1 = {4, 12, 11, 2};
    printArray(v1);
    insertionSort(v1);
    printArray(v1);
    return 0;
}