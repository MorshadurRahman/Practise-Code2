#include <iostream>
using namespace std;

void Squares(int n)
{
    int i;
    for (i=1; i<=n; i++)
    {
        cout<<i*i<<" ";
    }
}

int main()
{
    cout <<"1 to 20 squares: ";
    Squares(20);
    cout << endl;
    return 0;
}

