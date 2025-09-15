#include <iostream>
using namespace std;

int main()
{
    char letters[] = {'a', 'b', 'c'};
    int  numbers[] = {1, 2, 3};
    int n = 3;

    for (int i = 0; i < n; i++)
    {
        cout << letters[i] << "," << numbers[i] << ",";
    }

    return 0;
}
