#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        int f = 0, l = 0;
        for (int i = 0; i < s.size() / 2; i++)
        {

            f += s[i];
        }
        for (int i = 3; i < s.size(); i++)
        {
            l += s[i];
        }
        if (f == l)
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