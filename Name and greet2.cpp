#include<iostream>
using namespace std;
int main()
{
    string name;
    cout << "name : ";
    cin >> name;

    if (name == "Alice" || name == "Bob")
    {
        cout << "hello, " << name << endl;
    }
    else
    {
        cout << "Not Found" <<endl;
    }

}
