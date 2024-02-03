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
        vector<int> v;
        if (n == 3)
        {
            cout << -1 << endl;
        }
        else
        {
            if (n % 2 == 0)
            {
                for (int i = 1; i <= n; i++)
                {
                    v.push_back(i);
                }
                reverse(v.begin(), v.end());
            }
            else
            {
                for (int i = 1; i <= n; i++)
                {
                    v.push_back(i);
                }
                reverse(v.begin(), v.end());
                reverse(v.begin(), (v.end() - (n / 2)));
            }
            for (int i = 0; i < n; i++)
            {
                cout << v[i] << " ";
            }
            cout << endl;
        }
    }

    return 0;
}