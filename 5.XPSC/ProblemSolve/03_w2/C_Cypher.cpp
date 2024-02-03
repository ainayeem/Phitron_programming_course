// https: // codeforces.com/problemset/problem/1703/C
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
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        vector<string> s;
        for (int i = 0; i < n; i++)
        {
            int n;
            string in;
            cin >> n >> in;
            s.push_back(in);
        }
        for (int i = 0; i < n; i++)
        {
            // cout << s[i] << endl;
            for (int j = 0; j < s[i].size(); j++)
            {
                // cout << s[i][j] << " ";
                if (s[i][j] == 'U')
                {
                    a[i]--;
                }
                else
                {
                    a[i]++;
                }

                if (a[i] > 9)
                {
                    a[i] = 0;
                }
                else if (a[i] < 0)
                {
                    a[i] = 9;
                }
            }
        }
        for (int i = 0; i < n; i++)
        {
            cout << a[i] << " ";
        }
        cout << endl;
    }

    return 0;
}