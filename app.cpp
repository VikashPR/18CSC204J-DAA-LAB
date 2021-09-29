#include <iostream>
#include <math.h>
using namespace std;
int binarySearch(int a, int n, int t)
{
    int l;
    int r = n - 1;
    while (l <= r)
    {
        int m = floor((l + r) / 2);

        if (a[m] < t)
        {
            l = m + 1;
        }
        else if (a[m] > t)
        {
            r = m - 1;
        }
        else
        {
            return m;
        }
    }
}
int main()
{
    int i, n, numFind, pos;
    int a[10101];
    cout << "\n Enter the size of the array a[]:";
    cin >> n;
    cout << "\n Enter the size of the array a[] to find:";
    cin >> numFind;
    cout << "Enter the array elements one by one : \n";
    for (i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (i = 0; i < n; i++)
    {
        pos = binarySearch(a[i], n, numFind);
        cout << "Position is" << pos;
    }
}