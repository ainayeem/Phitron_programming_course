// https: // codeforces.com/problemset/problem/1077/B
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
    int k = 0;
    for (int i = 0; i < n - 1; i++)
    {
        // cout << i << " ";
        if (a[i] == 0 && a[i - 1] == 1 && a[i + 1] == 1)
        {
            k++;
            i += 2;
            // cout << i << " " << a[i] << endl;
        }
    }
    cout << k << endl;

    return 0;
}