#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, val;
        cin >> n;
        string s;
        cin >> s;
        string ans = "";
        for (int i = n - 1; i >= 0;)
        {
            if (s[i] == '0') // 0 to 9==48 to 57
            {
                val = ((s[i - 2] - 48) * 10) + (s[i - 1] - 48);
                i = i - 3;
            }
            else
            {
                val = s[i] - 48;
                i = i - 1;
            }
            ans = ans + char(val + 97 - 1);
        }
        reverse(ans.begin(), ans.end());
        cout << ans << endl;
    }

    return 0;
}
