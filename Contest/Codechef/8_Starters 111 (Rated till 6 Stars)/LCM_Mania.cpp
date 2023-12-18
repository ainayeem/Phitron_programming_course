#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        if (n == 1)
        {
            cout << "-1" << endl;
        }
        else if (n % 3 == 0)
        {
            cout << n / 3 << endl;
        }
    }

    return 0;
}