#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long int k, s;
    cin >> k >> s;
    long long int count = 0;
    for (int i = 0; i <= k; i++)
    {
        for (int j = 0; j <= k; j++)
        {
            int l = s - i - j;
            if (l >= 0 && l <= k)
            {
                count++;
            }
        }
    }
    cout << count << endl;

    return 0;
}