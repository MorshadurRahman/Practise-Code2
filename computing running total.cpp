#include <iostream>
using namespace std;

int main()
{
    int size;
    cout << "Enter number of elements: ";
    cin >> size;

    int arr[100];
    cout << "Enter elements: ";
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }

    for (int i = 1; i < size; i++)
    {
        arr[i] = arr[i] + arr[i-1];
    }

    cout << "Running total list: ";
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}

