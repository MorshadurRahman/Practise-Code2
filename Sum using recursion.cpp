#include <iostream>
using namespace std;

int sumrec(int arr[], int n)
{
    if (n == 0) return 0;
    return arr[n-1] + sumrec(arr, n-1);
}

int main()
{
    int n;
    cout << "Enter number of elements: ";
    cin >> n;

    int arr[100];
    cout << "Enter the elements: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << "Sum: " << sumrec(arr, n) << endl;

    return 0;
}

