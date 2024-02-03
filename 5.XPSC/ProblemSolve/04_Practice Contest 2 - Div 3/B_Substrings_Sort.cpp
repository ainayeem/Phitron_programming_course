// https: // codeforces.com/problemset/problem/988/B
#include <bits/stdc++.h>
using namespace std;

bool subString(string a, string b)
{
    return b.find(a) != string::npos;
}

bool compare(string a, string b)
{
    return a.length() < b.length(); // choto string age asbe
}

int main()
{
    int n;
    cin >> n;
    vector<string> s(n);
    for (int i = 0; i < n; i++)
    {
        cin >> s[i];
    }
    sort(s.begin(), s.end(), compare);

    bool psbl = true;
    for (int i = 0; i < n - 1; i++)
    {
        if (!subString(s[i], s[i + 1]))
        {
            psbl = false;
            break;
        }
    }
    if (psbl)
    {
        cout << "YES" << endl;
        for (string sOut : s)
        {
            cout << sOut << endl;
        }
    }
    else
    {
        cout << "NO" << endl;
    }

    // for (int i = 0; i < n; i++)
    // {
    //     cout << s[i] << endl;
    // }

    return 0;
}