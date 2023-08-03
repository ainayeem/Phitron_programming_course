#include <bits/stdc++.h>
using namespace std;

int main()
{
    string a, b;
    cin >> a >> b;

    // cout << a << b << endl;
    int result = a.compare(b);
    // cout << result << endl;
    if (result == 0)
    {
        cout << a << endl;
    }
    else if (result < 0)
    {
        cout << a << endl;
    }
    else
    {
        cout << b << endl;
    }

    return 0;
}