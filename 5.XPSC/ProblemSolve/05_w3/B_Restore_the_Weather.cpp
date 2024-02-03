#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        vector<pair<int, int>> vp;
        vector<int> sv, res(n);
        for (int i = 0; i < n; i++)
        {
            int tmp;
            cin >> tmp;
            vp.push_back(make_pair(tmp, i));
        }
        for (int i = 0; i < n; i++)
        {
            int tmp;
            cin >> tmp;
            sv.push_back(tmp);
        }
        sort(vp.begin(), vp.end());
        sort(sv.begin(), sv.end());

        for (int i = 0; i < n; i++)
        {
            res[vp[i].second] = sv[i];
        }

        for (int i = 0; i < n; i++)
        {
            cout << res[i] << " ";
        }
        cout << endl;
    }

    return 0;
}