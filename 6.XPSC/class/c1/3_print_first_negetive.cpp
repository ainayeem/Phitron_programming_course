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
    int k;
    cin >> k;
    int i = 0, j = 0;
    queue<int> q;

    while (j < n)
    {
        if (a[j] < 0)
        {
            q.push(a[j]);
        }
        if (j >= k - 1)
        {
            if (q.size())
            {
                cout << q.front() << " ";
            }
            else
            {
                cout << 0 << " ";
            }
            if (a[i] < 0)
                q.pop();
            i++;
        }
        j++;
    }

    return 0;
}
/*
8
2 -3 -1 5 -2 2 1 5
4

*/