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
        int cnt = 0;
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] == '+')
            {
                cnt++;
            }
        }

        if (s.size() != 14 || cnt > 1)
        {
            cout << "NO" << endl;
        }
        else
        {
            if (s[0] == '+' && s[1] == '8' && s[2] == '8' && s[3] == '0' && s[4] == '1')
            {
                if (s[5] == '3' || s[5] == '7' || s[5] == '4' || s[5] == '9' || s[5] == '5' || s[5] == '6' || s[5] == '8')
                {
                    cout << "YES" << endl;
                }
                else
                {
                    cout << "NO" << endl;
                }
            }
            else
            {
                cout << "NO" << endl;
            }
        }
    }

    return 0;
}