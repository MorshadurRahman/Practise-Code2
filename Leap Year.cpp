#include <iostream>
using namespace std;

int main()
{
    int year, count = 0;
    cout << "Enter the current year: ";
    cin >> year;

    cout << "Next 20 leap years:\n";

    while (count < 20)
    {
        year++;
        if ((year % 400 == 0) || (year % 4 == 0 && year % 100 != 0))
        {
            cout << year << " ";
            count++;
        }
    }

    cout << endl;
    return 0;
}

