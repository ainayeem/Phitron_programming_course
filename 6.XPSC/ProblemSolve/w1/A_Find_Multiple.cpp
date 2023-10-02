#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b, c, m;
    cin >> a >> b >> c;
    int flag = 0;
    for (int i = 1; i <= c; i++)
    {
        m = i * c;
        if (m >= a && m <= b)
        {
            flag = 1;
            break;
        }
    }
    if (flag == 1)
    {
        cout << m << endl;
    }
    else
        cout << "-1" << endl;
    // cout << m << endl;

    return 0;
}
// G