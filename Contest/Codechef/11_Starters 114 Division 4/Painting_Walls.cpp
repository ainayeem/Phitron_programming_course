#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int x, y, z;
        cin >> x >> y >> z;
        ll area = x * y;     // 8
        ll canPaint = z / 2; // 26
        cout << canPaint / area << endl;
    }

    return 0;
}