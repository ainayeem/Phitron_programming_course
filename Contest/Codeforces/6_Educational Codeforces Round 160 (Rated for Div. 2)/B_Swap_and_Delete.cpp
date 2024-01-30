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
        string t = s;

        vector<int> one;
        vector<int> zero;

        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] == '1')
            {
                one.push_back(i);
            }
            else
            {
                zero.push_back(i);
            }
        }
        int it = 0;
        while (it < min(one.size(), zero.size()))
        {
            int i = one[it];
            int j = zero[it];
            int tmp = t[i];
            t[i] = t[j];
            t[j] = tmp;
            it++;
        }
        int ans = 0, i = 0, j = 0;
        int n = s.size();
        while (i < n && j < n)
        {
            if (s[i] == t[j])
            {
                ans++;
                j++;
            }
            else
            {
                i++;
                j++;
            }
        }
        cout << ans << endl;
    }

    return 0;
}