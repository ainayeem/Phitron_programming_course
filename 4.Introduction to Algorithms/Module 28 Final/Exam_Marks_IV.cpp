#include <bits/stdc++.h>
using namespace std;
const int MOD = 1e9 + 7;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        int s = 1000 - m;

        // ============================
        // bool dp[n + 1][s + 1];
        long long int dp[n + 1][s + 1];
        // dp[0][0] = true;
        dp[0][0] = 1;
        for (int i = 1; i <= s; i++)
            // dp[0][i] = false;
            dp[0][i] = 0;
        for (int i = 1; i <= n; i++)
        {
            for (int j = 0; j <= s; j++)
            {
                if (a[i - 1] <= j)
                {
                    // 0-1 knapsack---> banano jai kina?
                    // dp[i][j] = dp[i - 1][j - w[i - 1]] || dp[i - 1][j];

                    // 0-1 knapsack---> kotobhabe banano jai?
                    // dp[i][j] = dp[i - 1][j - w[i - 1]] + dp[i - 1][j];

                    // for unbound knapsack---> same item nea koto bhabe banano jai?
                    // dp[i][j] = dp[i][j - a[i - 1]] + dp[i - 1][j] % MOD;
                    long long int temp = dp[i][j - a[i - 1]] + dp[i - 1][j];
                    if (temp > MOD)
                    {
                        dp[i][j] = temp % MOD;
                    }
                    else
                    {
                        dp[i][j] = temp;
                    }
                }
                else
                {
                    dp[i][j] = dp[i - 1][j] % MOD;
                }
            }
        }
        // if (dp[n][s])
        //     cout << "yes" << endl;
        // else
        //     cout << "no" << endl; // 1 2 3 use kore 5 banano jabe kina?
        cout << dp[n][s] << endl;
    }

    return 0;
}
