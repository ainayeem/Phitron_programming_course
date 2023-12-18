#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int L, v, l, r;
        cin >> L >> v >> l >> r;

        int ltCount = L / v;

        int coverCount = r / v - (l - 1) / v;

        int visCount = ltCount - coverCount;
        cout << visCount << endl;
    }

    return 0;
}
