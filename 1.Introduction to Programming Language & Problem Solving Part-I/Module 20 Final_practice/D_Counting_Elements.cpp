#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int ar[n];
    for (int i = 0; i < n; i++)
    {
        cin >> ar[i];
    }
    sort(ar, ar + n);
    // for (int i = 0; i < n; i++)
    // {
    //     cout << ar[i];
    // }
    int cnt = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (ar[i] + 1 == ar[j])
            {
                cnt++;
                break;
            }
        }
    }
    cout << cnt;

    return 0;
}