#include <iostream>
using namespace std;

void printArr(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << " " << arr[i];
    }
    cout << endl;
}

int partition(int a[], int high, int low)
{
    int pivot = a[low];
    int i = low + 1;
    int j = high;
    int temp;

    do
    {
        while (a[i] <= pivot)
        {
            i++;
        }

        while (a[j] > pivot)
        {
            j--;
        }

        if (i < j)
        {
            temp = a[i];
            a[i] = a[j];
            a[j] = temp;
        }
    } while (i < j);

    temp = a[low];
    a[low] = a[j];
    a[j] = temp;

    return j;
}

void QuickSort(int ar[], int low, int high)
{
    int partitionedIndex;
    if (low < high)
    {
        partitionedIndex = partition(ar, low, high);
        QuickSort(ar, low, partitionedIndex - 1);
        QuickSort(ar, partitionedIndex + 1, high);
    }
}

int main()
{
    int a[] = {1, 2, 6, 4, 23, 7, 8};
    cout << "Before : " << endl;
    printArr(a, 7);
    QuickSort(a, 0, 6);
    cout << "After : " << endl;
    printArr(a, 7);

    return 0;
}
