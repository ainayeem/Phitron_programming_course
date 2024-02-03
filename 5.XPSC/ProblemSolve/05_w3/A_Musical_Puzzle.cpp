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
        set<string> val;
        for (int i = 0; i < n - 1; i++)
        {
            string temp;
            temp.push_back(s[i]);
            temp.push_back(s[i + 1]);
            val.insert(temp);

            // cout << temp << endl;
        }
        // for (auto it = val.begin(); it != val.end(); it++)
        // {
        //     cout << *it;
        // }
        cout << val.size() << endl;
    }

    return 0;
}