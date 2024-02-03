// 1. x^x = 0(xor)
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        int a;
        cin >> a;
        ans = ans ^ a;
    }
    cout << ans << endl;
    return 0;
}
// ekta odd thakle ta ber korar way
// 2.
// even & 1 = 0;
// odd & 1 = 1;
// 3.
// 2ta num er A to B te nite koyta bit change korte hobe ta xor kore jana jai