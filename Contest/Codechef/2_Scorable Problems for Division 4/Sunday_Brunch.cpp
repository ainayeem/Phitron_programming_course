#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b;
        cin >> a >> b;
        int res = a / b;
        if (res >= 20)
        {
            cout << "20" << endl;
        }
        else
        {
            cout << res << endl;
        }
    }

    return 0;
}