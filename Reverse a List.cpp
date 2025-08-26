//Write function that reverses a list, preferably in place

#include<iostream>
using namespace std;

int main()
{
    int i, n, ar[10];

    cout << "Enter Element Numbers :" <<endl;
    cin >>n;

    cout <<"Enter " << n <<"  Elements :" <<endl;
    for(i = 0; i < n; i++)
    {
        cin >> ar[i];
    }
    cout << "Reverse List :" << endl;
    for(i = n-1; i >= 0; i--)
    {
        cout << ar[i] << " ";
    }
    return 0;

}
