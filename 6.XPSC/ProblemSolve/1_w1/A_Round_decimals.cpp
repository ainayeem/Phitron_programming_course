#include <bits/stdc++.h>
using namespace std;

int main()
{
    float a;
    cin >> a;
    float m = a - floor(a);
    // cout << "m" << m << endl;
    if (m < 0.5)
    {
        cout << floor(a) << endl;
    }
    else if (m == 0.5)
    {
        cout << ceil(a) << endl;
    }
    else
    {
        cout << ceil(a) << endl;
    }

    return 0;
}