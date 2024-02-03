#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long int n;
        cin >> n;
        long long int ans = n;
        while (n != 1)
        {
            ans += n / 2;
            n = n / 2;
        }
        cout << ans << endl;
    }

    return 0;
}