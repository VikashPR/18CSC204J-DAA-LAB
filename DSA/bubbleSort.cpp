#include <iostream>
using namespace std;
int main()
{
    int n, i, j, temp;
    cout << "Enter the Size of the array : ";
    cin >> n;
    int a[n];
    cout << "\nEnter the array elements one by one : ";
    for (i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (i = 1; i < n; i++)
    {
        for (j = 0; j < n - 1; j++)
        {
            if (a[j] > a[j + 1])
            {
                temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }
    cout << "\nThe sorted array is:";
    for (i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }

    return 0;
}