#include <iostream>
using namespace std;
int main()
{
    int n, i, j, key;
    cout << "Enter the size of the array";
    cin >> n;
    int a[n - 1];
    for (i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (i = 1; i < n; i++)
    {
        key = a[i];
        j = i - 1;
        while (key < a[j] && j >= 0)
        {
            a[j + 1] = a[j];
            j--;
        }
        a[j + 1] = key;
    }

    cout << "The sorted array is: \n";

    for (i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
}