// https://codeforces.com/problemset/problem/1669/D
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;
        int r = 0, b = 0, w = 0;
        bool flag = false;
        for (int i = 0; i < n; i++)
        {
            r += (s[i] == 'R');
            b += (s[i] == 'B');
            w += (s[i] == 'W');

            if (w)
            {
                flag = (flag | ((r == 0 && b == 0) || (r >= 1 && b >= 1)));
                if (!flag)
                    break;
                if (i < n - 1)
                    flag = false;
                w = 0, r = 0, b = 0;
            }
        }
        flag = (flag | ((r == 0 && b == 0) || (r >= 1 && b >= 1)));
        cout << (flag ? "YES" : "NO") << endl;
    }

    return 0;
}