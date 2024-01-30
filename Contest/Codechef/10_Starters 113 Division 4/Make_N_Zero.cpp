#include <bits/stdc++.h>
#define ll long long
using namespace std;

bool chkz(int n)
{
    if (n == 0)
    {
        return true;
    }
    if (n < 0)
    {
        return false;
    }
    return chkz(n - 3) || chkz(n - 4);
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        if (chkz(n))
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}