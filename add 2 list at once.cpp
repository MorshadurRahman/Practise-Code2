#include <iostream>
#include <list>
using namespace std;

int main()
{
    list<char> list1 = {'a', 'b', 'c'};
    list<int> list2 = {'1', '2', '3'};

    list1.insert(list1.end(), list2.begin(), list2.end());

    cout << "Concatenated list: ";
    for (char n : list1)
        {
        cout << n << ", ";
    }
    cout << endl;

    return 0;
}

