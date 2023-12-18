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
        vector<int> v(n);
        map<int, int> mp;
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        int cnt = 0;
        int flag = 0;
        for (int i = n - 1; i >= 0; i--)
        {
            // cout << v[i] << " ";//3,1,4,
            if (mp[v[i]] == 0 && flag == 0)
            {
                cnt++;
                mp[v[i]]++;
                // cout << v[i] << " ";
            }
            else if (mp[v[i]] == 1)
            {
                flag = 1;
            }
        }
        cout << n - cnt << endl;
    }

    return 0;
}