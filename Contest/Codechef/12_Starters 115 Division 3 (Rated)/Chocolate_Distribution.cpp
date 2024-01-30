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
        int n;
        cin >> n;
        if (n % 2 == 0)
        {
            cout << n / 2 << " " << n << endl;
        }
        else
        {
            cout << (n / 2) + 1 << " " << n << endl;
        }
    }

    return 0;
}