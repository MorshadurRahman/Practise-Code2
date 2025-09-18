#include <iostream>
using namespace std;
int main()
{
    int i, num=2342, digits[20], size=0;
    int temp = num;
    for (;temp>0; temp/= 10)
    {
        size++;
    }
    temp = num;
    for (i=size-1; i >= 0; i--)
    {
        digits[i] = temp % 10;
        temp /= 10;
    }
    cout << "[";
    for (i=0; i < size; i++)
    {
        cout << digits[i] << " ";
    }
    cout << "]" << endl;

    return 0;
}

