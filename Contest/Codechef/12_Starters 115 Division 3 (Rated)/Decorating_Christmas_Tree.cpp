#include <bits/stdc++.h>
#define ll long long
#define YES cout << "YES" << endl;
#define NO cout << "NO" << endl;
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, x, y;
        cin >> n >> x >> y;

        int lc = 0;
        lc += y / 3;
        int remning = x - lc;

        lc += remning / 2;

        if (n <= lc && x >= n)
        {
            YES
        }
        else
        {
            NO
        }
    }

    return 0;
}