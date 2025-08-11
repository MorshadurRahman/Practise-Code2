#include<iostream>
using namespace std;
int main()
{

    int i, n, sum;

    cout << "Enter a number :";
    cin >> n;

    for (int i=1; i<=n; i++)
    {
        if (i % 3 == 0 || i % 5 == 0)
        {
            sum =sum+i;
        }
    }

    cout << "sum of the multiplies of 3 or 5 from 1 to " << n << endl;
    return 0;
}

