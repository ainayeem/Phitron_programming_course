#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, q;
        cin >> n >> q;
        string s;
        cin >> s;

        int c = 1;
        int ans = 1;
        for (int i = 1; i < s.size(); i++)
        {
            if (s[i] == s[i - 1])
            {
                c++;
                ans = max(ans, c);
            }
            else
            {
                c = 1;
            }
        }
        cout << ans << " ";
        for (int i = n; i < (n + q); i++)
        {
            char ts;
            cin >> ts;
            s += ts;

            if (s[i] == s[i - 1])
            {
                c++;
                ans = max(ans, c);
            }
            else
            {
                c = 1;
            }
            cout << ans << " ";
        }
        cout << endl;
    }
}