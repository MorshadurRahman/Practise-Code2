#include <iostream>
using namespace std;

void fibonacci(int n)
{
    long long  a = 1, b = 1;
    cout << a << " " << b << " ";
    for (int i = 3; i <= n; i++)
    {
        long long  c = a + b;
        cout << c << " ";
        a = b;
        b = c;
    }
}
int main()
{
    int n =100;
    cout<<"First "<<n<<" Fibonacci numbers: ";
    fibonacci(n);
    cout << endl;
    return 0;
}

