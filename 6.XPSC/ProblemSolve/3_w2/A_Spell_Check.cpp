#include <bits/stdc++.h>
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

        sort(s.begin(), s.end());
        // cout << s << endl;

        // string c1 = "Timur",
        //        c2 = "miurT", c3 = "Trumi", c4 = "mriTu";

        if (s == "Timru")
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