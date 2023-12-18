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
        vector<int> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        vector<int> ev, od;
        for (int i = 0; i < n; i++)
        {
            if (a[i] % 2 == 0)
            {
                ev.push_back(a[i]);
            }
            else
            {
                od.push_back(a[i]);
            }
        }
        sort(ev.begin(), ev.end());
        sort(od.begin(), od.end());

        bool ep = true, op = true;
        // even check
        for (int i = 0; i < n; i++)
        {
            if (a[i] % 2 == 0)
            {
                continue;
            }
            if (od.empty() || od[0] >= a[i])
            {
                ep = false;
                break;
            }
        }
        // odd check
        for (int i = 0; i < n; i++)
        {
            if (a[i] % 2 != 0)
            {
                continue;
            }
            if (od.empty() || od[0] >= a[i])
            {
                op = false;
                break;
            }
        }
        if (ep || op)
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
