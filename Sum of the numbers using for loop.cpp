#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter number of elements: ";
    cin >> n;

    int arr[100];
    int sum = 0;

    cout << "Enter the elements: ";
    for (int i = 0; i < n; i++)
        {
        cin >> arr[i];
        sum += arr[i];
    }

    cout << "Sum: " << sum << endl;

    return 0;
}
