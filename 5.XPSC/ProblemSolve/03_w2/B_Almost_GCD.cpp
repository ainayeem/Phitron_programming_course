// https: // atcoder.jp/contests/abc182/tasks/abc182_b?lang=en
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int prevCount = 0, k;
    for (int i = 2; i <= *max_element(a, a + n); i++)
    {
        int count = 0;
        for (int j = 0; j < n; j++)
        {
            if (a[j] % i == 0)
            {
                count++;
            }
        }

        // cout << i << " " << k << " " << count << " " << prevCount << endl;

        if (count >= prevCount)
        {
            k = i;
            prevCount = count;
        }
    }
    cout << k << endl;

    return 0;
}