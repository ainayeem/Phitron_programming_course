/*
Website for Visualizing Recursion: https://recursion.vercel.app/

Code for running the 0-1 knapsack recursion:
def fn(n, s):
    if n == 0 or s == 0:
        return 0
    if w[n - 1] <= s:
        op1 = fn(n - 1, s - w[n - 1]) + v[n - 1]
        op2 = fn(n - 1, s)
        return max(op1, op2)
    else:
        return fn(n - 1, s)

*/

#include <bits/stdc++.h>
using namespace std;

int knapsack(int n, int s, int profit[], int weight[])
{
    // base case
    if (n == 0 || s == 0)
        return 0;

    if (weight[n - 1] <= s)
    {
        // if include
        int op1 = knapsack(n - 1, s - weight[n - 1], profit, weight) + profit[n - 1];
        // not include
        int op2 = knapsack(n - 1, s, profit, weight);
        return max(op1, op2);
    }
    else
    {
        return knapsack(n - 1, s, profit, weight);
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
    cout << knapsack(n, s, profit, weight);

    return 0;
}
/*
4
1 5 3 2
5 2 4 3
7
*/