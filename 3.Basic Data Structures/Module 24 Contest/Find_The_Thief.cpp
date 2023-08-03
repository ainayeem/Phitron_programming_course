#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int n;
        cin >> n;
        int a[n];
        int freq[100] = {0};

        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        for (int i = 0; i < n; i++)
        {
            freq[a[i]]++;
        }
        for (int i = 0; i < n; i++)
        {

            if (freq[i] % 2 != 0)
            {
                cout << i << endl;
            }
        }
    }

    return 0;
}