#include<iostream>
using namespace std;

bool elementExists(int arr[], int size, int target)
{
    for(int i = 0; i < size; i++)
    {
        if(arr[i] == target)
        {
            return true;
        }
    }
    return false;
}
 int main()
 {
     int i, size, target;
     cout <<"Enter Number of Element in The List : ";
     cin >>size;

     int n[size];
     cout << "Enter Elements : ";
     for(int i =0; i <size; i++)
     {
     cin >> n[i];
     }

     cout << "Enter Number to Search :";
     cin >> target;

     if(elementExists(n, size, target))
     {
         cout << "The element is present";
     }

     else
     {
         cout << "The element is not found";
     }
     return 0;
 }
