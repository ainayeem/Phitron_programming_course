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

        string ss = ""; // abcc
        for (int i = 2; i < n; i++)
        {
            ss.push_back(s[i]);
        }
        int sIndx = 0, ssIndx = 0;
        long long ans = 1;
        while (sIndx < n - 2)
        {
            if (s[sIndx] != ss[ssIndx])
            {
                ans++;
            }
            sIndx++;
            ssIndx++;
        }
        cout << ans << endl;

        // map<string, int> st;
        // for (int i = 0; i < s.size() - 1; i++)
        // {
        //     string tmp = "";
        //     for (int j = 0; j < s.size(); j++)
        //     {
        //         if (j != i && j != i + 1)
        //         {
        //             tmp += s[j];
        //         }
        //     }
        //     // cout << tmp << endl;
        //     st[tmp]++;
        // }
        // cout << st.size() << endl;
    }

    return 0;
}