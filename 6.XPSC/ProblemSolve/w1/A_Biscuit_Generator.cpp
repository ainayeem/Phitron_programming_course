#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b, c, d;
    cin >> a >> b >> c;

    if (c / a != 0)
    {
        d = c - (c % a);
    }

    cout << (b * d) / a << endl;
    return 0;
}