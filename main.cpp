#include <iostream>
using namespace std;
int main()
{
    int i, n, r, m = 0;
    cout << "Enter the number :\n";
    cin >> n;
    while (n > 0)
    {
        r = n % 10;
        cout << m << "\t\t";
        n = n / 10;
    }
    return 0;
}