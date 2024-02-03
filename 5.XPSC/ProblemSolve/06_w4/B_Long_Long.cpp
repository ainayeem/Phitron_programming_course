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
        long long int sum = 0;
        for (auto &i : v)
        {
            cin >> i;
            sum += abs(i);
        }
        int count = 0; // 1,2,3,4,0,1,2
        int ans = 0;   // 1,
        for (auto i : v)
        {
            if (i == 0 && count == 0)
            {
                continue;
            }
            if (i <= 0)
            {
                count++;
            }
            else
            {
                if (count > 0)
                {
                    ans++;
                }
                count = 0;
            }
        }
        if (count) // 1
        {
            ans++; // 2
        }
        cout << sum << " " << ans << endl;
    }

    return 0;
}