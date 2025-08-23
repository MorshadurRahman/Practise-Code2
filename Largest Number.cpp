#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int i, n;

    cout <<"Enter number of elements :";
    cin >> n;

    int arr[n];
    cout <<"Elements :";
    for(i=0; i<n; i++)
    {
    cin >>arr[i];
    }

    int largest = *max_element(arr, arr+n);
    cout <<"Largest Number :" << largest <<endl;
    return 0;
}
