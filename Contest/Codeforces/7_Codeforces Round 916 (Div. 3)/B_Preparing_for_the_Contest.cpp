#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        int r = n - k; // 4
        int en = n;

        for (int i = 0; i < n; i++)
        {

            if (r <= n)
            {
                cout << r << " ";
                r++;
                en--;
            }
        }
        for (int i = en; i > 0; i--)
        {
            cout << i << " ";
        }

        cout << endl;
    }

    return 0;
}