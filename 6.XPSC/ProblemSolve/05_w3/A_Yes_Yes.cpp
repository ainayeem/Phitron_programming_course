#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        int flag = 1;
        if (s.size() == 1)
        {
            if (s[0] == 'Y' || s[0] == 'e' || s[0] == 's')
            {
                flag = 1;
            }
            else
            {
                flag = 0;
            }
        }
        for (int i = 0; i < s.size() - 1; i++)
        {
            if (s[i] == 'e' && s[i + 1] == 's')
            {
                continue;
            }
            else if (s[i] == 'Y' && s[i + 1] == 'e')
            {
                continue;
            }
            else if (s[i] == 's' && s[i + 1] == 'Y')
            {
                continue;
            }
            else
            {
                flag = 0;
                break;
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