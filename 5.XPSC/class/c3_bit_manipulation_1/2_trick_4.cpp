// count set bit (koyta 1 ase)

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int ans = 0;
    while (n > 0)
    {
        ans += n & 1;
        n = n >> 1;
    }
    cout << ans << endl;
    return 0;
}

// 5.
// last bit 1 thakle 0 korar way
// n & (n-1)
// 2^i=n & (n-1)