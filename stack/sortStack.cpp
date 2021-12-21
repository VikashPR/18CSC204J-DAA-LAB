#include <iostream>
#include <queue>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        priority_queue<pair<int, int> > scores;
        int i = 0;
        while (n--)
        {
            int value;
            cin >> value;
            scores.push({value, i + 1});
            i++;
        }
        while (!scores.empty())
        {
            cout << scores.top().second << " ";
            scores.pop();
        }
        cout << endl;
    }
    return 0;
}