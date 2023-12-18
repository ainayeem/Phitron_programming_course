#include <bits/stdc++.h>
using namespace std;
double dist(int x1, int y1, int x2, int y2)
{
    double d = sqrt((x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2));
    return d;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int p1, p2, a1, a2, b1, b2;
        cin >> p1 >> p2 >> a1 >> a2 >> b1 >> b2;

        double d1, d2, d3, d4, d5;
        d1 = dist(p1, p2, a1, a2);
        d2 = dist(p1, p2, b1, b2);
        d3 = dist(0, 0, a1, a2);
        d4 = dist(0, 0, b1, b2);
        d5 = dist(a1, a2, b1, b2);

        double ans = max(min(d1, d2), min(d3, d4));

        if ((min(d1, d2) != d1 && min(d3, d4) != d3) || (min(d1, d2) != d2 && min(d3, d4) != d4))
        {
        }
        else
        {
            if (2 * ans < d5)
                ans = d5 / 2;
        }
        cout << setprecision(11) << ans << endl;
    }

    return 0;
}