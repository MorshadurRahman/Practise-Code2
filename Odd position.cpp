#include <iostream>
using namespace std;

void printOddPositions(int arr[], int size)
{
    cout << "Elements at odd positions: ";
    for (int i = 0; i < size; i++)
    {
        if ((i + 1) % 2 != 0)
        {
            cout << arr[i] << " ";
        }
    }
}

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

    printOddPositions(arr, size);

    return 0;
}

