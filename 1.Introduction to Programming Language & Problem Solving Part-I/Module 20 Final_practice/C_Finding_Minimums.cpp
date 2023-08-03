#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, k;
    cin >> n >> k;
    int ar[n];
    for (int i = 0; i < n; i++)
    {
        cin >> ar[i];
    }
    int b = k - 1;
    int min = INT_MAX;

    for (int i = 0; i < n; i++)
    {
        if (ar[i] < min)
        {
            min = ar[i];
        }
        if (i == b)
        {
            cout << min << " ";
            b = b + k;
            min = INT_MAX;
        }
    }
    if (n % k)
    {
        cout << min;
    }

    return 0;
}