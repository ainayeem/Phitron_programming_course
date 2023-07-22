#include <bits/stdc++.h>
using namespace std;

int main()
{

    int test;
    cin >> test;
    for (int i = 0; i < test; i++)
    {
        int n;
        cin >> n;
        vector<int> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }

        map<int, int> mp;
        int count = 0;
        int maxValue = 0;

        for (int i = 0; i < n; i++)
        {
            mp[v[i]]++;
            if (mp[v[i]] > count)
            {
                count = mp[v[i]];
                maxValue = v[i];
            }
            else if (mp[v[i]] == count && v[i] > maxValue)
            {
                count = mp[v[i]];
                maxValue = v[i];
            }
        }
        cout << maxValue << " " << count;
        cout << endl;
    }

    return 0;
}