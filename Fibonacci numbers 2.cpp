#include <iostream>
using namespace std;
int main()
{
    int i, n=100;
    long long first =1,second =1;
    cout << "First 100 Fibonacci numbers: ";
    cout << first << " " << second << " ";
    for (i=3; i<=n; i++)
    {
        long long next = first+second;
        cout << next << " ";
        first=second;
        second=next;
    }
    cout << endl;
    return 0;
}

