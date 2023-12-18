#include <bits/stdc++.h>
using namespace std;

int gcdValue(int i, int j, int k)
{
    int res = gcd(i, j);
    int res2 = gcd(res, k);
    return res2;
}

int main()
{
    int n, sum = 0;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            for (int k = 1; k <= n; k++)
            {
                sum += gcdValue(i, j, k);
            }
        }
    }
    cout << sum << endl;

    return 0;
}