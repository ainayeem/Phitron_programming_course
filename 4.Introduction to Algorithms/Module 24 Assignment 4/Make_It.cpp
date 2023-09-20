#include <bits/stdc++.h>
using namespace std;
int dp[100005][5];
bool make_it(int i, int n)
{

    if (i == n)
    {
        return true;
    }
    else if (i > n)
    {
        return false;
    }
    else if (dp[i][0] != -1)
    {
        return dp[i][0];
    }
    else
    {
        bool op1 = make_it(i + 3, n);
        bool op2 = make_it(i * 2, n);
        return dp[i][0] = op1 || op2;
    }
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int i = 1;

        for (int k = 0; k <= n; k++)
        {
            for (int j = 0; j <= i; j++)
            {
                dp[k][j] = -1;
            }
        }
        if (make_it(i, n))
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}