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
        string s;
        cin >> s;

        int x = (s[0] - 'a');
        int y = (s[1] - 'a');
        // cout << x << " " << y << endl;
        if (x > y)
            cout << x * 25 + y + 1 << endl;
        else
            cout << x * 25 + y << endl;
    }

    return 0;
}