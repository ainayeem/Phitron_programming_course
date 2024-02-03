#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long int n;
        cin >> n;
        string s;
        cin >> s;
        vector<long long> v(n, 0); // 2,0,2
        long long int sum = 0;     // 0+1+0+2+2+0
        for (int i = 0; i < n; i++)
        {
            long long int l; // 0,1,0
            if (s[i] == 'L')
            {
                l = i;
            }
            else
            {
                l = n - i - 1;
            }

            long long int mx; // 2,1,2
            if (i > (n - i - 1))
            {
                mx = i;
            }
            else
            {
                mx = n - i - 1;
            }
            sum += l;
            long long int dif = mx - l; // 2,0,2
            // cout << cur << "-" << mx << "-" << dif << endl;
            v[i] = dif;
        }
        sort(v.rbegin(), v.rend()); // 2,2,0
        for (int i = 0; i < n; i++)
        {
            // cout << v[i] << " ";
            sum += v[i];
            cout << sum << " ";
        }
        cout << endl;
    }

    return 0;
}