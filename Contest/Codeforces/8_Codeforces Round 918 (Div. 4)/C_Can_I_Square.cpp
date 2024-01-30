#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        long long sum = 0;
        for (int i = 0; i < n; i++)
        {
            int v;
            cin >> v;
            sum += v;
        }
        long long squre = sqrt(sum);
        long long calsqr = squre * squre;
        if (sum == calsqr)
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