#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        int eq = n / (k + 1); // 99
        cout << n - (k * eq) << endl;
    }

    return 0;
}