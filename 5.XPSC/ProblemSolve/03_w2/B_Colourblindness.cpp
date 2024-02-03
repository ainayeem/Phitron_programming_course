#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string a, b;
        cin >> a >> b;
        int flag = 1;
        for (int i = 0; i < n; i++)
        {
            if (a[i] != b[i] && (a[i] == 'R' || b[i] == 'R'))
            {
                flag = 0;
                break;
            }
        }
        cout << (flag ? "YES" : "NO") << endl;
    }

    return 0;
}