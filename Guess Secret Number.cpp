#include <iostream>
using namespace std;

int main()
{
    int guess;
    int secret = 26;
    int tries = 0;

    cout << "                                       !!!!! Guess The Secret Number !!!!!" << endl;

    while (true)
    {
        cout << "Enter Number: ";
        cin >> guess;
        tries++;

        if (guess > secret)
        {
            cout << "Too high" << endl;
        }
        else if (guess < secret)
        {
            cout << "Too low" << endl;
        }
        else
        {
            cout << "Got it! The number was " << secret << endl;
            cout << "You guessed it in " << tries << " tries." << endl;
            break;
        }
    }
    return 0;
}

