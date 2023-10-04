#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    long long int a[n];
    long long int sum1 = 0;
    for (int i = 0; i < n - 1; i++)
    {
        cin >> a[i];
        sum1 += a[i];
        // cout << sum1 << " ";
    }
    double sum2 = (double)n * ((double)n + 1) / 2;
    cout << sum2 - sum1 << endl;

    return 0;
}