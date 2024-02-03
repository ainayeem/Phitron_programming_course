#include <bits/stdc++.h>
using namespace std;
const int N = 1e5 + 5;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int fr[N] = {0};
        for (int i = 0; i < n; i++)
        {
            int v;
            cin >> v;
            fr[v]++;
        }
        int ln = 0, rm = 0;
        for (int i = 0; i < N; i++)
        {
            if (fr[i] != 0)
            {
                rm += fr[i] - 1;
            }
        }
        ln = n - rm;
        if (rm % 2 != 0)
        {
            ln--;
        }
        cout << ln << endl;
    }

    return 0;
}

// D