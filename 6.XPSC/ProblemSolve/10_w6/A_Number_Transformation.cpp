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
        int a = 0;
        int b = 0;
        if (y % x == 0)
        {
            b = y / x;
            a = 1;
        }
        cout << a << " " << b << endl;
    }

    return 0;
}