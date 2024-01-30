#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        map<char, int> mp;
        char a[3][3];
        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                cin >> a[i][j];
            }
        }
        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                mp[a[i][j]]++;
            }
        }
        for (auto it = mp.begin(); it != mp.end(); it++)
        {
            if (it->second == 2)
            {
                cout << it->first << endl;
            }
        }
    }

    return 0;
}