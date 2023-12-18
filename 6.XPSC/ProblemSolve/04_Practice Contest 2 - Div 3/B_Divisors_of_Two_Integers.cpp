#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    sort(v.begin(), v.end());
    int x = v[v.size() - 1];

    for (int i = v.size() - 1; i >= 0; i--)
    {
        if (v[i] == v[i - 1])
        {
            continue;
        }
        if (x % v[i] == 0)
        {
            v.erase(v.begin() + i);
        }
    }
    int y = v[v.size() - 1];

    // for (int i = 0; i < v.size(); i++)
    // {
    //     cout << v[i] << endl;
    // }
    cout << x << " " << y << endl;

    return 0;
}