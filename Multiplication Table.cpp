//Write a program that prints a multiplication table for numbers up to 12

#include<iostream>
using namespace std;
int main()
{
    int n, m;

    cout << "enter a number : " ;
    cin >>n;

    for(m=1; m <= 12; m++)
    {
        cout << m << "*" << n << "=" << (n*m) << endl;
    }

        return 0;
}

