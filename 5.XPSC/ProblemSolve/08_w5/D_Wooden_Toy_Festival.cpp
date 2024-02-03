#include <bits/stdc++.h>
#define ll long long
using namespace std;
bool minTime(int mid, vector<int> &v)
{
    vector<int> res;
    int val = v[0] - mid;
    res.push_back(val);
    for (int i = 1; i < v.size(); i++)
    {
        if (abs(val - v[i]) > mid)
        {
            val = v[i] - mid;
            res.push_back(val);
        }
    }
    if (res.size() <= 3)
    {
        return true;
    }
    return false;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        sort(v.rbegin(), v.rend());
        int l = 0, r = 1e9;
        int ans = 1e9;
        while (l <= r)
        {
            int mid = l + (r - l) / 2;
            if (minTime(mid, v))
            {
                ans = mid;
                r = mid - 1;
            }
            else
            {
                l = mid + 1;
            }
        }
        cout << ans << endl;
    }

    return 0;
}