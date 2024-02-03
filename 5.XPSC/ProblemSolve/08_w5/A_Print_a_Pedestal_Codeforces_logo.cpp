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
        int l, m, s;
        s = n / 3;
        l = s;
        m = s;
        int d = n % 3;
        d += 3;
        l--;
        m--;
        s--;
        if (d == 3)
            l += 2, m += 1;
        else if (d == 4)
            l += 3, m += 1;
        else if (d == 5)
            l += 3, m += 2;
        cout << m << " " << l << " " << s << endl;
    }

    return 0;
}