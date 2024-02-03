#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b, c, d;
        cin >> a >> b >> c >> d;
        int flag = 0;
        if (b > a && d > c && c > a && d > b)
        {
            flag = 1;
        }
        if (a > c && b > d && d > c && b > a)
        {
            flag = 1;
        }
        if (c > d && a > b && b > d && a > c)
        {
            flag = 1;
        }
        if (d > b && c > a && a > b && c > d)
        {
            flag = 1;
        }
        if (flag)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }

    return 0;
}