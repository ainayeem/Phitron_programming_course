#include <bits/stdc++.h>
using namespace std;

int main()
{
    int sz;
    cin >> sz;
    int res = 0;
    for (int i = 0; i < sz; i++)
    {
        int cnt = 0;
        long long num;
        cin >> num;
        while (num % 2 == 0)
        {
            cnt++;
            num /= 2;
        }
        if (cnt > res)
        {
            res = cnt;
        }
    }
    cout << res;

    return 0;
}