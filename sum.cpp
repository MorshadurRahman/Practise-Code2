//Write a program that asks the user for a number n and prints the sum of the numbers 1 to n

#include<iostream>
using namespace std;
int main()
{
    int i, n, sum;

    cout << "Enter a number :";
    cin >> n;

    for (int i=1; i<=n; i++)
    {
       sum =sum+i;
    }

    cout << "The sum of the numbers 1 to " << n << endl;
    return 0;
}

