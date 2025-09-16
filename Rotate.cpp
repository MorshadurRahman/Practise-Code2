#include <iostream>
using namespace std;

void rotate(int arr[],int n,int k)
{
    k =k % n;
    for (int r =0;r < k;r++)
    {
        int first=arr[0];
        for (int i=0;i <n-1;i++)
        {
            arr[i]=arr[i+1];
        }
        arr[n-1] =first;
    }
}
int main()
{
    int arr[] = {1,2,3,4,5,6};
    int n =sizeof(arr)/sizeof(arr[0]);
    int k=2;
    rotate(arr,n,k);
    cout << "Rotated list: ";
    for (int i=0;i < n;i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}
