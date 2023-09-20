// O(N*S)
#include <bits/stdc++.h>
using namespace std;

int dp[1005][1005];
int knapsack(int n, int s, int profit[], int weight[])
{
    // base case
    if (n == 0 || s == 0)
        return 0;
    if (dp[n][s] != -1)
    {
        return dp[n][s];
    }

    if (weight[n - 1] <= s)
    {
        // if include
        int op1 = knapsack(n - 1, s - weight[n - 1], profit, weight) + profit[n - 1];
        // not include
        int op2 = knapsack(n - 1, s, profit, weight);
        return dp[n][s] = max(op1, op2);
    }
    else
    {
        return dp[n][s] = knapsack(n - 1, s, profit, weight);
    }
}
int main()
{
    int n;
    cin >> n;
    int profit[n], weight[n];
    for (int i = 0; i < n; i++)
    {
        cin >> profit[i];
    }

    for (int i = 0; i < n; i++)
    {
        cin >> weight[i];
    }
    int s;
    cin >> s;
    for (int i = 0; i <= n; i++)
    {
        for (int j = 0; j <= s; j++)
        {
            dp[i][j] = -1;
        }
    }

    cout << knapsack(n, s, profit, weight);

    return 0;
}
/*
4
1 5 3 2
5 2 4 3
7
*/