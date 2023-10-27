#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        string x, s;
        cin >> x >> s;

        int minop = INT_MAX;
        for (int i = 1; i <= n + 1; i++)
        {
            string cur = x;
            for (int j = 1; j < i; j++)
            {
                cur += x;
            }
            // cout << cur << endl;
            int find = cur.find(s);
            if (find != -1)
            {
                minop = min(minop, i);
            }
        }
        if (minop == INT_MAX)
        {
            cout << "-1" << endl;
        }
        else
        {
            cout << minop << endl;
        }
    }

    return 0;
}