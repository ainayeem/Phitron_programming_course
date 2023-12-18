#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        string trgt = "CODETOWN";
        int flag = 1;
        for (int i = 0; i < s.size(); i++)
        {
            if (trgt[i] == 'A' || trgt[i] == 'E' || trgt[i] == 'I' || trgt[i] == 'O' || trgt[i] == 'O')
            {
                if (s[i] == 'A' || s[i] == 'E' || s[i] == 'I' || s[i] == 'O' || s[i] == 'O')
                {
                    continue;
                }
                else
                {
                    flag = 0;
                    break;
                }
            }
            else
            {
                if (s[i] == 'A' || s[i] == 'E' || s[i] == 'I' || s[i] == 'O' || s[i] == 'O')
                {
                    flag = 0;
                    break;
                }
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