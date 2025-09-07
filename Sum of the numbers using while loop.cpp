#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter number of elements: ";
    cin >> n;

    int arr[100];
    int sum = 0;
    int i = 0;

    cout << "Enter the elements: ";
    while (i < n)
    {
        cin >> arr[i];
        sum += arr[i];
        i++;
    }

    cout << "Sum: " << sum << endl;

    return 0;
}

