#include <iostream>
using namespace std;

int main()
{
    // int arr[50] = {2, 3, 4, 1, 45};
    int arr[50];
    int size, key;
    cout << "Enter the size :";
    cin >> size;
    cout << "Enter the elements :" << endl;
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    cout << "Enter the key you want to search : " << endl;
    cin >> key;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == key)
        {
            cout << key << " is present!" << endl;
            break;
        }
        else if (i == (size - 1))
        {
            cout << key << " is not Present!" << endl;
            break;
        }
    }

    return 0;
}