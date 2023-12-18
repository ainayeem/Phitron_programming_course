#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int x, y;
        cin >> x >> y;
        int mx = max(x, y);
        cout << (mx * 2) - 1 << endl;
    }

    return 0;
}