// https: // codeforces.com/problemset/problem/1692/C

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        char s[8][8];
        for (int i = 0; i < 8; i++)
        {
            for (int j = 0; j < 8; j++)
            {
                cin >> s[i][j];
            }
        }
        int x = 0, y = 0;
        for (int i = 0; i <= 7; i++)
        {
            for (int j = 0; j <= 7; j++)
            {

                if (s[i][j] == '#')
                {
                    // cout << i << " " << j << endl;
                    if (s[i - 1][j - 1] == '#' && s[i - 1][j + 1] == '#' && s[i + 1][j - 1] == '#' && s[i + 1][j + 1] == '#')
                    {
                        x = i + 1;
                        y = j + 1;
                    }
                }
            }
        }
        cout << x << " " << y << endl;
    }

    return 0;
}