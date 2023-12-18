#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int q;
    cin >> q;
    while (q--)
    {
        int i = 0, j = 0;
        cin >> i >> j;
        int sum = 0;
        for (int k = i; k <= j; k++)
        {
            sum += a[k];
            // cout <<  << " ";
        }
        cout << sum << endl;
        // cout << endl;
    }

    return 0;
}