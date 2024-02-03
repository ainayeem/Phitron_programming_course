// https://codeforces.com/problemset/problem/433/B
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    long long int a[n];
    long long int b[n];

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        b[i] = a[i];
    }
    sort(b, b + n);

    long long preSum[n + 1], preSum2[n + 1];
    preSum[0] = 0;
    for (int i = 0; i < n; i++)
    {
        preSum[i] = preSum[i - 1] + a[i];
    }

    preSum2[0] = 0;
    for (int i = 0; i < n; i++)
    {
        preSum2[i] = preSum2[i - 1] + b[i];
    }

    int q;
    cin >> q;
    while (q--)
    {
        long long int type, l, r;
        cin >> type >> l >> r;

        if (type == 1)
        {
            cout << preSum[r - 1] - preSum[l - 1 - 1] << endl;
        }
        else
        {
            cout << preSum2[r - 1] - preSum2[l - 1 - 1] << endl;
        }
    }

    return 0;
}