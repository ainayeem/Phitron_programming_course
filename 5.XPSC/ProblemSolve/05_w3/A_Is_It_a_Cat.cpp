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
        int flag = 1;
        if ((s[0] != 'm' && s[0] != 'M') || (s[n - 1] != 'w' && s[n - 1] != 'W'))
        {
            flag = 0;
        }
        for (int i = 0; i < n - 1; i++)
        {
            if (s[i] != s[i + 1])
            {
                if ((s[i] == 'm' || s[i] == 'M') && (s[i + 1] == 'e' || s[i + 1] == 'E'))
                    continue;
                else if ((s[i] == 'e' || s[i] == 'E') && (s[i + 1] == 'o' || s[i + 1] == 'O'))
                    continue;
                else if ((s[i] == 'o' || s[i] == 'O') && (s[i + 1] == 'w' || s[i + 1] == 'W'))
                    continue;
                else if ((s[i] == 'm' || s[i] == 'M') && (s[i + 1] == 'm' || s[i + 1] == 'M'))
                    continue;
                else if ((s[i] == 'e' || s[i] == 'E') && (s[i + 1] == 'e' || s[i + 1] == 'E'))
                    continue;
                else if ((s[i] == 'o' || s[i] == 'O') && (s[i + 1] == 'o' || s[i + 1] == 'O'))
                    continue;
                else if ((s[i] == 'w' || s[i] == 'W') && (s[i + 1] == 'w' || s[i + 1] == 'W'))
                    continue;
                else
                    flag = 0;
            }
        }
        if (flag)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}