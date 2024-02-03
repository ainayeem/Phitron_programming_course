#include <bits/stdc++.h>
#define ll long long
#define YES cout << "YES" << endl;
#define NO cout << "NO" << endl;
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int cnt = 0;
        for (int i = 0; i < 5; i++)
        {
            int v;
            cin >> v;
            if (v == 1)
            {
                cnt++;
            }
        }
        if (cnt >= 4)
        {
            YES
        }
        else
        {
            NO
        }
    }

    return 0;
}