#include <bits/stdc++.h>
using namespace std;

const int N = 2e5 + 5;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int count[N] = {0};
        int result = -1;

        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        for (int i = 0; i < n; i++)
        {
            count[a[i]]++;
            if (count[a[i]] >= 3)
            {
                result = a[i];
                break;
            }
        }
        cout << result << endl;
    }

    return 0;
}
