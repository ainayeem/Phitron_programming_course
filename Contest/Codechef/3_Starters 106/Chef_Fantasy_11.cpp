#include <bits/stdc++.h>
using namespace std;
int fact(int n)
{
    if (n <= 1)
        return 1;
    return n * fact(n - 1);
}

int nPr(int n, int r)
{
    return fact(n) / fact(n - r);
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int ans = nPr(n, 2);
        cout << ans << endl;
    }

    return 0;
}