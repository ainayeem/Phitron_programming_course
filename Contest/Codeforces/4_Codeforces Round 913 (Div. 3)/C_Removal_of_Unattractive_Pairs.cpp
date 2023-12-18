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
        string s;
        cin >> s;

        map<char, int> freq;
        int mxfr = 0;
        for (int i = 0; i < n; i++)
        {
            freq[s[i]]++;
            mxfr = max(mxfr, freq[s[i]]);
        }
        if (mxfr > n / 2)
        {
            cout << mxfr - (n - mxfr) << endl;
        }
        else
        {
            cout << n % 2 << endl;
        }
    }

    return 0;
}