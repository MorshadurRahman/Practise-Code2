//Modify the previous program such that only the users Alice and Bob are greeted with their names

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

