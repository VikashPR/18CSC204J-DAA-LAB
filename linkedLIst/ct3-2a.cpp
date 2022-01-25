#include <bits/stdc++.h>
using namespace std;

int last(int n, int k)
{
    deque<int> dq;
    for (int i = 1; i <= n; i++)
    {
        dq.push_back(i);
    }
    int i = 1;
    while (dq.size() > 1)
    {
        if (i % 2 != 0)
        {
            for (int j = 0; j < k; j++)
            {
                if (dq.size() == 1)
                {
                    return dq.front();
                }
                dq.pop_front();
            }
            i++;
        }
        else
        {
            for (int j = 0; j < k; j++)
            {
                if (dq.size() == 1)
                {
                    return dq.front();
                }
                dq.pop_back();
            }
            i++;
        }
    }
    return dq.front();
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        cout << last(n, k) << "\n";
    }
    return 0;
}