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
        vector<string> v1(n);
        vector<string> v2(n);
        vector<string> v3(n);

        map<string, int> fr;

        for (int i = 0; i < n; i++)
        {
            cin >> v1[i];
            fr[v1[i]]++;
        }
        for (int i = 0; i < n; i++)
        {
            cin >> v2[i];
            fr[v2[i]]++;
        }
        for (int i = 0; i < n; i++)
        {
            cin >> v3[i];
            fr[v3[i]]++;
        }

        // for (auto it = fr.begin(); it != fr.end(); it++)
        // {

        //     // cout << it->first << " " << it->second << endl;
        // }
        int p1 = 0, p2 = 0, p3 = 0;
        for (int i = 0; i < n; i++)
        {
            if (fr[v1[i]] == 2)
            {
                p1 += 1;
            }
            else if (fr[v1[i]] == 1)
                p1 += 3;

            if (fr[v2[i]] == 2)
            {
                p2 += 1;
            }
            else if (fr[v2[i]] == 1)
                p2 += 3;

            if (fr[v3[i]] == 2)
            {
                p3 += 1;
            }
            else if (fr[v3[i]] == 1)
                p3 += 3;
        }
        cout << p1 << " " << p2 << " " << p3 << endl;
    }

    return 0;
}
