#include <iostream>
using namespace std;

void Tree(int rows)
{
    for(int i=1; i<=rows; i++)
    {
        for(int j=1; j<= rows-i; j++)
        {
            cout << " ";
        }
        for(int k=1; k<=i; k++)
        {
            cout << "* ";
        }
        cout << endl;
    }
}

int main()
{
    int rows=11;
    Tree(rows);
    return 0;
}
