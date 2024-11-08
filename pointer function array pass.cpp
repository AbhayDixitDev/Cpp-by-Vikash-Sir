#include<iostream>
using namespace std;

void show(int a[], int s)
{
    for(int i=0; i<s; i++)
    {
        a[i] = a[i] + 10;
        cout << a[i] << "\n";
    }
}

int main()
{
    int arr[] = {20, 13, 43, 2, 5};
    int s = sizeof(arr) / sizeof(arr[0]);
    show(arr, s);

    cout << "\noriginal array\n";
    for(int i = 0; i < s; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}