#include <iostream>
#include <vector>
#include <set>
#include <algorithm>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<pair<long long, int> > a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i].first;
        a[i].second = i;
    }
    sort(a.begin(), a.end());

    long long ans = (long long)1e18;
    for (int i = 1; i < n; i++)
    {
        if (a[i].second < a[i - 1].second)
        {
            if (ans > a[i].first - a[i - 1].first)
                ans = a[i].first - a[i - 1].first;
        }
    }
    cout << ans;
    return 0;
}